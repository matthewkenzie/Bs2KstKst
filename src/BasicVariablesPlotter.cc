/////////////////////////////////////
//                                 //
// BasicVariablesPlotter.cc              	 //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLegend.h"
#include "TCanvas.h"
#include "../interface/BasicVariablesPlotter.h"

using namespace std;

BasicVariablesPlotter::BasicVariablesPlotter(TString _name):
	BaseAnalyser(_name)
{}

BasicVariablesPlotter::~BasicVariablesPlotter(){}

void BasicVariablesPlotter::Init(Looper *l){
	cout << Form("%-30s","BasicVariablesPlotter::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;

  defineHists();
}

void BasicVariablesPlotter::Term(Looper *l){
  saveHistograms("PostReductionPlots.root");
  drawHistograms();
  deleteHistograms();
	cout << Form("%-30s","BasicVariablesPlotter::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool BasicVariablesPlotter::AnalyseEvent(Looper *l){

	// do physics here e.g.:
  fillHistograms(l);
  // MC only
	//if ( l->itype < 0 ) {
  //}
	// Data only
	//if ( l->itype > 0 ) {
	//}

	return true;
}

void BasicVariablesPlotter::defineHists(){

  addHist("B_s0_DIRA",100,0.9999,1.);
  addHist("B_s0_ETA",100,1.,6.);
  addHist("B_s0_M",100,5000,5800);
  addHist("B_s0_PT",100,0,40e3);
  addHist("Kst_ETA",100,1.,6.);
  addHist("Kst_M",100,750,1700);
  addHist("Kst_PT",100,0,20e3);
  addHist("Kstb_ETA",100,1.,6.);
  addHist("Kstb_M",100,750,1700);
  addHist("Kstb_PT",100,0,20e3);
  addHist("Kplus_ETA",100,1.,6.);
  addHist("Kplus_PT",100,0,10e3);
  addHist("Kplus_ProbDiff",100,-1,1.);
  addHist("Kplus_ProbDiffCorr",100,-1,1.);
  addHist("Kminus_ETA",100,1.,6.);
  addHist("Kminus_PT",100,0,10e3);
  addHist("Kminus_ProbDiff",100,-1,1.);
  addHist("Kminus_ProbDiffCorr",100,-1,1.);
  addHist("Piplus_ETA",100,1.,6.);
  addHist("Piplus_PT",100,0,10e3);
  addHist("Piplus_ProbDiff",100,-1,1.);
  addHist("Piplus_ProbDiffCorr",100,-1,1.);
  addHist("Piminus_ETA",100,1.,6.);
  addHist("Piminus_PT",100,0,10e3);
  addHist("Piminus_ProbDiff",100,-1,1.);
  addHist("Piminus_ProbDiffCorr",100,-1,1.);

}

void BasicVariablesPlotter::addHist(TString name, int nbins, float xlow, float xhigh){

  HistContainer hist;
  hist.name = name;
  hist.nbins = nbins;
  hist.xlow = xlow;
  hist.xhigh = xhigh;
  histList.push_back(hist);
}

void BasicVariablesPlotter::fillHistograms(Looper *l){

  // if this type is not already in the map then make the histograms
  if (histMap.find(l->itype)==histMap.end()){
    for (vector<HistContainer>::iterator histIt=histList.begin(); histIt!=histList.end(); histIt++){
      histMap[l->itype][histIt->name] = new TH1F(Form("%s_t%d",histIt->name.Data(),l->itype),histIt->name.Data(),histIt->nbins,histIt->xlow,histIt->xhigh);
      histMap[l->itype][histIt->name]->SetDirectory(0);
    }
  }

  histMap[l->itype]["B_s0_DIRA"]->Fill(*l->B_s0_DIRA_OWNPV);
  histMap[l->itype]["B_s0_ETA"]->Fill(0.5*TMath::Log( (*l->B_s0_P + *l->B_s0_PZ) / (*l->B_s0_P - *l->B_s0_PZ) ));
  histMap[l->itype]["B_s0_M"]->Fill(*l->B_s0_MM);
  histMap[l->itype]["B_s0_PT"]->Fill(*l->B_s0_PT);
  histMap[l->itype]["Kst_ETA"]->Fill(0.5*TMath::Log( (*l->Kst_P + *l->Kst_PZ) / (*l->Kst_P - *l->Kst_PZ) ));
  histMap[l->itype]["Kst_M"]->Fill(*l->Kst_M);
  histMap[l->itype]["Kst_PT"]->Fill(*l->Kst_PT);

  histMap[l->itype]["Kstb_ETA"]->Fill(0.5*TMath::Log( (*l->Kstb_P + *l->Kstb_PZ) / (*l->Kstb_P - *l->Kstb_PZ) ));
  histMap[l->itype]["Kstb_M"]->Fill(*l->Kstb_M);
  histMap[l->itype]["Kstb_PT"]->Fill(*l->Kstb_PT);

  histMap[l->itype]["Kplus_ETA"]->Fill(0.5*TMath::Log( (*l->Kplus_P + *l->Kplus_PZ) / (*l->Kplus_P - *l->Kplus_PZ) ));
  histMap[l->itype]["Kplus_PT"]->Fill(*l->Kplus_PT);
  histMap[l->itype]["Kplus_ProbDiff"]->Fill(*l->Kplus_ProbNNk - *l->Kplus_ProbNNpi);

  histMap[l->itype]["Kminus_ETA"]->Fill(0.5*TMath::Log( (*l->Kminus_P + *l->Kminus_PZ) / (*l->Kminus_P - *l->Kminus_PZ) ));
  histMap[l->itype]["Kminus_PT"]->Fill(*l->Kplus_PT);
  histMap[l->itype]["Kminus_ProbDiff"]->Fill(*l->Kminus_ProbNNk - *l->Kminus_ProbNNpi);

  histMap[l->itype]["Piplus_ETA"]->Fill(0.5*TMath::Log( (*l->Piplus_P + *l->Piplus_PZ) / (*l->Piplus_P - *l->Piplus_PZ) ));
  histMap[l->itype]["Piplus_PT"]->Fill(*l->Kplus_PT);
  histMap[l->itype]["Piplus_ProbDiff"]->Fill(*l->Piplus_ProbNNk - *l->Piplus_ProbNNpi);

  histMap[l->itype]["Piminus_ETA"]->Fill(0.5*TMath::Log( (*l->Piminus_P + *l->Piminus_PZ) / (*l->Piminus_P - *l->Piminus_PZ) ));
  histMap[l->itype]["Piminus_PT"]->Fill(*l->Kplus_PT);
  histMap[l->itype]["Piminus_ProbDiff"]->Fill(*l->Piminus_ProbNNk - *l->Piminus_ProbNNpi);

	if ( l->itype < 0 ) {
    histMap[l->itype]["Kplus_ProbDiffCorr"]->Fill(*l->Kplus_ProbNNkcorr - *l->Kplus_ProbNNpicorr);
    histMap[l->itype]["Kminus_ProbDiffCorr"]->Fill(*l->Kminus_ProbNNkcorr - *l->Kminus_ProbNNpicorr);
    histMap[l->itype]["Piplus_ProbDiffCorr"]->Fill(*l->Piplus_ProbNNkcorr - *l->Piplus_ProbNNpicorr);
    histMap[l->itype]["Piminus_ProbDiffCorr"]->Fill(*l->Piminus_ProbNNkcorr - *l->Piminus_ProbNNpicorr);
  }
  else {
    histMap[l->itype]["Kplus_ProbDiffCorr"]->Fill(*l->Kplus_ProbNNk - *l->Kplus_ProbNNpi);
    histMap[l->itype]["Kminus_ProbDiffCorr"]->Fill(*l->Kminus_ProbNNk - *l->Kminus_ProbNNpi);
    histMap[l->itype]["Piplus_ProbDiffCorr"]->Fill(*l->Piplus_ProbNNk - *l->Piplus_ProbNNpi);
    histMap[l->itype]["Piminus_ProbDiffCorr"]->Fill(*l->Piminus_ProbNNk - *l->Piminus_ProbNNpi);
  }
}

void BasicVariablesPlotter::saveHistograms(TString outFileName){

  TFile *outFile = new TFile(outFileName,"RECREATE");
  outFile->cd();
  for (map<int,map<TString,TH1F*> >::iterator it1=histMap.begin(); it1!=histMap.end(); it1++){
    for (map<TString,TH1F*>::iterator it2=it1->second.begin(); it2!=it1->second.end(); it2++){
      cout << it2->first << " " << it2->second << " " << it2->second->GetName() << endl;
      it2->second->Print();
      it2->second->Write();
    }
  }
  outFile->Close();

}

void BasicVariablesPlotter::deleteHistograms(){

  for (map<int,map<TString,TH1F*> >::iterator it1=histMap.begin(); it1!=histMap.end(); it1++){
    for (map<TString,TH1F*>::iterator it2=it1->second.begin(); it2!=it1->second.end(); it2++){
      delete it2->second;
    }
  }
}

void BasicVariablesPlotter::drawHistograms(){

  for (vector<HistContainer>::iterator hist=histList.begin(); hist!=histList.end(); hist++){

    TH1F *data = new TH1F(Form("%s_data",hist->name.Data()),hist->name,hist->nbins,hist->xlow,hist->xhigh);
    TH1F *mcHigh = new TH1F(Form("%s_mcHigh",hist->name.Data()),hist->name,hist->nbins,hist->xlow,hist->xhigh);
    TH1F *mcLow = new TH1F(Form("%s_mcLow",hist->name.Data()),hist->name,hist->nbins,hist->xlow,hist->xhigh);

    data->Add(histMap[71][hist->name]);
    data->Add(histMap[72][hist->name]);
    data->Add(histMap[81][hist->name]);
    data->Add(histMap[82][hist->name]);

    mcHigh->Add(histMap[-71][hist->name]);
    mcHigh->Add(histMap[-72][hist->name]);
    mcHigh->Add(histMap[-81][hist->name]);
    mcHigh->Add(histMap[-82][hist->name]);

    mcLow->Add(histMap[-73][hist->name]);
    mcLow->Add(histMap[-74][hist->name]);
    mcLow->Add(histMap[-83][hist->name]);
    mcLow->Add(histMap[-84][hist->name]);

    data->Scale(1./data->Integral());
    mcHigh->Scale(1./mcHigh->Integral());
    mcLow->Scale(1./mcLow->Integral());

    data->SetFillColor(kGray+1);
    mcHigh->SetLineColor(kRed);
    mcLow->SetLineColor(kBlue);
    mcHigh->SetLineWidth(3);
    mcLow->SetLineWidth(3);

    TLegend *leg = new TLegend(0.7,0.6,0.89,0.89);
    leg->SetFillColor(0);

    double max = TMath::Max(mcLow->GetMaximum(),mcHigh->GetMaximum());
    max = TMath::Max(max,data->GetMaximum());

    data->SetStats(0);
    data->GetYaxis()->SetRangeUser(0,max*1.3);
    data->GetXaxis()->SetTitle(hist->name);

    leg->AddEntry(data,"Data","LF");
    leg->AddEntry(mcLow,"MC Low","L");
    leg->AddEntry(mcHigh,"MC High","L");

    TCanvas *canv = new TCanvas();
    data->Draw("HISTF");
    mcLow->Draw("HISTsame");
    mcHigh->Draw("HISTsame");
    leg->Draw("same");
    canv->Print(Form("plots/%s.pdf",hist->name.Data()));
    canv->Print(Form("plots/%s.png",hist->name.Data()));
    delete canv;
  }
}


