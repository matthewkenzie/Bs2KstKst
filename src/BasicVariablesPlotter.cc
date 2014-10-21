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
#include "TStyle.h"
#include "TLorentzVector.h"
#include "TPaveStats.h"
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

	// BDT Vars
	addHist("ln_B_s0_PT",100,6,12);
	addHist("ln_Kst_PT",100,6,12);
	addHist("ln_Kstb_PT",100,6,12);
	addHist("ln_max_track_PT",100,7,10);
	addHist("ln_min_track_PT",100,4,9);
	addHist("B_s0_eta",100,1,6);
	addHist("Kst_eta",100,1,6);
	addHist("Kstb_eta",100,1,6);
	addHist("max_track_eta",100,1,6);
	addHist("min_track_eta",100,1,6);
	addHist("B_s0_ARCCOS_DIRA_OWNPV",100,0.,0.04);
	addHist("B_s0_ENDVERTEX_CHI2",100,0,50);
	addHist("max_track_chi2",100,0,4);
	addHist("Kplus_PID_DeltaProbKPi",100,-1,1.2);
	addHist("Kminus_PID_DeltaProbKPi",100,-1,1.2);
	addHist("Piplus_PID_DeltaProbKPi",100,-1,1.2);
	addHist("Piminus_PID_DeltaProbKPi",100,-1,1.2);

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

	// BDT Vars
	histMap[l->itype]["ln_B_s0_PT"]->Fill(TMath::Log(*l->B_s0_PT));
	histMap[l->itype]["ln_Kst_PT"]->Fill(TMath::Log(*l->Kst_PT));
	histMap[l->itype]["ln_Kstb_PT"]->Fill(TMath::Log(*l->Kstb_PT));
	histMap[l->itype]["ln_max_track_PT"]->Fill(TMath::Log( TMath::Max( TMath::Max(*l->Kplus_PT, *l->Kminus_PT), TMath::Max(*l->Piplus_PT, *l->Piminus_PT) ) ));
	histMap[l->itype]["ln_min_track_PT"]->Fill(TMath::Log( TMath::Min( TMath::Min(*l->Kplus_PT, *l->Kminus_PT), TMath::Min(*l->Piplus_PT, *l->Piminus_PT) ) ));

	TLorentzVector B_s0_p4(*l->B_s0_PX,*l->B_s0_PY,*l->B_s0_PZ,*l->B_s0_PE);
	TLorentzVector Kst_p4(*l->Kst_PX,*l->Kst_PY,*l->Kst_PZ,*l->Kst_PE);
	TLorentzVector Kstb_p4(*l->Kstb_PX,*l->Kstb_PY,*l->Kstb_PZ,*l->Kstb_PE);
	TLorentzVector Kplus_p4(*l->Kplus_PX,*l->Kplus_PY,*l->Kplus_PZ,*l->Kplus_PE);
	TLorentzVector Kminus_p4(*l->Kminus_PX,*l->Kminus_PY,*l->Kminus_PZ,*l->Kminus_PE);
	TLorentzVector Piplus_p4(*l->Piplus_PX,*l->Piplus_PY,*l->Piplus_PZ,*l->Piplus_PE);
	TLorentzVector Piminus_p4(*l->Piminus_PX,*l->Piminus_PY,*l->Piminus_PZ,*l->Piminus_PE);

	histMap[l->itype]["B_s0_eta"]->Fill(TMath::Abs(B_s0_p4.Eta()));
	histMap[l->itype]["Kst_eta"]->Fill(TMath::Abs(Kst_p4.Eta()));
	histMap[l->itype]["Kstb_eta"]->Fill(TMath::Abs(Kstb_p4.Eta()));
	histMap[l->itype]["max_track_eta"]->Fill(TMath::Max( TMath::Max(TMath::Abs(Kplus_p4.Eta()), TMath::Abs(Kminus_p4.Eta())), TMath::Max(TMath::Abs(Piplus_p4.Eta()), TMath::Abs(Piminus_p4.Eta())) ));
	histMap[l->itype]["min_track_eta"]->Fill(TMath::Min( TMath::Min(TMath::Abs(Kplus_p4.Eta()), TMath::Abs(Kminus_p4.Eta())), TMath::Min(TMath::Abs(Piplus_p4.Eta()), TMath::Abs(Piminus_p4.Eta())) ));

	histMap[l->itype]["B_s0_ARCCOS_DIRA_OWNPV"]->Fill(TMath::ACos(*l->B_s0_DIRA_OWNPV));
	histMap[l->itype]["B_s0_ENDVERTEX_CHI2"]->Fill(*l->B_s0_ENDVERTEX_CHI2);

	double kst_max_track_chi2 = TMath::Max(*l->Kplus_TRACK_CHI2NDOF,*l->Piminus_TRACK_CHI2NDOF);
	double kstb_max_track_chi2 = TMath::Max(*l->Piplus_TRACK_CHI2NDOF,*l->Kminus_TRACK_CHI2NDOF);
	double max_track_chi2 = TMath::Max(kst_max_track_chi2,kstb_max_track_chi2);

	histMap[l->itype]["max_track_chi2"]->Fill(max_track_chi2);

	if (l->itype < 0) {
		histMap[l->itype]["Kplus_PID_DeltaProbKPi"]->Fill(*l->Kplus_ProbNNkcorr - *l->Kplus_ProbNNpicorr);
		histMap[l->itype]["Kminus_PID_DeltaProbKPi"]->Fill(*l->Kminus_ProbNNkcorr - *l->Kminus_ProbNNpicorr);
		histMap[l->itype]["Piplus_PID_DeltaProbKPi"]->Fill(*l->Piplus_ProbNNkcorr - *l->Piplus_ProbNNpicorr);
		histMap[l->itype]["Piminus_PID_DeltaProbKPi"]->Fill(*l->Piminus_ProbNNkcorr - *l->Piminus_ProbNNpicorr);
	}
	else {
		histMap[l->itype]["Kplus_PID_DeltaProbKPi"]->Fill(*l->Kplus_ProbNNk - *l->Kplus_ProbNNpi);
		histMap[l->itype]["Kminus_PID_DeltaProbKPi"]->Fill(*l->Kminus_ProbNNk - *l->Kminus_ProbNNpi);
		histMap[l->itype]["Piplus_PID_DeltaProbKPi"]->Fill(*l->Piplus_ProbNNk - *l->Piplus_ProbNNpi);
		histMap[l->itype]["Piminus_PID_DeltaProbKPi"]->Fill(*l->Piminus_ProbNNk - *l->Piminus_ProbNNpi);
	}
}

void BasicVariablesPlotter::saveHistograms(TString outFileName){

  TFile *outFile = new TFile(outFileName,"RECREATE");
  outFile->cd();
  for (map<int,map<TString,TH1F*> >::iterator it1=histMap.begin(); it1!=histMap.end(); it1++){
    for (map<TString,TH1F*>::iterator it2=it1->second.begin(); it2!=it1->second.end(); it2++){
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

    TLegend *leg = new TLegend(0.11,0.7,0.35,0.89);
    leg->SetFillColor(0);

    double max = TMath::Max(mcLow->GetMaximum(),mcHigh->GetMaximum());
    max = TMath::Max(max,data->GetMaximum());

    data->SetStats(1);
		mcLow->SetStats(1);
		mcHigh->SetStats(1);
		gStyle->SetOptStat(111111);
    data->GetYaxis()->SetRangeUser(0,max*1.3);
    data->GetXaxis()->SetTitle(hist->name);

    leg->AddEntry(data,"Data","LF");
    leg->AddEntry(mcLow,"MC Low","L");
    leg->AddEntry(mcHigh,"MC High","L");

    TCanvas *canv = new TCanvas();
		data->SetName("Data");
    data->Draw("HISTFS");
		gPad->Update();
		TPaveStats *dataSt = (TPaveStats*)data->FindObject("stats");
		dataSt->SetY2NDC(0.875);
		dataSt->SetY1NDC(0.875-0.25+0.02);
		dataSt->SetLineColor(kBlack);
		dataSt->SetTextColor(kBlack);
		mcLow->SetName("MC Low");
    mcLow->Draw("HISTsameS");
		gPad->Update();
		TPaveStats *mcLowSt = (TPaveStats*)mcLow->FindObject("stats");
		mcLowSt->SetY2NDC(0.875-0.25);
		mcLowSt->SetY1NDC(0.875-0.5+0.02);
		mcLowSt->SetLineColor(kBlue);
		mcLowSt->SetTextColor(kBlue);
		mcHigh->SetName("MC High");
    mcHigh->Draw("HISTsameS");
		gPad->Update();
		TPaveStats *mcHighSt = (TPaveStats*)mcHigh->FindObject("stats");
		mcHighSt->SetY2NDC(0.875-0.5);
		mcHighSt->SetY1NDC(0.875-0.75+0.02);
		mcHighSt->SetLineColor(kRed);
		mcHighSt->SetTextColor(kRed);
		canv->Update();
		canv->Modified();
    leg->Draw("same");
    canv->Print(Form("plots/%s.pdf",hist->name.Data()));
    canv->Print(Form("plots/%s.png",hist->name.Data()));
    delete canv;

		delete data;
		delete mcLow;
		delete mcHigh;
  }
}


