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

#include "../interface/Fitter.h"

using namespace std;
using namespace RooFit;

Fitter::Fitter(TString wsname):
	bdtcut(0.08),
	hasfit(false)
{
	w = new RooWorkspace(wsname);
	RooArgSet *observables = new RooArgSet();
	w->defineSet("observables",*observables);
	delete observables;
}

Fitter::~Fitter(){
	//delete w;
	//tf->Close();
	//delete tf;
}

void Fitter::setBDTCut(double val){
	bdtcut = val;
}

void Fitter::addObsVar(TString name, double min, double max){
	w->factory(Form("%s[%f,%f]",name.Data(),min,max));
	((RooArgSet*)w->set("observables"))->add(*w->var(name));
}

void Fitter::readTree(TString fname, TString tname){

	TFile *tf = TFile::Open(fname);
	TTree *tree = (TTree*)tf->Get(tname);

	RooArgSet *observables = (RooArgSet*)w->set("observables");

	RooDataSet *data = new RooDataSet("data","data",*observables);
	RooDataSet *mc = new RooDataSet("mc","mc",*observables);

	map<string,double> values;
	RooRealVar *parg;
	TIterator *iter = observables->createIterator();

	while ((parg = (RooRealVar*)iter->Next())){
		values[parg->GetName()] = -999.;
		tree->SetBranchAddress(parg->GetName(),&values[parg->GetName()]);
	}

	delete iter;

	float bdtoutput;
	int itype;
	int sqrts;
	tree->SetBranchAddress("bdtoutput",&bdtoutput);
	tree->SetBranchAddress("itype",&itype);
	tree->SetBranchAddress("sqrts",&sqrts);

	for (int e=0; e<tree->GetEntries(); e++){
		tree->GetEntry(e);

		if ( bdtoutput < bdtcut ) continue;

		bool passes = true;

		iter = observables->createIterator();
		while ((parg = (RooRealVar*)iter->Next())) {
			if (values[parg->GetName()] < w->var(parg->GetName())->getMin() || values[parg->GetName()] > w->var(parg->GetName())->getMax()) {
				passes=false;
			}
			w->var(parg->GetName())->setVal(values[parg->GetName()]);
		}

		if (!passes) continue;

		if ( itype < 0 ) {
			mc->add(*observables);
		}
		if ( itype > 0 ) {
			data->add(*observables);
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

void Fitter::constructSignalPdf(){

	w->factory("mean[5300,5400]");
	//w->factory("CBShape::sig_cb1(B_s0_MM,mean,sigma_1[100,0,1000],alpha_1[0.,10.],n_1[0.,10.])");
	//w->factory("CBShape::sig_cb2(B_s0_MM,mean,sigma_2[100,0,1000],alpha_2[-10.,0.],n_2[0.,10.])");
	//w->factory("SUM::signal( f[0.5,0,1] * sig_cb1, sig_cb2 )");

	w->factory("Gaussian::sig_gaus1(B_s0_MM,mean,sigma_1[20,0,500])");
	w->factory("Gaussian::sig_gaus2(B_s0_MM,mean,sigma_2[20,0,500])");
	w->factory("Gaussian::sig_gaus3(B_s0_MM,mean,sigma_3[20,0,500])");
	w->factory("SUM::signal( sig_f1[0.5,0,1] * sig_gaus1, sig_f2[0.5,0,1] * sig_gaus2, sig_gaus3 )");

	RooArgSet *argset = w->pdf("signal")->getParameters(*(w->set("observables")));
	w->defineSet("signal_params",*argset);
	delete argset;
}

void Fitter::constructBkgPdf(){

	w->factory("Exponential::bkg_exp( B_s0_MM, bkg_p1[-0.05,-0.1,0.] )");
	w->factory("Chebychev::bkg_pol( B_s0_MM, {bkg_p3[0.05,-1,1],bkg_p4[0.05,-1,1],bkg_p5[0.05,-1,1]} )");
	//w->factory("Bernstein::bkg_pol( B_s0_MM, {bkg_p3[0.05,-5,5],bkg_p4[0.05,-5,5],bkg_p5[0.05,-5.,5.]} )");
	w->factory("SUM::background( bkg_f1[0.5,0,1] * bkg_exp, bkg_pol )");

	RooArgSet *argset = w->pdf("background")->getParameters(*(w->set("observables")));
	w->defineSet("background_params",*argset);
	delete argset;
}

void Fitter::constructOtherComponents(){

	w->factory("Gaussian::sig_gaus5500(B_s0_MM,mean_h[5490,5500],sigma_h[10,1,100])");

	RooArgSet *argset = w->pdf("sig_gaus5500")->getParameters(*(w->set("observables")));
	w->defineSet("sig_gaus5500_params",*argset);
	delete argset;
}

void Fitter::constructFullPdf(){

	w->factory("n_background[200,0,200000]");
	w->factory("n_signal[100,0.,10000]");
	w->factory("n_sig_gaus5500[100,0,5000]");
	w->factory("SUM::pdf( n_background*background, n_signal*signal, n_sig_gaus5500*sig_gaus5500 )");

	RooArgSet *argset = w->pdf("pdf")->getParameters(*(w->set("observables")));
	w->defineSet("pdf_params",*argset);
	delete argset;
}

void Fitter::setup(TString fname, TString tname){

	readTree(fname,tname);

	constructSignalPdf();
	constructBkgPdf();
	constructOtherComponents();
	constructFullPdf();

	w->Print();

	//w->var("mass")->Print();
	//w->data("data")->Print();
	//w->data("mc")->Print();

}

void Fitter::fit(){

	// mc first
	w->pdf("signal")->fitTo(*(w->data("mc")));

	((RooArgSet*)w->set("signal_params"))->setAttribAll("Constant");

	w->var("mean")->setConstant(false);

	// now fit data
	w->pdf("pdf")->fitTo(*(w->data("data")),Extended());

	hasfit = true;
}

void Fitter::plot(TString projectVar, bool plotPdf, float minMC, float maxMC, float minData, float maxData){

	assert(w->var(projectVar));

	TCanvas *canv = new TCanvas("c","c",600,800);
	canv->Divide(1,2);

	if (minData<0) minData = w->var(projectVar)->getMin();
	if (maxData<0) maxData = w->var(projectVar)->getMax();

	if (minMC<0) minMC = w->var(projectVar)->getMin();
	if (maxMC<0) maxMC = w->var(projectVar)->getMax();

	// signal mc
	canv->cd(1);
	RooPlot *mcplot = w->var(projectVar)->frame(Title("MC"),Range(minMC,maxMC));
	w->data("mc")->plotOn(mcplot);
	if (hasfit && plotPdf){
		w->pdf("signal")->plotOn(mcplot);
	}
	mcplot->Draw();

	// data
	canv->cd(2);
	RooPlot *dplot = w->var(projectVar)->frame(Title("Data"),Range(minData,maxData));
	TLegend *leg = new TLegend(0.6,0.6,0.89,0.89);
	leg->SetFillColor(0);
	w->data("data")->plotOn(dplot);
	if (hasfit && plotPdf) {
		w->pdf("pdf")->plotOn(dplot,Components("bkg_exp,bkg_pol,sig_gaus5500,signal"),FillColor(kGreen-3),LineColor(kGreen-3),DrawOption("F"));
		TObject *sigLeg = (TObject*)dplot->getObject(dplot->numItems()-1);
		w->pdf("pdf")->plotOn(dplot,Components("bkg_exp,bkg_pol,sig_gaus5500"),FillColor(kRed-3),LineColor(kRed-3),DrawOption("F"));
		TObject *bkgLegGauss = (TObject*)dplot->getObject(dplot->numItems()-1);
		w->pdf("pdf")->plotOn(dplot,Components("bkg_exp,bkg_pol"),FillColor(kBlue-3),LineColor(kBlue-3),DrawOption("F"));
		TObject *bkgLegBern = (TObject*)dplot->getObject(dplot->numItems()-1);
		w->pdf("pdf")->plotOn(dplot,Components("bkg_exp"),LineColor(kOrange-2),FillColor(kOrange-2),DrawOption("F"));
		TObject *backgroundLeg = (TObject*)dplot->getObject(dplot->numItems()-1);
		w->data("data")->plotOn(dplot);
		TObject *dataLeg = (TObject*)dplot->getObject(dplot->numItems()-1);
		w->pdf("pdf")->plotOn(dplot,DrawOption("L"));
		TObject *pdfLeg = (TObject*)dplot->getObject(dplot->numItems()-1);

		leg->AddEntry(dataLeg,"Data (3fb^{-1})","LEP");
		leg->AddEntry(sigLeg,"Signal","LF");
		leg->AddEntry(bkgLegGauss,"Gaus Bkg","LF");
		leg->AddEntry(bkgLegBern,"Pol Bkg","LF");
		leg->AddEntry(backgroundLeg,"Exp Bkg","LF");
		leg->AddEntry(pdfLeg,"Total PDF","L");
	}
	dplot->Draw();
	leg->Draw("same");

	canv->Update();
	canv->Modified();
	canv->Print(Form("plots/datasets_%s.pdf",projectVar.Data()));
	delete canv;
}

void Fitter::save(TString fname){
	w->writeToFile(fname);
}

