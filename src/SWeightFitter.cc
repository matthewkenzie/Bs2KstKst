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

#include "../interface/SWeightFitter.h"

using namespace std;
using namespace RooFit;

SWeightFitter::SWeightFitter(TString wsname):
	bdtcut(0.08),
	hasfit(false)
{
	w = new RooWorkspace(wsname);
	RooArgSet *observables = new RooArgSet();
	w->defineSet("observables",*observables);
	delete observables;
}

SWeightFitter::~SWeightFitter(){
	//delete w;
	//tf->Close();
	//delete tf;
}

void SWeightFitter::setBDTCut(double val){
	bdtcut = val;
}

void SWeightFitter::setDiscrimVar(TString name, double min, double max){
	discrimVar = name;
	w->factory(Form("%s[%f,%f]",name.Data(),min,max));
	((RooArgSet*)w->set("observables"))->add(*w->var(name));
}

void SWeightFitter::readTree(TString fname, TString tname){

	TFile *tf = TFile::Open(fname);
	TTree *tree = (TTree*)tf->Get(tname);

	RooArgSet *observables = (RooArgSet*)w->set("observables");

	RooDataSet *data = new RooDataSet("data","data",*observables);
	RooDataSet *mc = new RooDataSet("mc","mc",*observables);

	RooDataSet *dataNoCut = new RooDataSet("dataNoCut","dataNoCut",*observables);
	RooDataSet *mcNoCut = new RooDataSet("mcNoCut","mcNoCut",*observables);

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

		bool passes = true;

		iter = observables->createIterator();
		while ((parg = (RooRealVar*)iter->Next())) {
			if (values[parg->GetName()] < w->var(parg->GetName())->getMin() || values[parg->GetName()] > w->var(parg->GetName())->getMax()) {
				passes=false;
			}
			w->var(parg->GetName())->setVal(values[parg->GetName()]);
		}

		if (!passes) continue;

		// MC
		if ( itype < 0 ) {
			if ( bdtoutput > bdtcut ) {
				mc->add(*observables);
			}
			mcNoCut->add(*observables);
		}
		// Data
		if ( itype > 0 ) {
			if ( bdtoutput > bdtcut ) {
				data->add(*observables);
			}
			dataNoCut->add(*observables);
		}
	}

	w->import(*data);
	w->import(*mc);
	w->import(*dataNoCut);
	w->import(*mcNoCut);

	delete tree;
	tf->Close();
	delete tf;
	delete data;
	delete mc;
	delete dataNoCut;
	delete mcNoCut;
}

void SWeightFitter::setup(TString fname, TString tname){

	readTree(fname,tname);

	w->Print();

}

void SWeightFitter::plot(){

	RooPlot *dataPlot = w->var(discrimVar)->frame(Title("Data w/ BDT Cut"));
	w->data("data")->plotOn(dataPlot,Binning(53));

	RooPlot *dataNoCutPlot = w->var(discrimVar)->frame(Title("Data w/o BDT Cut"));
	w->data("dataNoCut")->plotOn(dataNoCutPlot,Binning(53));

	RooPlot *mcPlot = w->var(discrimVar)->frame(Title("MC w/ BDT Cut"));
	w->data("mc")->plotOn(mcPlot,Binning(53));

	RooPlot *mcNoCutPlot = w->var(discrimVar)->frame(Title("MC w/o BDT Cut"));
	w->data("mcNoCut")->plotOn(mcNoCutPlot,Binning(53));

	TCanvas *canv = new TCanvas("c","c",1200,1200);
	canv->Divide(2,2);

	canv->cd(1);
	mcPlot->Draw();
	canv->cd(2);
	mcNoCutPlot->Draw();
	canv->cd(3);
	dataPlot->Draw();
	canv->cd(4);
	dataNoCutPlot->Draw();
	canv->Update();
	canv->Modified();
	canv->Print("plots/sweightsdata.pdf");
	canv->Print("plots/sweightsdata.png");

	delete canv;

	cout << "DATA: " << w->data("data")->numEntries() << " / " << w->data("dataNoCut")->numEntries() << " -- " << Form("%6.2f%%",float(w->data("data")->numEntries())/float(w->data("dataNoCut")->numEntries())*100.) << endl;
	cout << "MC:   " << w->data("mc")->numEntries()   << " / " << w->data("mcNoCut")->numEntries()   << " -- " << Form("%6.2f%%",float(w->data("mc")->numEntries())/float(w->data("mcNoCut")->numEntries())*100.) << endl;

}

void SWeightFitter::save(TString fname){
	w->writeToFile(fname);
}

