#include "TFile.h"
#include "TTree.h"
#include "TChain.h"

TH1F* drawPlot(TString varDef, TString varName, TChain* tdata, TChain* tmc, TChain* tmc2, int bins, float xlow, float xhigh, TString ext="", bool returnWeightHist=false) {

  TH1F *h_data = new TH1F(Form("%s_%s_data",varName.Data(),ext.Data()),"",bins,xlow,xhigh);
  TH1F *h_mc   = new TH1F(Form("%s_%s_mc",varName.Data(),ext.Data()),"",bins,xlow,xhigh);
  TH1F *h_mc2   = new TH1F(Form("%s_%s_mc2",varName.Data(),ext.Data()),"",bins,xlow,xhigh);

  tmc->Draw(Form("%s>>%s",varDef.Data(),h_mc->GetName()),"","GOFF");
  tmc2->Draw(Form("%s>>%s",varDef.Data(),h_mc2->GetName()),"","GOFF");
  tdata->Draw(Form("%s>>%s",varDef.Data(),h_data->GetName()),"","GOFF");

  h_mc->Scale(1./h_mc->Integral());
  h_mc2->Scale(1./h_mc2->Integral());
  h_data->Scale(1./h_data->Integral());

  TH1F *reweightHist = (TH1F*)h_data->Clone(Form("%s_%s_reweight",varName.Data(),ext.Data()));
  reweightHist->Divide(h_mc);

  h_mc->SetLineColor(kBlue);
  h_mc->SetLineWidth(2);
  h_mc->SetMarkerColor(kBlue);
  h_mc->SetMarkerSize(1.2);
  h_mc2->SetLineColor(kRed);
  h_mc2->SetLineWidth(2);
  h_mc2->SetMarkerColor(kRed);
  h_mc2->SetMarkerSize(1.2);

  h_data->SetLineColor(kBlack);
  h_data->SetLineWidth(2);

  TCanvas *canv = new TCanvas();
  TLegend *leg = new TLegend(0.6,0.6,0.89,0.89);
  leg->AddEntry(h_mc,"MC (Low)","LEP");
  leg->AddEntry(h_mc2,"MC (High)","LEP");
  leg->AddEntry(h_data, "Data", "LF");

  h_mc->GetXaxis()->SetTitle(varName.Data());
  h_mc->GetXaxis()->SetTitleOffset(0.85);

  h_mc->Draw("LEP");
  h_mc2->Draw("LEPsame");
  h_data->Draw("HISTsame");
  leg->Draw("same");

  canv->Update();
  canv->Modified();
  canv->Print(Form("plots/%s_%s.pdf",varName.Data(),ext.Data()));

  return reweightHist;

}

void makeHistos(TChain *tree, TString ext="", TH1F *reweight=0){

  Int_t nSPDHits;


}

void plotSPD(){

  TH1::SetDefaultSumw2();
  gROOT->ProcessLine(".x ~/Scratch/lhcb/lhcbStyle.C");

  TChain *data_2011 = new TChain("data2011","data2011");
  data_2011->Add("file_store/red_first/data_reduced/Data2011_MagDown_Reduced_j0.root/ReducedTree");
  data_2011->Add("file_store/red_first/data_reduced/Data2011_MagUp_Reduced_j0.root/ReducedTree");
  TChain *data_2012 = new TChain("data2012","data2012");
  data_2012->Add("file_store/red_first/data_reduced/Data2012_MagDown_Reduced_j0.root/ReducedTree");
  data_2012->Add("file_store/red_first/data_reduced/Data2012_MagUp_Reduced_j0.root/ReducedTree");

  TChain *mc_2011 = new TChain("mc2011","mc2011");
  mc_2011->Add("file_store/red_first/mc_reduced//MC2011_LowMass_MagDown_Reduced_j0.root/ReducedTree");
  mc_2011->Add("file_store/red_first/mc_reduced//MC2011_LowMass_MagUp_Reduced_j0.root/ReducedTree");
  TChain *mc_2012 = new TChain("mc2012","mc2012");
  mc_2012->Add("file_store/red_first/mc_reduced//MC2012_LowMass_MagDown_Reduced_j0.root/ReducedTree");
  mc_2012->Add("file_store/red_first/mc_reduced//MC2012_LowMass_MagUp_Reduced_j0.root/ReducedTree");

  TChain *mc2_2011 = new TChain("mc22011","mc22011");
  mc2_2011->Add("file_store/red_first/mc_reduced//MC2011_HighMass_MagDown_Reduced_j0.root/ReducedTree");
  mc2_2011->Add("file_store/red_first/mc_reduced//MC2011_HighMass_MagUp_Reduced_j0.root/ReducedTree");
  TChain *mc2_2012 = new TChain("mc22012","mc22012");
  mc2_2012->Add("file_store/red_first/mc_reduced//MC2012_HighMass_MagDown_Reduced_j0.root/ReducedTree");
  mc2_2012->Add("file_store/red_first/mc_reduced//MC2012_HighMass_MagUp_Reduced_j0.root/ReducedTree");

  TH1F *reweightSPD_2011 = drawPlot("nSPDHits","nSPDHits",data_2011,mc_2011,mc2_2011,20,0,1000,"2011");
  TH1F *reweightSPD_2012 = drawPlot("nSPDHits","nSPDHits",data_2012,mc_2012,mc2_2012,20,0,1000,"2012");

  TCanvas *canv = new TCanvas();
  reweightSPD_2011->SetLineWidth(2);
  reweightSPD_2012->SetLineWidth(2);
  reweightSPD_2011->SetLineColor(kRed);
  reweightSPD_2012->SetLineColor(kBlue);
  reweightSPD_2012->Draw("HIST");
  reweightSPD_2011->Draw("HISTsame");
  canv->Update();
  canv->Modified();
  canv->Print("plots/nSPDreweight.pdf");

  TH1F *mc_2011_rw = fillHisto("nSPDHits",mc_2011,20,0,1000,"2011",reweightSPD_2011);

  //drawPlot("TMath::Max(TMath::Max(Kplus_TRACK_CHI2NDOF,Kminus_TRACK_CHI2NDOF),TMath::Max(Piplus_TRACK_CHI2NDOF,Piminus_TRACK_CHI2NDOF))","MaxTrackChi2NDOF", data_2011, mc_2011, mc2_2011,50,0,4,"2011");
  //drawPlot("TMath::Max(TMath::Max(Kplus_TRACK_CHI2NDOF,Kminus_TRACK_CHI2NDOF),TMath::Max(Piplus_TRACK_CHI2NDOF,Piminus_TRACK_CHI2NDOF))","MaxTrackChi2NDOF", data_2012, mc_2012, mc2_2012,50,0,4,"2012");

  /*
  drawPlot("Kplus_ProbNNk*(1.-Kplus_ProbNNpi)"    ,"DeltaProbNNKplus"  ,data_2011, mc_2011, mc2_2011, 50, 0, 1., "2011");
  drawPlot("Kminus_ProbNNk*(1.-Kminus_ProbNNpi)"  ,"DeltaProbNNKminus" ,data_2011, mc_2011, mc2_2011, 50, 0, 1., "2011");
  drawPlot("Piplus_ProbNNpi*(1.-Piplus_ProbNNk)"  ,"DeltaProbNNPiplus" ,data_2011, mc_2011, mc2_2011, 50, 0, 1., "2011");
  drawPlot("Piminus_ProbNNpi*(1.-Piminus_ProbNNk)","DeltaProbNNPiminus",data_2011, mc_2011, mc2_2011, 50, 0, 1., "2011");
  drawPlot("Kplus_ProbNNk*(1.-Kplus_ProbNNpi)"    ,"DeltaProbNNKplus"  ,data_2012, mc_2012, mc2_2012, 50, 0, 1., "2012");
  drawPlot("Kminus_ProbNNk*(1.-Kminus_ProbNNpi)"  ,"DeltaProbNNKminus" ,data_2012, mc_2012, mc2_2012, 50, 0, 1., "2012");
  drawPlot("Piplus_ProbNNpi*(1.-Piplus_ProbNNk)"  ,"DeltaProbNNPiplus" ,data_2012, mc_2012, mc2_2012, 50, 0, 1., "2012");
  drawPlot("Piminus_ProbNNpi*(1.-Piminus_ProbNNk)","DeltaProbNNPiminus",data_2012, mc_2012, mc2_2012, 50, 0, 1., "2012");
  */
}
