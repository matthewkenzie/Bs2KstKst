#include <iostream>
#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TPaveText.h"
#include "TLegend.h"
#include "TCut.h"
#include "TMath.h"
#include "TAxis.h"

#include "Math/Minimizer.h"
#include "Math/Factory.h"
#include "Math/Functor.h"

#include "RooWorkspace.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooAbsPdf.h"
#include "RooAbsReal.h"
#include "RooPlot.h"
#include "RooArgSet.h"
#include "RooRealVar.h"

using namespace std;
using namespace RooFit;

int fomType=1;

TTree *sigTree;
TTree *bkgTree;
TTree *misTree;

double sigNorm;
double bkgNorm;
double misNorm;

void slimTree() {

  float bdtoutput;
  double min_kaon_PIDK;
  double max_pion_PIDK;
  int itype;
  double B_s0_MM;

  TFile *inFile = TFile::Open("AnalysisOut.root");
  TTree *inTree = (TTree*)inFile->Get("AnalysisTree");

  TFile *outFile = TFile::Open("CutOptSlimTrees.root","RECREATE");
  TTree *sTree = new TTree("sigTree","sigTree");
  TTree *bTree = new TTree("bkgTree","bkgTree");
  TTree *mTree = new TTree("misTree","misTree");

  sTree->Branch("bdtoutput",     &bdtoutput);
  sTree->Branch("min_kaon_PIDK", &min_kaon_PIDK);
  sTree->Branch("max_pion_PIDK", &max_pion_PIDK);

  bTree->Branch("bdtoutput",     &bdtoutput);
  bTree->Branch("min_kaon_PIDK", &min_kaon_PIDK);
  bTree->Branch("max_pion_PIDK", &max_pion_PIDK);

  mTree->Branch("bdtoutput",     &bdtoutput);
  mTree->Branch("min_kaon_PIDK", &min_kaon_PIDK);
  mTree->Branch("max_pion_PIDK", &max_pion_PIDK);

  inTree->SetBranchAddress("itype",         &itype);
  inTree->SetBranchAddress("B_s0_MM",       &B_s0_MM);
  inTree->SetBranchAddress("bdtoutput",     &bdtoutput);
  inTree->SetBranchAddress("min_kaon_PIDK", &min_kaon_PIDK);
  inTree->SetBranchAddress("max_pion_PIDK", &max_pion_PIDK);

  for (int ev=0; ev<inTree->GetEntries(); ev++){
    inTree->GetEntry(ev);
    if ( (itype == 71 || itype == 81) && (B_s0_MM > 5600) ) {
      bTree->Fill();
    }
    else if ( (itype == -74 || itype == -84) ) {
      sTree->Fill();
    }
    else if ( (itype == -77 || itype == -87) ) {
      mTree->Fill();
    }
  }

  sTree->Write();
  bTree->Write();
  mTree->Write();
  outFile->Close();

  inFile->Close();
}

void plot(RooWorkspace* w, RooAbsData *data, RooAbsPdf *pdf, TString ext, double *cutvals){

  TCanvas *canv = new TCanvas();
  RooPlot *plot = w->var("B_s0_MM")->frame();
  plot->GetXaxis()->SetTitleOffset(0.8);
  TLegend *leg = new TLegend(0.65,0.5,0.92,0.92);
  TPaveText *params = new TPaveText(0.2,0.78,0.28,0.92,"ndc");
  params->SetFillColor(0);
  params->SetShadowColor(0);
  params->SetLineWidth(0);
  params->SetTextSize(0.035);
  params->SetTextAlign(11);
  params->AddText(Form("%-5s = %6.2f #pm %6.2f","N_{sig}",w->var("sig_mc_y")->getVal(),w->var("sig_mc_y")->getError()));
  params->AddText(Form("%-5s = %6.2f #pm %6.2f","N_{bkg}",w->var("bkg_y")->getVal(),w->var("bkg_y")->getError()));
  params->AddText(Form("%-5s = %6.2f #pm %6.2f","N_{mis}",w->var("rho_mc_y")->getVal(),w->var("rho_mc_y")->getError()));
  TPaveText *cuts = new TPaveText(0.23,0.64,0.28,0.78,"ndc");
  cuts->SetFillColor(0);
  cuts->SetShadowColor(0);
  cuts->SetLineWidth(0);
  cuts->SetTextSize(0.035);
  cuts->SetTextAlign(11);
  if (cutvals) {
    cuts->AddText(Form("%-5s > %4.2f","bdt  ",cutvals[0]));
    cuts->AddText(Form("%-5s > %4.2f","PIDK ",cutvals[1]));
    cuts->AddText(Form("%-5s < %4.2f","PID#pi",cutvals[2]));
  }

  data->plotOn(plot);
  leg->AddEntry(plot->getObject(plot->numItems()-1), "Data", "LEP");

  pdf->plotOn(plot,Components("bkg_pdf"),LineColor(kGreen+1),LineStyle(kDashed));
  leg->AddEntry(plot->getObject(plot->numItems()-1), "Combinatorial", "L");

  pdf->plotOn(plot,Components("part_reco_pdf"),LineColor(kGreen+4),LineStyle(kDashed));
  leg->AddEntry(plot->getObject(plot->numItems()-1), "Part. reco.", "L");

  pdf->plotOn(plot,Components("sig_mc_pdf"),LineColor(kRed),LineStyle(kDashed));
  leg->AddEntry(plot->getObject(plot->numItems()-1), "B_{s}#rightarrow(K^{+}#pi^{-})(K^{-}#pi^{+})", "L");

  pdf->plotOn(plot,Components("bd_mc_pdf"),LineColor(kMagenta),LineStyle(kDashed));
  leg->AddEntry(plot->getObject(plot->numItems()-1), "B_{d}#rightarrow(K^{+}#pi^{-})(K^{-}#pi^{+})", "L");

  pdf->plotOn(plot,Components("rho_mc_pdf"),LineColor(kOrange),LineStyle(kDashed));
  leg->AddEntry(plot->getObject(plot->numItems()-1), "B_{d}#rightarrow(#pi^{+}#pi^{-})(K^{-}#pi^{+})", "L");

  pdf->plotOn(plot,Components("phi_mc_pdf"),LineColor(kYellow+1),LineStyle(kDashed));
  leg->AddEntry(plot->getObject(plot->numItems()-1), "B_{d}#rightarrow(K^{+}K^{-})(K^{-}#pi^{+})", "L");

  pdf->plotOn(plot,Components("lb_mc_pdf"),LineColor(kViolet+1),LineStyle(kDashed));
  leg->AddEntry(plot->getObject(plot->numItems()-1), "#Lambda_{b(d)}#rightarrow(p^{+}#pi^{-})(K(#pi)^{-}#pi^{+})", "L");

  pdf->plotOn(plot);
  leg->AddEntry(plot->getObject(plot->numItems()-1), "Total", "L");

  plot->Draw();
  leg->Draw("same");
  params->Draw("same");
  if (cutvals) cuts->Draw("same");
  canv->Update();
  canv->Modified();
  canv->Print(Form("plots/MultiDimCutOpt/pdf/fit%s.pdf",ext.Data()));
  canv->Print(Form("plots/MultiDimCutOpt/png/fit%s.png",ext.Data()));
  canv->Print(Form("plots/MultiDimCutOpt/C/fit%s.C",ext.Data()));

}

void getEventEstimates(double &sigEst, double &bkgEst, double &misEst) {

  TFile *inFile = TFile::Open("MultiDimCutOptIn.root");
  RooWorkspace *w = (RooWorkspace*)inFile->Get("w");
  w->var("B_s0_MM")->setBins(100);
  RooDataSet *data = (RooDataSet*)w->data("full_data")->reduce(SelectVars(RooArgSet(*w->var("B_s0_MM"))),Name("full_data_red"));
  RooDataHist *binned = (RooDataHist*)data->binnedClone("full_data_hist");
  w->var("sig_mc_mean")->setConstant(false);
  w->pdf("pdf")->fitTo(*binned);
  double cut_vals[3] = {-1.0,0.0,0.0};
  plot(w,binned,w->pdf("pdf"),"full",cut_vals);

  w->var("B_s0_MM")->setRange("window",5300,5500);
  RooAbsReal *integral = w->pdf("bkg_pdf")->createIntegral(RooArgSet(*w->var("B_s0_MM")),NormSet(RooArgSet(*w->var("B_s0_MM"))),Range("window"));
  cout << "INTEGRAL: " << integral->getVal() << " -- " << integral->getVal()*w->var("bkg_y")->getVal() << endl;

  sigEst = w->var("sig_mc_y")->getVal();
  bkgEst = w->var("bkg_y")->getVal()*integral->getVal();
  misEst = w->var("rho_mc_y")->getVal();

  inFile->Close();
}

TCut getCut(const double *cutvals) {

  double bdtoutput_cut = cutvals[0];
  double min_kaon_PIDK_cut = cutvals[1];
  double max_pion_PIDK_cut = cutvals[2];

  TString cutString = Form(" ( (bdtoutput>%f) && (min_kaon_PIDK>%f) && (max_pion_PIDK<%f) )",bdtoutput_cut,min_kaon_PIDK_cut,max_pion_PIDK_cut);
  TCut cut = TCut(cutString);
  return cut;
}

double getFOM(const double *cutvals) {

  TCut cutString = getCut(cutvals);

  double nSig = sigTree->GetEntries(cutString) * sigNorm;
  double nBkg = bkgTree->GetEntries(cutString) * bkgNorm;
  double nMis = misTree->GetEntries(cutString) * misNorm;

  double fom = -999.;
  double sigmaMis = 0.5;

  if (fomType==0)        fom = nSig/(TMath::Sqrt(nSig+nBkg));                                   // S/sqrt(S+B)
  else if (fomType==1)   fom = nSig/(TMath::Sqrt(nSig+nBkg+nMis));                              // S/sqrt(S+B+M)
  else if (fomType==2)   fom = nSig/(TMath::Sqrt(nSig+nBkg+(1.+sigmaMis*sigmaMis)*nMis));       // S/sqrt(S+B+M+systM)
  else if (fomType==3)   fom = nSig/(TMath::Sqrt(nSig+nBkg+(1.+2.*sigmaMis*sigmaMis)*nMis));    // S/sqrt(S+B+M+2systM)
  else if (fomType==4)   fom = (nSig/(TMath::Sqrt(nSig+nBkg+nMis)) * (nSig/(nSig+nBkg+nMis)));  // S/sqrt(S+B+M) * Purity
  if (fom != fom) fom=0; // nan protect

  cout << "Scan: " << Form("( %4.2f , %4.2f , %4.2f )",cutvals[0],cutvals[1],cutvals[2]) << " -- " << Form("%6.3f",fom) << endl;
  return -1.*fom;
}

void plotFinalValues(const double *res) {
  TFile *inFile = TFile::Open("MultiDimCutOptIn.root");
  RooWorkspace *w = (RooWorkspace*)inFile->Get("w");
  w->var("B_s0_MM")->setBins(100);
  w->var("part_reco_y")->setVal(2000.);
  w->var("part_reco_y")->setRange(500,20e3);
  RooDataSet *data = (RooDataSet*)w->data("full_data")->reduce(SelectVars(RooArgSet(*w->var("B_s0_MM"))),Name(Form("res%d_data_red",fomType)),Cut(Form("(bdtoutput>%5.3f && min_kaon_PIDK>%6.4f && max_pion_PIDK<%6.4f)",res[0],res[1],res[2])));
  RooDataHist *binned = (RooDataHist*)data->binnedClone(Form("res%d_data_hist",fomType));
  w->var("sig_mc_mean")->setConstant(false);
  w->pdf("pdf")->fitTo(*binned);
  double vals[3] = { res[0], res[1], res[2] };
  plot(w,binned,w->pdf("pdf"),Form("res%d",fomType),vals);
}

void cut_optimisation(int type=1, bool reslim=false) {

  fomType = type;

  gROOT->ProcessLine(".x ~/Scratch/lhcb/lhcbStyle.C");

  if (reslim) slimTree();

  double sigEst, bkgEst, misEst;
  getEventEstimates(sigEst,bkgEst,misEst);

  TFile *slimFile = TFile::Open("CutOptSlimTrees.root");

  sigTree = (TTree*)slimFile->Get("sigTree");
  bkgTree = (TTree*)slimFile->Get("bkgTree");
  misTree = (TTree*)slimFile->Get("misTree");

  sigNorm = sigEst / sigTree->GetEntries();
  bkgNorm = bkgEst / bkgTree->GetEntries();
  misNorm = misEst / misTree->GetEntries();

  //double cut_vals[3] = {0.05, 9., 0.};
  //cout << getFOM(cut_vals) << endl;


  ROOT::Math::Minimizer *min = ROOT::Math::Factory::CreateMinimizer("Minuit2","Migrad");
  min->SetMaxFunctionCalls(1000000);
  min->SetTolerance(0.001);
  min->SetPrintLevel(1);

  ROOT::Math::Functor f(&getFOM,3);

  min->SetFunction(f);
  min->SetStrategy(2);

  min->SetLimitedVariable(0,"bdtoutput",     0.0, 0.1, -0.2, 0.6);
  min->SetLimitedVariable(1,"min_kaon_PIDK", 0.2, 1., 0., 50.);
  min->SetLimitedVariable(2,"max_pion_PIDK", -0.1, 1., -50., 0.);

  min->Minimize();
  min->Hesse();

  const double *res = min->X();
  plotFinalValues(res);

  cout << "Minimum: " << "( " << res[0] << " , " << res[1] << " , " << res[2] << " )" << endl;
  cout << "     at: " << min->MinValue() << endl;

}

void runAll(){

  cut_optimisation(0);
  cut_optimisation(1);
  cut_optimisation(2);
  cut_optimisation(3);
  cut_optimisation(4);

}
