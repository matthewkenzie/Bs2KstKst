#include <iostream>

#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TCanvas.h"
#include "TAxis.h"
#include "TLegend.h"

#include "RooWorkspace.h"
#include "RooDataSet.h"
#include "RooArgSet.h"
#include "RooRealVar.h"
#include "RooPlot.h"
#include "RooCBShape.h"
#include "RooAddPdf.h"

#include "../interface/AssessBDTCut.h"

using namespace std;
using namespace RooFit;

AssessBDTCut::AssessBDTCut(TString wsname):
	massRange(5000,5800),
	hasfit(false)
{
	w = new RooWorkspace(wsname);
}

AssessBDTCut::~AssessBDTCut(){
	//delete w;
	//tf->Close();
	//delete tf;
}

void AssessBDTCut::setMassRange(double mlow, double mhigh){
	massRange.first = mlow;
	massRange.second = mhigh;
}

void AssessBDTCut::setBDTCut(double val){
	bdtcut = val;
}

void AssessBDTCut::readTree(TString fname, TString tname){

	TFile *tf = TFile::Open(fname);
	TTree *tree = (TTree*)tf->Get(tname);

	RooDataSet *data = new RooDataSet("data","data",RooArgSet(*(w->var("mass"))));
	RooDataSet *mc = new RooDataSet("mc","mc",RooArgSet(*(w->var("mass"))));

	double B_s0_MM;
	int itype;
	int sqrts;

	tree->SetBranchAddress("B_s0_MM",&B_s0_MM);
	tree->SetBranchAddress("itype",&itype);
	tree->SetBranchAddress("sqrts",&sqrts);

	for (int e=0; e<tree->GetEntries(); e++){
		tree->GetEntry(e);

		if ( B_s0_MM < w->var("mass")->getMin() || B_s0_MM > w->var("mass")->getMax() ) continue;

		w->var("mass")->setVal(B_s0_MM);

		if ( itype < 0 ) {
			mc->add(RooArgSet(*(w->var("mass"))));
		}
		if ( itype > 0 ) {
			data->add(RooArgSet(*(w->var("mass"))));
		}
	}

	w->import(*data);
	w->import(*mc);

	delete tree;
	tf->Close();
	delete tf;
	delete data;
	delete mc;
}

void AssessBDTCut::constructSignalPdf(){

	w->factory("mean[5300,5400]");
	w->factory("CBShape::sig_cb1(mass,mean,sigma_1[100,0,1000],alpha_1[0.,10.],n_1[0.,10.])");
	w->factory("CBShape::sig_cb2(mass,mean,sigma_2[100,0,1000],alpha_2[-10.,0.],n_2[0.,20.])");
	w->factory("SUM::signal( f[0.5,0,1] * sig_cb1, sig_cb2 )");

	RooArgSet *argset = w->pdf("signal")->getParameters(*(w->var("mass")));
	w->defineSet("signal_params",*argset);
	delete argset;
}

void AssessBDTCut::constructBkgPdf(){

	w->factory("Exponential::background( mass, bkg_p1[-0.05,-0.1,0.] )");

	RooArgSet *argset = w->pdf("background")->getParameters(*(w->var("mass")));
	w->defineSet("background_params",*argset);
	delete argset;
}

void AssessBDTCut::constructFullPdf(){

	w->factory("n_background[200,0,2e6]");
	w->factory("n_signal[200,0,2e4]");
	w->factory("SUM::pdf( n_background*background, n_signal*signal )");

	RooArgSet *argset = w->pdf("pdf")->getParameters(*(w->var("mass")));
	w->defineSet("pdf_params",*argset);
	delete argset;
}

void AssessBDTCut::setup(TString fname, TString tname){

	w->factory(Form("mass[%f,%f]",massRange.first,massRange.second));

	readTree(fname,tname);

	constructSignalPdf();
	constructBkgPdf();
	constructFullPdf();

	w->Print();

	//w->var("mass")->Print();
	//w->data("data")->Print();
	//w->data("mc")->Print();

}

void AssessBDTCut::fit(){

	// mc first
	w->pdf("signal")->fitTo(*(w->data("mc")));

	((RooArgSet*)w->set("signal_params"))->setAttribAll("Constant");

	// now fit data
	w->pdf("pdf")->fitTo(*(w->data("data")));

	hasfit = true;
}

void AssessBDTCut::plot(){

	TCanvas *canv = new TCanvas("c","c",600,800);
	canv->Divide(1,2);

	// signal mc
	canv->cd(1);
	RooPlot *mcplot = w->var("mass")->frame(Title("MC: J/#psi#gamma"),Range(4750,6000));
	w->data("mc")->plotOn(mcplot);
	if (hasfit){
		w->pdf("signal")->plotOn(mcplot);
	}
	mcplot->Draw();

	// data
	canv->cd(2);
	RooPlot *dplot = w->var("mass")->frame(Title("Data"));
	TLegend *leg = new TLegend(0.5,0.6,0.89,0.89);
	leg->SetFillColor(0);
	w->data("data")->plotOn(dplot);
	if (hasfit) {
		w->pdf("pdf")->plotOn(dplot,Components("background,signal"),FillColor(kGreen-3),LineColor(kGreen-3),DrawOption("F"));
		TObject *sigLeg = (TObject*)dplot->getObject(dplot->numItems()-1);
		w->pdf("pdf")->plotOn(dplot,Components("background"),LineColor(kOrange-2),FillColor(kOrange-2),DrawOption("F"));
		TObject *backgroundLeg = (TObject*)dplot->getObject(dplot->numItems()-1);
		w->data("data")->plotOn(dplot);
		TObject *dataLeg = (TObject*)dplot->getObject(dplot->numItems()-1);
		w->pdf("pdf")->plotOn(dplot,DrawOption("L"));
		TObject *pdfLeg = (TObject*)dplot->getObject(dplot->numItems()-1);

		leg->AddEntry(dataLeg,"Data (3fb^{-1})","LEP");
		leg->AddEntry(sigLeg,"Signal","LF");
		leg->AddEntry(backgroundLeg,"Combinatorial","LF");
		leg->AddEntry(pdfLeg,"Total PDF","L");
	}
	dplot->Draw();
	leg->Draw("same");

	canv->Update();
	canv->Modified();
	canv->Print("plots/assessbdtcut.pdf");
	canv->Print("plots/assessbdtcut.png");
	delete canv;
}

void AssessBDTCut::save(TString fname){
	w->writeToFile(fname);

	cout << "Use the following estimate of signal and background events for BDT cut optimisation:" << endl;
	cout << "\t" << "nSignal:     " << w->var("n_signal")->getVal() << endl;
	cout << "\t" << "nBackground: " << w->var("n_background")->getVal() << endl;
}

