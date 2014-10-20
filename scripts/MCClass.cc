#define MCClass_cxx
#include "MCClass.h"

#include "TH1D.h"
#include "THnSparse.h"
#include "TArrayD.h"
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TMath.h"

void MCClass::Loop(TString pidHistDir, Long64_t firstEntry, Long64_t lastEntry)
{
//   In a ROOT session, you can do:
//      Root > .L MCClass.C
//      Root > MCClass t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   TFile *pidFile = TFile::Open("PIDHists.root");

   TH1D *K_P = (TH1D*)pidFile->Get(Form("%s/DEFAULT/K/H1D_P",pidHistDir.Data()));
   TH1D *K_ETA = (TH1D*)pidFile->Get(Form("%s/DEFAULT/K/H1D_ETA",pidHistDir.Data()));
   TH1D *K_nTracks = (TH1D*)pidFile->Get(Form("%s/DEFAULT/K/H1D_nTracks",pidHistDir.Data()));
   THnSparseD *K_histo_PID = (THnSparseD*)pidFile->Get(Form("%s/DEFAULT/K/histo_PID",pidHistDir.Data()));

   TH1D *Pi_P = (TH1D*)pidFile->Get(Form("%s/DEFAULT/Pi/H1D_P",pidHistDir.Data()));
   TH1D *Pi_ETA = (TH1D*)pidFile->Get(Form("%s/DEFAULT/Pi/H1D_ETA",pidHistDir.Data()));
   TH1D *Pi_nTracks = (TH1D*)pidFile->Get(Form("%s/DEFAULT/Pi/H1D_nTracks",pidHistDir.Data()));
   THnSparseD *Pi_histo_PID = (THnSparseD*)pidFile->Get(Form("%s/DEFAULT/Pi/histo_PID",pidHistDir.Data()));

   Long64_t nbytes = 0, nb = 0;
   if (firstEntry<0) firstEntry=0;
   if (lastEntry<0) lastEntry=nentries;
   for (Long64_t jentry=firstEntry; jentry<lastEntry;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      //

      if (jentry%10==0) std::cout << jentry-firstEntry << " / " << lastEntry-firstEntry << std::endl;

      int K_bin_nTracks = K_nTracks->FindBin(nTracks);
      int Pi_bin_nTracks = Pi_nTracks->FindBin(nTracks);

      Double_t Kplus_eta = 0.5*TMath::Log( ( Kplus_P + Kplus_PZ ) / ( Kplus_P - Kplus_PZ) );
      Double_t Kminus_eta = 0.5*TMath::Log( ( Kminus_P + Kminus_PZ ) / ( Kminus_P - Kminus_PZ) );
      Double_t Piplus_eta = 0.5*TMath::Log( ( Piplus_P + Piplus_PZ ) / ( Piplus_P - Piplus_PZ) );
      Double_t Piminus_eta = 0.5*TMath::Log( ( Piminus_P + Piminus_PZ ) / ( Piminus_P - Piminus_PZ) );

      int Kplus_bin_P = K_P->FindBin(Kplus_P);
      int Kplus_bin_ETA = K_ETA->FindBin(Kplus_eta);
      int Kminus_bin_P = K_P->FindBin(Kminus_P);
      int Kminus_bin_ETA = K_ETA->FindBin(Kminus_eta);

      int Piplus_bin_P = Pi_P->FindBin(Piplus_P);
      int Piplus_bin_ETA = Pi_ETA->FindBin(Piplus_eta);
      int Piminus_bin_P = Pi_P->FindBin(Piminus_P);
      int Piminus_bin_ETA = Pi_ETA->FindBin(Piminus_eta);

      TObjArray *objArr = K_histo_PID->GetListOfAxes();
      int varIndProbNNK = objArr->IndexOf(objArr->FindObject("ProbNNK"));
      int varIndProbNNPi = objArr->IndexOf(objArr->FindObject("ProbNNpi"));

      // Kplus
      K_histo_PID->GetAxis(0)->SetRange(Kplus_bin_P,Kplus_bin_P);
      K_histo_PID->GetAxis(0)->SetRange(Kplus_bin_ETA,Kplus_bin_ETA);
      K_histo_PID->GetAxis(0)->SetRange(K_bin_nTracks,K_bin_nTracks);

      TH1D *samplingHist = K_histo_PID->Projection(varIndProbNNK);
      Kplus_ProbNNkcorr = Kplus_ProbNNk;
      if (samplingHist->GetNbinsX()>0 && samplingHist->ComputeIntegral()>0) {
        Kplus_ProbNNkcorr = samplingHist->GetRandom();
      }
      delete samplingHist;

      samplingHist = K_histo_PID->Projection(varIndProbNNPi);
      Kplus_ProbNNpicorr = Kplus_ProbNNpi;
      if (samplingHist->GetNbinsX()>0 && samplingHist->ComputeIntegral()>0){
        Kplus_ProbNNpicorr = samplingHist->GetRandom();
      }
      delete samplingHist;

      // Kminus
      K_histo_PID->GetAxis(0)->SetRange(Kminus_bin_P,Kminus_bin_P);
      K_histo_PID->GetAxis(0)->SetRange(Kminus_bin_ETA,Kminus_bin_ETA);
      K_histo_PID->GetAxis(0)->SetRange(K_bin_nTracks,K_bin_nTracks);

      samplingHist = K_histo_PID->Projection(varIndProbNNK);
      Kminus_ProbNNkcorr = Kminus_ProbNNk;
      if (samplingHist->GetNbinsX()>0 && samplingHist->ComputeIntegral()>0) {
        Kminus_ProbNNkcorr = samplingHist->GetRandom();
      }
      delete samplingHist;

      samplingHist = K_histo_PID->Projection(varIndProbNNPi);
      Kminus_ProbNNpicorr = Kminus_ProbNNpi;
      if (samplingHist->GetNbinsX()>0 && samplingHist->ComputeIntegral()>0){
        Kminus_ProbNNpicorr = samplingHist->GetRandom();
      }
      delete samplingHist;

      objArr = Pi_histo_PID->GetListOfAxes();
      varIndProbNNK = objArr->IndexOf(objArr->FindObject("ProbNNK"));
      varIndProbNNPi = objArr->IndexOf(objArr->FindObject("ProbNNpi"));

        // Piplus
      Pi_histo_PID->GetAxis(0)->SetRange(Piplus_bin_P,Piplus_bin_P);
      Pi_histo_PID->GetAxis(0)->SetRange(Piplus_bin_ETA,Piplus_bin_ETA);
      Pi_histo_PID->GetAxis(0)->SetRange(Pi_bin_nTracks,Pi_bin_nTracks);

      samplingHist = Pi_histo_PID->Projection(varIndProbNNK);
      Piplus_ProbNNkcorr = Piplus_ProbNNk;
      if (samplingHist->GetNbinsX()>0 && samplingHist->ComputeIntegral()>0) {
        Piplus_ProbNNkcorr = samplingHist->GetRandom();
      }
      delete samplingHist;

      samplingHist = Pi_histo_PID->Projection(varIndProbNNPi);
      Piplus_ProbNNpicorr = Piplus_ProbNNpi;
      if (samplingHist->GetNbinsX()>0 && samplingHist->ComputeIntegral()>0){
        Piplus_ProbNNpicorr = samplingHist->GetRandom();
      }
      delete samplingHist;

        // Piminus
      Pi_histo_PID->GetAxis(0)->SetRange(Piminus_bin_P,Piminus_bin_P);
      Pi_histo_PID->GetAxis(0)->SetRange(Piminus_bin_ETA,Piminus_bin_ETA);
      Pi_histo_PID->GetAxis(0)->SetRange(Pi_bin_nTracks,Pi_bin_nTracks);

      samplingHist = Pi_histo_PID->Projection(varIndProbNNK);
      Piminus_ProbNNkcorr = Piminus_ProbNNk;
      if (samplingHist->GetNbinsX()>0 && samplingHist->ComputeIntegral()>0) {
        Piminus_ProbNNkcorr = samplingHist->GetRandom();
      }
      delete samplingHist;

      samplingHist = Pi_histo_PID->Projection(varIndProbNNPi);
      Piminus_ProbNNpicorr = Piminus_ProbNNpi;
      if (samplingHist->GetNbinsX()>0 && samplingHist->ComputeIntegral()>0){
        Piminus_ProbNNpicorr = samplingHist->GetRandom();
      }
      delete samplingHist;

      outTree->Fill();
   }
   pidFile->Close();
}
