//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Oct 20 09:51:09 2014 by ROOT version 5.34/18
// from TTree DecayTree/DecayTree
// found on file: ntuples/Bs2Kst0Kst0_wide_MC2012_magnetDown_Job11.root
//////////////////////////////////////////////////////////

#ifndef MCClass_h
#define MCClass_h

#include <iostream>
#include "TString.h"

#include "TROOT.h"
#include "TChain.h"
#include "TFile.h"

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxB_s0_ENDVERTEX_COV = 1;
const Int_t kMaxB_s0_OWNPV_COV = 1;
const Int_t kMaxKstb_ENDVERTEX_COV = 1;
const Int_t kMaxKstb_OWNPV_COV = 1;
const Int_t kMaxKstb_ORIVX_COV = 1;
const Int_t kMaxPiplus_OWNPV_COV = 1;
const Int_t kMaxPiplus_ORIVX_COV = 1;
const Int_t kMaxKminus_OWNPV_COV = 1;
const Int_t kMaxKminus_ORIVX_COV = 1;
const Int_t kMaxKst_ENDVERTEX_COV = 1;
const Int_t kMaxKst_OWNPV_COV = 1;
const Int_t kMaxKst_ORIVX_COV = 1;
const Int_t kMaxPiminus_OWNPV_COV = 1;
const Int_t kMaxPiminus_ORIVX_COV = 1;
const Int_t kMaxKplus_OWNPV_COV = 1;
const Int_t kMaxKplus_ORIVX_COV = 1;

class MCClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   TFile          *outFile;
   TTree          *outTree;

   Double_t        Kplus_ProbNNkcorr;
   Double_t        Kplus_ProbNNpicorr;
   Double_t        Kminus_ProbNNkcorr;
   Double_t        Kminus_ProbNNpicorr;
   Double_t        Piplus_ProbNNkcorr;
   Double_t        Piplus_ProbNNpicorr;
   Double_t        Piminus_ProbNNkcorr;
   Double_t        Piminus_ProbNNpicorr;

   // Declaration of leaf types
   Double_t        B_s0_ENDVERTEX_X;
   Double_t        B_s0_ENDVERTEX_Y;
   Double_t        B_s0_ENDVERTEX_Z;
   Double_t        B_s0_ENDVERTEX_XERR;
   Double_t        B_s0_ENDVERTEX_YERR;
   Double_t        B_s0_ENDVERTEX_ZERR;
   Double_t        B_s0_ENDVERTEX_CHI2;
   Int_t           B_s0_ENDVERTEX_NDOF;
   Float_t         B_s0_ENDVERTEX_COV_[3][3];
   Double_t        B_s0_OWNPV_X;
   Double_t        B_s0_OWNPV_Y;
   Double_t        B_s0_OWNPV_Z;
   Double_t        B_s0_OWNPV_XERR;
   Double_t        B_s0_OWNPV_YERR;
   Double_t        B_s0_OWNPV_ZERR;
   Double_t        B_s0_OWNPV_CHI2;
   Int_t           B_s0_OWNPV_NDOF;
   Float_t         B_s0_OWNPV_COV_[3][3];
   Double_t        B_s0_IP_OWNPV;
   Double_t        B_s0_IPCHI2_OWNPV;
   Double_t        B_s0_FD_OWNPV;
   Double_t        B_s0_FDCHI2_OWNPV;
   Double_t        B_s0_DIRA_OWNPV;
   Double_t        B_s0_P;
   Double_t        B_s0_PT;
   Double_t        B_s0_PE;
   Double_t        B_s0_PX;
   Double_t        B_s0_PY;
   Double_t        B_s0_PZ;
   Double_t        B_s0_MM;
   Double_t        B_s0_MMERR;
   Double_t        B_s0_M;
   Int_t           B_s0_BKGCAT;
   Int_t           B_s0_TRUEID;
   Int_t           B_s0_MC_MOTHER_ID;
   Int_t           B_s0_MC_MOTHER_KEY;
   Int_t           B_s0_MC_GD_MOTHER_ID;
   Int_t           B_s0_MC_GD_MOTHER_KEY;
   Int_t           B_s0_MC_GD_GD_MOTHER_ID;
   Int_t           B_s0_MC_GD_GD_MOTHER_KEY;
   Double_t        B_s0_TRUEP_E;
   Double_t        B_s0_TRUEP_X;
   Double_t        B_s0_TRUEP_Y;
   Double_t        B_s0_TRUEP_Z;
   Double_t        B_s0_TRUEPT;
   Double_t        B_s0_TRUEORIGINVERTEX_X;
   Double_t        B_s0_TRUEORIGINVERTEX_Y;
   Double_t        B_s0_TRUEORIGINVERTEX_Z;
   Double_t        B_s0_TRUEENDVERTEX_X;
   Double_t        B_s0_TRUEENDVERTEX_Y;
   Double_t        B_s0_TRUEENDVERTEX_Z;
   Bool_t          B_s0_TRUEISSTABLE;
   Double_t        B_s0_TRUETAU;
   Double_t        B_s0_ThetaL;
   Double_t        B_s0_ThetaK;
   Double_t        B_s0_Phi;
   Double_t        B_s0_ThetaTr;
   Double_t        B_s0_PhiTr;
   Double_t        B_s0_ThetaVtr;
   Int_t           B_s0_ID;
   Double_t        B_s0_TAU;
   Double_t        B_s0_TAUERR;
   Double_t        B_s0_TAUCHI2;
   Bool_t          B_s0_L0Global_Dec;
   Bool_t          B_s0_L0Global_TIS;
   Bool_t          B_s0_L0Global_TOS;
   Bool_t          B_s0_Hlt1Global_Dec;
   Bool_t          B_s0_Hlt1Global_TIS;
   Bool_t          B_s0_Hlt1Global_TOS;
   Bool_t          B_s0_Hlt1Phys_Dec;
   Bool_t          B_s0_Hlt1Phys_TIS;
   Bool_t          B_s0_Hlt1Phys_TOS;
   Bool_t          B_s0_Hlt2Global_Dec;
   Bool_t          B_s0_Hlt2Global_TIS;
   Bool_t          B_s0_Hlt2Global_TOS;
   Bool_t          B_s0_Hlt2Phys_Dec;
   Bool_t          B_s0_Hlt2Phys_TIS;
   Bool_t          B_s0_Hlt2Phys_TOS;
   Bool_t          B_s0_StrippingGlobal_Dec;
   Bool_t          B_s0_StrippingGlobal_TIS;
   Bool_t          B_s0_StrippingGlobal_TOS;
   Bool_t          B_s0_L0HadronDecision_Dec;
   Bool_t          B_s0_L0HadronDecision_TIS;
   Bool_t          B_s0_L0HadronDecision_TOS;
   Bool_t          B_s0_L0MuonDecision_Dec;
   Bool_t          B_s0_L0MuonDecision_TIS;
   Bool_t          B_s0_L0MuonDecision_TOS;
   Bool_t          B_s0_L0DiMuonDecision_Dec;
   Bool_t          B_s0_L0DiMuonDecision_TIS;
   Bool_t          B_s0_L0DiMuonDecision_TOS;
   Bool_t          B_s0_L0ElectronDecision_Dec;
   Bool_t          B_s0_L0ElectronDecision_TIS;
   Bool_t          B_s0_L0ElectronDecision_TOS;
   Bool_t          B_s0_L0PhotonDecision_Dec;
   Bool_t          B_s0_L0PhotonDecision_TIS;
   Bool_t          B_s0_L0PhotonDecision_TOS;
   Bool_t          B_s0_Hlt1SingleHadronDecision_Dec;
   Bool_t          B_s0_Hlt1SingleHadronDecision_TIS;
   Bool_t          B_s0_Hlt1SingleHadronDecision_TOS;
   Bool_t          B_s0_Hlt1MBNoBiasDecision_Dec;
   Bool_t          B_s0_Hlt1MBNoBiasDecision_TIS;
   Bool_t          B_s0_Hlt1MBNoBiasDecision_TOS;
   Bool_t          B_s0_Hlt1DiHadronDecision_Dec;
   Bool_t          B_s0_Hlt1DiHadronDecision_TIS;
   Bool_t          B_s0_Hlt1DiHadronDecision_TOS;
   Bool_t          B_s0_Hlt1L0AnyDecision_Dec;
   Bool_t          B_s0_Hlt1L0AnyDecision_TIS;
   Bool_t          B_s0_Hlt1L0AnyDecision_TOS;
   Bool_t          B_s0_Hlt1TrackAllL0Decision_Dec;
   Bool_t          B_s0_Hlt1TrackAllL0Decision_TIS;
   Bool_t          B_s0_Hlt1TrackAllL0Decision_TOS;
   Bool_t          B_s0_Hlt2TopoOSTF4BodyDecision_Dec;
   Bool_t          B_s0_Hlt2TopoOSTF4BodyDecision_TIS;
   Bool_t          B_s0_Hlt2TopoOSTF4BodyDecision_TOS;
   Bool_t          B_s0_Hlt2IncPhiDecision_Dec;
   Bool_t          B_s0_Hlt2IncPhiDecision_TIS;
   Bool_t          B_s0_Hlt2IncPhiDecision_TOS;
   Bool_t          B_s0_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          B_s0_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          B_s0_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          B_s0_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          B_s0_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          B_s0_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          B_s0_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          B_s0_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          B_s0_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          B_s0_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          B_s0_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          B_s0_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          B_s0_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          B_s0_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          B_s0_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          B_s0_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          B_s0_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          B_s0_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          B_s0_Hlt2IncPhiSidebandsDecision_Dec;
   Bool_t          B_s0_Hlt2IncPhiSidebandsDecision_TIS;
   Bool_t          B_s0_Hlt2IncPhiSidebandsDecision_TOS;
   Bool_t          B_s0_Hlt2B2HHDecision_Dec;
   Bool_t          B_s0_Hlt2B2HHDecision_TIS;
   Bool_t          B_s0_Hlt2B2HHDecision_TOS;
   Int_t           B_s0_TAGDECISION;
   Int_t           B_s0_TAGCAT;
   Double_t        B_s0_TAGOMEGA;
   Int_t           B_s0_TAGDECISION_OS;
   Int_t           B_s0_TAGCAT_OS;
   Double_t        B_s0_TAGOMEGA_OS;
   Int_t           B_s0_TAGGER;
   Int_t           B_s0_NOPARTWITHINDCHI2WDW;
   Int_t           B_s0_NOPARTWITHINCHI2WDW;
   Double_t        B_s0_SMALLESTCHI2;
   Double_t        B_s0_SMALLESTDELTACHI2;
   Double_t        Kstb_CosTheta;
   Double_t        Kstb_ENDVERTEX_X;
   Double_t        Kstb_ENDVERTEX_Y;
   Double_t        Kstb_ENDVERTEX_Z;
   Double_t        Kstb_ENDVERTEX_XERR;
   Double_t        Kstb_ENDVERTEX_YERR;
   Double_t        Kstb_ENDVERTEX_ZERR;
   Double_t        Kstb_ENDVERTEX_CHI2;
   Int_t           Kstb_ENDVERTEX_NDOF;
   Float_t         Kstb_ENDVERTEX_COV_[3][3];
   Double_t        Kstb_OWNPV_X;
   Double_t        Kstb_OWNPV_Y;
   Double_t        Kstb_OWNPV_Z;
   Double_t        Kstb_OWNPV_XERR;
   Double_t        Kstb_OWNPV_YERR;
   Double_t        Kstb_OWNPV_ZERR;
   Double_t        Kstb_OWNPV_CHI2;
   Int_t           Kstb_OWNPV_NDOF;
   Float_t         Kstb_OWNPV_COV_[3][3];
   Double_t        Kstb_IP_OWNPV;
   Double_t        Kstb_IPCHI2_OWNPV;
   Double_t        Kstb_FD_OWNPV;
   Double_t        Kstb_FDCHI2_OWNPV;
   Double_t        Kstb_DIRA_OWNPV;
   Double_t        Kstb_ORIVX_X;
   Double_t        Kstb_ORIVX_Y;
   Double_t        Kstb_ORIVX_Z;
   Double_t        Kstb_ORIVX_XERR;
   Double_t        Kstb_ORIVX_YERR;
   Double_t        Kstb_ORIVX_ZERR;
   Double_t        Kstb_ORIVX_CHI2;
   Int_t           Kstb_ORIVX_NDOF;
   Float_t         Kstb_ORIVX_COV_[3][3];
   Double_t        Kstb_FD_ORIVX;
   Double_t        Kstb_FDCHI2_ORIVX;
   Double_t        Kstb_DIRA_ORIVX;
   Double_t        Kstb_P;
   Double_t        Kstb_PT;
   Double_t        Kstb_PE;
   Double_t        Kstb_PX;
   Double_t        Kstb_PY;
   Double_t        Kstb_PZ;
   Double_t        Kstb_MM;
   Double_t        Kstb_MMERR;
   Double_t        Kstb_M;
   Int_t           Kstb_BKGCAT;
   Int_t           Kstb_TRUEID;
   Int_t           Kstb_MC_MOTHER_ID;
   Int_t           Kstb_MC_MOTHER_KEY;
   Int_t           Kstb_MC_GD_MOTHER_ID;
   Int_t           Kstb_MC_GD_MOTHER_KEY;
   Int_t           Kstb_MC_GD_GD_MOTHER_ID;
   Int_t           Kstb_MC_GD_GD_MOTHER_KEY;
   Double_t        Kstb_TRUEP_E;
   Double_t        Kstb_TRUEP_X;
   Double_t        Kstb_TRUEP_Y;
   Double_t        Kstb_TRUEP_Z;
   Double_t        Kstb_TRUEPT;
   Double_t        Kstb_TRUEORIGINVERTEX_X;
   Double_t        Kstb_TRUEORIGINVERTEX_Y;
   Double_t        Kstb_TRUEORIGINVERTEX_Z;
   Double_t        Kstb_TRUEENDVERTEX_X;
   Double_t        Kstb_TRUEENDVERTEX_Y;
   Double_t        Kstb_TRUEENDVERTEX_Z;
   Bool_t          Kstb_TRUEISSTABLE;
   Double_t        Kstb_TRUETAU;
   Double_t        Kstb_ThetaL;
   Double_t        Kstb_ThetaK;
   Double_t        Kstb_Phi;
   Double_t        Kstb_ThetaTr;
   Double_t        Kstb_PhiTr;
   Double_t        Kstb_ThetaVtr;
   Int_t           Kstb_ID;
   Double_t        Kstb_TAU;
   Double_t        Kstb_TAUERR;
   Double_t        Kstb_TAUCHI2;
   Bool_t          Kstb_L0Global_Dec;
   Bool_t          Kstb_L0Global_TIS;
   Bool_t          Kstb_L0Global_TOS;
   Bool_t          Kstb_Hlt1Global_Dec;
   Bool_t          Kstb_Hlt1Global_TIS;
   Bool_t          Kstb_Hlt1Global_TOS;
   Bool_t          Kstb_Hlt1Phys_Dec;
   Bool_t          Kstb_Hlt1Phys_TIS;
   Bool_t          Kstb_Hlt1Phys_TOS;
   Bool_t          Kstb_Hlt2Global_Dec;
   Bool_t          Kstb_Hlt2Global_TIS;
   Bool_t          Kstb_Hlt2Global_TOS;
   Bool_t          Kstb_Hlt2Phys_Dec;
   Bool_t          Kstb_Hlt2Phys_TIS;
   Bool_t          Kstb_Hlt2Phys_TOS;
   Bool_t          Kstb_StrippingGlobal_Dec;
   Bool_t          Kstb_StrippingGlobal_TIS;
   Bool_t          Kstb_StrippingGlobal_TOS;
   Bool_t          Kstb_L0HadronDecision_Dec;
   Bool_t          Kstb_L0HadronDecision_TIS;
   Bool_t          Kstb_L0HadronDecision_TOS;
   Bool_t          Kstb_L0MuonDecision_Dec;
   Bool_t          Kstb_L0MuonDecision_TIS;
   Bool_t          Kstb_L0MuonDecision_TOS;
   Bool_t          Kstb_L0DiMuonDecision_Dec;
   Bool_t          Kstb_L0DiMuonDecision_TIS;
   Bool_t          Kstb_L0DiMuonDecision_TOS;
   Bool_t          Kstb_L0ElectronDecision_Dec;
   Bool_t          Kstb_L0ElectronDecision_TIS;
   Bool_t          Kstb_L0ElectronDecision_TOS;
   Bool_t          Kstb_L0PhotonDecision_Dec;
   Bool_t          Kstb_L0PhotonDecision_TIS;
   Bool_t          Kstb_L0PhotonDecision_TOS;
   Bool_t          Kstb_Hlt1SingleHadronDecision_Dec;
   Bool_t          Kstb_Hlt1SingleHadronDecision_TIS;
   Bool_t          Kstb_Hlt1SingleHadronDecision_TOS;
   Bool_t          Kstb_Hlt1MBNoBiasDecision_Dec;
   Bool_t          Kstb_Hlt1MBNoBiasDecision_TIS;
   Bool_t          Kstb_Hlt1MBNoBiasDecision_TOS;
   Bool_t          Kstb_Hlt1DiHadronDecision_Dec;
   Bool_t          Kstb_Hlt1DiHadronDecision_TIS;
   Bool_t          Kstb_Hlt1DiHadronDecision_TOS;
   Bool_t          Kstb_Hlt1L0AnyDecision_Dec;
   Bool_t          Kstb_Hlt1L0AnyDecision_TIS;
   Bool_t          Kstb_Hlt1L0AnyDecision_TOS;
   Bool_t          Kstb_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Kstb_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Kstb_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Kstb_Hlt2TopoOSTF4BodyDecision_Dec;
   Bool_t          Kstb_Hlt2TopoOSTF4BodyDecision_TIS;
   Bool_t          Kstb_Hlt2TopoOSTF4BodyDecision_TOS;
   Bool_t          Kstb_Hlt2IncPhiDecision_Dec;
   Bool_t          Kstb_Hlt2IncPhiDecision_TIS;
   Bool_t          Kstb_Hlt2IncPhiDecision_TOS;
   Bool_t          Kstb_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Kstb_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Kstb_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Kstb_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Kstb_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Kstb_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Kstb_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Kstb_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Kstb_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Kstb_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Kstb_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Kstb_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Kstb_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Kstb_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Kstb_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Kstb_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Kstb_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Kstb_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Kstb_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          Kstb_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          Kstb_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          Kstb_Hlt2IncPhiSidebandsDecision_Dec;
   Bool_t          Kstb_Hlt2IncPhiSidebandsDecision_TIS;
   Bool_t          Kstb_Hlt2IncPhiSidebandsDecision_TOS;
   Bool_t          Kstb_Hlt2B2HHDecision_Dec;
   Bool_t          Kstb_Hlt2B2HHDecision_TIS;
   Bool_t          Kstb_Hlt2B2HHDecision_TOS;
   Int_t           Kstb_NOPARTWITHINDCHI2WDW;
   Int_t           Kstb_NOPARTWITHINCHI2WDW;
   Double_t        Kstb_SMALLESTCHI2;
   Double_t        Kstb_SMALLESTDELTACHI2;
   Double_t        Piplus_CosTheta;
   Double_t        Piplus_OWNPV_X;
   Double_t        Piplus_OWNPV_Y;
   Double_t        Piplus_OWNPV_Z;
   Double_t        Piplus_OWNPV_XERR;
   Double_t        Piplus_OWNPV_YERR;
   Double_t        Piplus_OWNPV_ZERR;
   Double_t        Piplus_OWNPV_CHI2;
   Int_t           Piplus_OWNPV_NDOF;
   Float_t         Piplus_OWNPV_COV_[3][3];
   Double_t        Piplus_IP_OWNPV;
   Double_t        Piplus_IPCHI2_OWNPV;
   Double_t        Piplus_ORIVX_X;
   Double_t        Piplus_ORIVX_Y;
   Double_t        Piplus_ORIVX_Z;
   Double_t        Piplus_ORIVX_XERR;
   Double_t        Piplus_ORIVX_YERR;
   Double_t        Piplus_ORIVX_ZERR;
   Double_t        Piplus_ORIVX_CHI2;
   Int_t           Piplus_ORIVX_NDOF;
   Float_t         Piplus_ORIVX_COV_[3][3];
   Double_t        Piplus_P;
   Double_t        Piplus_PT;
   Double_t        Piplus_PE;
   Double_t        Piplus_PX;
   Double_t        Piplus_PY;
   Double_t        Piplus_PZ;
   Double_t        Piplus_M;
   Double_t        Piplus_L0Calo_HCAL_realET;
   Double_t        Piplus_L0Calo_HCAL_xProjection;
   Double_t        Piplus_L0Calo_HCAL_yProjection;
   Int_t           Piplus_L0Calo_HCAL_region;
   Int_t           Piplus_TRUEID;
   Int_t           Piplus_MC_MOTHER_ID;
   Int_t           Piplus_MC_MOTHER_KEY;
   Int_t           Piplus_MC_GD_MOTHER_ID;
   Int_t           Piplus_MC_GD_MOTHER_KEY;
   Int_t           Piplus_MC_GD_GD_MOTHER_ID;
   Int_t           Piplus_MC_GD_GD_MOTHER_KEY;
   Double_t        Piplus_TRUEP_E;
   Double_t        Piplus_TRUEP_X;
   Double_t        Piplus_TRUEP_Y;
   Double_t        Piplus_TRUEP_Z;
   Double_t        Piplus_TRUEPT;
   Double_t        Piplus_TRUEORIGINVERTEX_X;
   Double_t        Piplus_TRUEORIGINVERTEX_Y;
   Double_t        Piplus_TRUEORIGINVERTEX_Z;
   Double_t        Piplus_TRUEENDVERTEX_X;
   Double_t        Piplus_TRUEENDVERTEX_Y;
   Double_t        Piplus_TRUEENDVERTEX_Z;
   Bool_t          Piplus_TRUEISSTABLE;
   Double_t        Piplus_TRUETAU;
   Double_t        Piplus_ThetaL;
   Double_t        Piplus_ThetaK;
   Double_t        Piplus_Phi;
   Double_t        Piplus_ThetaTr;
   Double_t        Piplus_PhiTr;
   Double_t        Piplus_ThetaVtr;
   Int_t           Piplus_ID;
   Double_t        Piplus_PIDe;
   Double_t        Piplus_PIDmu;
   Double_t        Piplus_PIDK;
   Double_t        Piplus_PIDp;
   Double_t        Piplus_ProbNNe;
   Double_t        Piplus_ProbNNk;
   Double_t        Piplus_ProbNNp;
   Double_t        Piplus_ProbNNpi;
   Double_t        Piplus_ProbNNmu;
   Double_t        Piplus_ProbNNghost;
   Bool_t          Piplus_hasMuon;
   Bool_t          Piplus_isMuon;
   Bool_t          Piplus_hasRich;
   Bool_t          Piplus_hasCalo;
   Bool_t          Piplus_L0Global_Dec;
   Bool_t          Piplus_L0Global_TIS;
   Bool_t          Piplus_L0Global_TOS;
   Bool_t          Piplus_Hlt1Global_Dec;
   Bool_t          Piplus_Hlt1Global_TIS;
   Bool_t          Piplus_Hlt1Global_TOS;
   Bool_t          Piplus_Hlt1Phys_Dec;
   Bool_t          Piplus_Hlt1Phys_TIS;
   Bool_t          Piplus_Hlt1Phys_TOS;
   Bool_t          Piplus_Hlt2Global_Dec;
   Bool_t          Piplus_Hlt2Global_TIS;
   Bool_t          Piplus_Hlt2Global_TOS;
   Bool_t          Piplus_Hlt2Phys_Dec;
   Bool_t          Piplus_Hlt2Phys_TIS;
   Bool_t          Piplus_Hlt2Phys_TOS;
   Bool_t          Piplus_StrippingGlobal_Dec;
   Bool_t          Piplus_StrippingGlobal_TIS;
   Bool_t          Piplus_StrippingGlobal_TOS;
   Bool_t          Piplus_L0HadronDecision_Dec;
   Bool_t          Piplus_L0HadronDecision_TIS;
   Bool_t          Piplus_L0HadronDecision_TOS;
   Bool_t          Piplus_L0MuonDecision_Dec;
   Bool_t          Piplus_L0MuonDecision_TIS;
   Bool_t          Piplus_L0MuonDecision_TOS;
   Bool_t          Piplus_L0DiMuonDecision_Dec;
   Bool_t          Piplus_L0DiMuonDecision_TIS;
   Bool_t          Piplus_L0DiMuonDecision_TOS;
   Bool_t          Piplus_L0ElectronDecision_Dec;
   Bool_t          Piplus_L0ElectronDecision_TIS;
   Bool_t          Piplus_L0ElectronDecision_TOS;
   Bool_t          Piplus_L0PhotonDecision_Dec;
   Bool_t          Piplus_L0PhotonDecision_TIS;
   Bool_t          Piplus_L0PhotonDecision_TOS;
   Bool_t          Piplus_Hlt1SingleHadronDecision_Dec;
   Bool_t          Piplus_Hlt1SingleHadronDecision_TIS;
   Bool_t          Piplus_Hlt1SingleHadronDecision_TOS;
   Bool_t          Piplus_Hlt1MBNoBiasDecision_Dec;
   Bool_t          Piplus_Hlt1MBNoBiasDecision_TIS;
   Bool_t          Piplus_Hlt1MBNoBiasDecision_TOS;
   Bool_t          Piplus_Hlt1DiHadronDecision_Dec;
   Bool_t          Piplus_Hlt1DiHadronDecision_TIS;
   Bool_t          Piplus_Hlt1DiHadronDecision_TOS;
   Bool_t          Piplus_Hlt1L0AnyDecision_Dec;
   Bool_t          Piplus_Hlt1L0AnyDecision_TIS;
   Bool_t          Piplus_Hlt1L0AnyDecision_TOS;
   Bool_t          Piplus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Piplus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Piplus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Piplus_Hlt2TopoOSTF4BodyDecision_Dec;
   Bool_t          Piplus_Hlt2TopoOSTF4BodyDecision_TIS;
   Bool_t          Piplus_Hlt2TopoOSTF4BodyDecision_TOS;
   Bool_t          Piplus_Hlt2IncPhiDecision_Dec;
   Bool_t          Piplus_Hlt2IncPhiDecision_TIS;
   Bool_t          Piplus_Hlt2IncPhiDecision_TOS;
   Bool_t          Piplus_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Piplus_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Piplus_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Piplus_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Piplus_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Piplus_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Piplus_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Piplus_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Piplus_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Piplus_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Piplus_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Piplus_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Piplus_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Piplus_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Piplus_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Piplus_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Piplus_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Piplus_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Piplus_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          Piplus_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          Piplus_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          Piplus_Hlt2IncPhiSidebandsDecision_Dec;
   Bool_t          Piplus_Hlt2IncPhiSidebandsDecision_TIS;
   Bool_t          Piplus_Hlt2IncPhiSidebandsDecision_TOS;
   Bool_t          Piplus_Hlt2B2HHDecision_Dec;
   Bool_t          Piplus_Hlt2B2HHDecision_TIS;
   Bool_t          Piplus_Hlt2B2HHDecision_TOS;
   Int_t           Piplus_TRACK_Type;
   Int_t           Piplus_TRACK_Key;
   Double_t        Piplus_TRACK_CHI2NDOF;
   Double_t        Piplus_TRACK_PCHI2;
   Double_t        Piplus_TRACK_MatchCHI2;
   Double_t        Piplus_TRACK_GhostProb;
   Double_t        Piplus_TRACK_CloneDist;
   Double_t        Piplus_TRACK_Likelihood;
   Int_t           Piplus_NOPARTWITHINDCHI2WDW;
   Int_t           Piplus_NOPARTWITHINCHI2WDW;
   Double_t        Piplus_SMALLESTCHI2;
   Double_t        Piplus_SMALLESTDELTACHI2;
   Double_t        Kminus_CosTheta;
   Double_t        Kminus_OWNPV_X;
   Double_t        Kminus_OWNPV_Y;
   Double_t        Kminus_OWNPV_Z;
   Double_t        Kminus_OWNPV_XERR;
   Double_t        Kminus_OWNPV_YERR;
   Double_t        Kminus_OWNPV_ZERR;
   Double_t        Kminus_OWNPV_CHI2;
   Int_t           Kminus_OWNPV_NDOF;
   Float_t         Kminus_OWNPV_COV_[3][3];
   Double_t        Kminus_IP_OWNPV;
   Double_t        Kminus_IPCHI2_OWNPV;
   Double_t        Kminus_ORIVX_X;
   Double_t        Kminus_ORIVX_Y;
   Double_t        Kminus_ORIVX_Z;
   Double_t        Kminus_ORIVX_XERR;
   Double_t        Kminus_ORIVX_YERR;
   Double_t        Kminus_ORIVX_ZERR;
   Double_t        Kminus_ORIVX_CHI2;
   Int_t           Kminus_ORIVX_NDOF;
   Float_t         Kminus_ORIVX_COV_[3][3];
   Double_t        Kminus_P;
   Double_t        Kminus_PT;
   Double_t        Kminus_PE;
   Double_t        Kminus_PX;
   Double_t        Kminus_PY;
   Double_t        Kminus_PZ;
   Double_t        Kminus_M;
   Double_t        Kminus_L0Calo_HCAL_realET;
   Double_t        Kminus_L0Calo_HCAL_xProjection;
   Double_t        Kminus_L0Calo_HCAL_yProjection;
   Int_t           Kminus_L0Calo_HCAL_region;
   Int_t           Kminus_TRUEID;
   Int_t           Kminus_MC_MOTHER_ID;
   Int_t           Kminus_MC_MOTHER_KEY;
   Int_t           Kminus_MC_GD_MOTHER_ID;
   Int_t           Kminus_MC_GD_MOTHER_KEY;
   Int_t           Kminus_MC_GD_GD_MOTHER_ID;
   Int_t           Kminus_MC_GD_GD_MOTHER_KEY;
   Double_t        Kminus_TRUEP_E;
   Double_t        Kminus_TRUEP_X;
   Double_t        Kminus_TRUEP_Y;
   Double_t        Kminus_TRUEP_Z;
   Double_t        Kminus_TRUEPT;
   Double_t        Kminus_TRUEORIGINVERTEX_X;
   Double_t        Kminus_TRUEORIGINVERTEX_Y;
   Double_t        Kminus_TRUEORIGINVERTEX_Z;
   Double_t        Kminus_TRUEENDVERTEX_X;
   Double_t        Kminus_TRUEENDVERTEX_Y;
   Double_t        Kminus_TRUEENDVERTEX_Z;
   Bool_t          Kminus_TRUEISSTABLE;
   Double_t        Kminus_TRUETAU;
   Double_t        Kminus_ThetaL;
   Double_t        Kminus_ThetaK;
   Double_t        Kminus_Phi;
   Double_t        Kminus_ThetaTr;
   Double_t        Kminus_PhiTr;
   Double_t        Kminus_ThetaVtr;
   Int_t           Kminus_ID;
   Double_t        Kminus_PIDe;
   Double_t        Kminus_PIDmu;
   Double_t        Kminus_PIDK;
   Double_t        Kminus_PIDp;
   Double_t        Kminus_ProbNNe;
   Double_t        Kminus_ProbNNk;
   Double_t        Kminus_ProbNNp;
   Double_t        Kminus_ProbNNpi;
   Double_t        Kminus_ProbNNmu;
   Double_t        Kminus_ProbNNghost;
   Bool_t          Kminus_hasMuon;
   Bool_t          Kminus_isMuon;
   Bool_t          Kminus_hasRich;
   Bool_t          Kminus_hasCalo;
   Bool_t          Kminus_L0Global_Dec;
   Bool_t          Kminus_L0Global_TIS;
   Bool_t          Kminus_L0Global_TOS;
   Bool_t          Kminus_Hlt1Global_Dec;
   Bool_t          Kminus_Hlt1Global_TIS;
   Bool_t          Kminus_Hlt1Global_TOS;
   Bool_t          Kminus_Hlt1Phys_Dec;
   Bool_t          Kminus_Hlt1Phys_TIS;
   Bool_t          Kminus_Hlt1Phys_TOS;
   Bool_t          Kminus_Hlt2Global_Dec;
   Bool_t          Kminus_Hlt2Global_TIS;
   Bool_t          Kminus_Hlt2Global_TOS;
   Bool_t          Kminus_Hlt2Phys_Dec;
   Bool_t          Kminus_Hlt2Phys_TIS;
   Bool_t          Kminus_Hlt2Phys_TOS;
   Bool_t          Kminus_StrippingGlobal_Dec;
   Bool_t          Kminus_StrippingGlobal_TIS;
   Bool_t          Kminus_StrippingGlobal_TOS;
   Bool_t          Kminus_L0HadronDecision_Dec;
   Bool_t          Kminus_L0HadronDecision_TIS;
   Bool_t          Kminus_L0HadronDecision_TOS;
   Bool_t          Kminus_L0MuonDecision_Dec;
   Bool_t          Kminus_L0MuonDecision_TIS;
   Bool_t          Kminus_L0MuonDecision_TOS;
   Bool_t          Kminus_L0DiMuonDecision_Dec;
   Bool_t          Kminus_L0DiMuonDecision_TIS;
   Bool_t          Kminus_L0DiMuonDecision_TOS;
   Bool_t          Kminus_L0ElectronDecision_Dec;
   Bool_t          Kminus_L0ElectronDecision_TIS;
   Bool_t          Kminus_L0ElectronDecision_TOS;
   Bool_t          Kminus_L0PhotonDecision_Dec;
   Bool_t          Kminus_L0PhotonDecision_TIS;
   Bool_t          Kminus_L0PhotonDecision_TOS;
   Bool_t          Kminus_Hlt1SingleHadronDecision_Dec;
   Bool_t          Kminus_Hlt1SingleHadronDecision_TIS;
   Bool_t          Kminus_Hlt1SingleHadronDecision_TOS;
   Bool_t          Kminus_Hlt1MBNoBiasDecision_Dec;
   Bool_t          Kminus_Hlt1MBNoBiasDecision_TIS;
   Bool_t          Kminus_Hlt1MBNoBiasDecision_TOS;
   Bool_t          Kminus_Hlt1DiHadronDecision_Dec;
   Bool_t          Kminus_Hlt1DiHadronDecision_TIS;
   Bool_t          Kminus_Hlt1DiHadronDecision_TOS;
   Bool_t          Kminus_Hlt1L0AnyDecision_Dec;
   Bool_t          Kminus_Hlt1L0AnyDecision_TIS;
   Bool_t          Kminus_Hlt1L0AnyDecision_TOS;
   Bool_t          Kminus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Kminus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Kminus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Kminus_Hlt2TopoOSTF4BodyDecision_Dec;
   Bool_t          Kminus_Hlt2TopoOSTF4BodyDecision_TIS;
   Bool_t          Kminus_Hlt2TopoOSTF4BodyDecision_TOS;
   Bool_t          Kminus_Hlt2IncPhiDecision_Dec;
   Bool_t          Kminus_Hlt2IncPhiDecision_TIS;
   Bool_t          Kminus_Hlt2IncPhiDecision_TOS;
   Bool_t          Kminus_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Kminus_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Kminus_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Kminus_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Kminus_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Kminus_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Kminus_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Kminus_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Kminus_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Kminus_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Kminus_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Kminus_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Kminus_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Kminus_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Kminus_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Kminus_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Kminus_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Kminus_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Kminus_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          Kminus_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          Kminus_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          Kminus_Hlt2IncPhiSidebandsDecision_Dec;
   Bool_t          Kminus_Hlt2IncPhiSidebandsDecision_TIS;
   Bool_t          Kminus_Hlt2IncPhiSidebandsDecision_TOS;
   Bool_t          Kminus_Hlt2B2HHDecision_Dec;
   Bool_t          Kminus_Hlt2B2HHDecision_TIS;
   Bool_t          Kminus_Hlt2B2HHDecision_TOS;
   Int_t           Kminus_TRACK_Type;
   Int_t           Kminus_TRACK_Key;
   Double_t        Kminus_TRACK_CHI2NDOF;
   Double_t        Kminus_TRACK_PCHI2;
   Double_t        Kminus_TRACK_MatchCHI2;
   Double_t        Kminus_TRACK_GhostProb;
   Double_t        Kminus_TRACK_CloneDist;
   Double_t        Kminus_TRACK_Likelihood;
   Int_t           Kminus_NOPARTWITHINDCHI2WDW;
   Int_t           Kminus_NOPARTWITHINCHI2WDW;
   Double_t        Kminus_SMALLESTCHI2;
   Double_t        Kminus_SMALLESTDELTACHI2;
   Double_t        Kst_CosTheta;
   Double_t        Kst_ENDVERTEX_X;
   Double_t        Kst_ENDVERTEX_Y;
   Double_t        Kst_ENDVERTEX_Z;
   Double_t        Kst_ENDVERTEX_XERR;
   Double_t        Kst_ENDVERTEX_YERR;
   Double_t        Kst_ENDVERTEX_ZERR;
   Double_t        Kst_ENDVERTEX_CHI2;
   Int_t           Kst_ENDVERTEX_NDOF;
   Float_t         Kst_ENDVERTEX_COV_[3][3];
   Double_t        Kst_OWNPV_X;
   Double_t        Kst_OWNPV_Y;
   Double_t        Kst_OWNPV_Z;
   Double_t        Kst_OWNPV_XERR;
   Double_t        Kst_OWNPV_YERR;
   Double_t        Kst_OWNPV_ZERR;
   Double_t        Kst_OWNPV_CHI2;
   Int_t           Kst_OWNPV_NDOF;
   Float_t         Kst_OWNPV_COV_[3][3];
   Double_t        Kst_IP_OWNPV;
   Double_t        Kst_IPCHI2_OWNPV;
   Double_t        Kst_FD_OWNPV;
   Double_t        Kst_FDCHI2_OWNPV;
   Double_t        Kst_DIRA_OWNPV;
   Double_t        Kst_ORIVX_X;
   Double_t        Kst_ORIVX_Y;
   Double_t        Kst_ORIVX_Z;
   Double_t        Kst_ORIVX_XERR;
   Double_t        Kst_ORIVX_YERR;
   Double_t        Kst_ORIVX_ZERR;
   Double_t        Kst_ORIVX_CHI2;
   Int_t           Kst_ORIVX_NDOF;
   Float_t         Kst_ORIVX_COV_[3][3];
   Double_t        Kst_FD_ORIVX;
   Double_t        Kst_FDCHI2_ORIVX;
   Double_t        Kst_DIRA_ORIVX;
   Double_t        Kst_P;
   Double_t        Kst_PT;
   Double_t        Kst_PE;
   Double_t        Kst_PX;
   Double_t        Kst_PY;
   Double_t        Kst_PZ;
   Double_t        Kst_MM;
   Double_t        Kst_MMERR;
   Double_t        Kst_M;
   Int_t           Kst_BKGCAT;
   Int_t           Kst_TRUEID;
   Int_t           Kst_MC_MOTHER_ID;
   Int_t           Kst_MC_MOTHER_KEY;
   Int_t           Kst_MC_GD_MOTHER_ID;
   Int_t           Kst_MC_GD_MOTHER_KEY;
   Int_t           Kst_MC_GD_GD_MOTHER_ID;
   Int_t           Kst_MC_GD_GD_MOTHER_KEY;
   Double_t        Kst_TRUEP_E;
   Double_t        Kst_TRUEP_X;
   Double_t        Kst_TRUEP_Y;
   Double_t        Kst_TRUEP_Z;
   Double_t        Kst_TRUEPT;
   Double_t        Kst_TRUEORIGINVERTEX_X;
   Double_t        Kst_TRUEORIGINVERTEX_Y;
   Double_t        Kst_TRUEORIGINVERTEX_Z;
   Double_t        Kst_TRUEENDVERTEX_X;
   Double_t        Kst_TRUEENDVERTEX_Y;
   Double_t        Kst_TRUEENDVERTEX_Z;
   Bool_t          Kst_TRUEISSTABLE;
   Double_t        Kst_TRUETAU;
   Double_t        Kst_ThetaL;
   Double_t        Kst_ThetaK;
   Double_t        Kst_Phi;
   Double_t        Kst_ThetaTr;
   Double_t        Kst_PhiTr;
   Double_t        Kst_ThetaVtr;
   Int_t           Kst_ID;
   Double_t        Kst_TAU;
   Double_t        Kst_TAUERR;
   Double_t        Kst_TAUCHI2;
   Bool_t          Kst_L0Global_Dec;
   Bool_t          Kst_L0Global_TIS;
   Bool_t          Kst_L0Global_TOS;
   Bool_t          Kst_Hlt1Global_Dec;
   Bool_t          Kst_Hlt1Global_TIS;
   Bool_t          Kst_Hlt1Global_TOS;
   Bool_t          Kst_Hlt1Phys_Dec;
   Bool_t          Kst_Hlt1Phys_TIS;
   Bool_t          Kst_Hlt1Phys_TOS;
   Bool_t          Kst_Hlt2Global_Dec;
   Bool_t          Kst_Hlt2Global_TIS;
   Bool_t          Kst_Hlt2Global_TOS;
   Bool_t          Kst_Hlt2Phys_Dec;
   Bool_t          Kst_Hlt2Phys_TIS;
   Bool_t          Kst_Hlt2Phys_TOS;
   Bool_t          Kst_StrippingGlobal_Dec;
   Bool_t          Kst_StrippingGlobal_TIS;
   Bool_t          Kst_StrippingGlobal_TOS;
   Bool_t          Kst_L0HadronDecision_Dec;
   Bool_t          Kst_L0HadronDecision_TIS;
   Bool_t          Kst_L0HadronDecision_TOS;
   Bool_t          Kst_L0MuonDecision_Dec;
   Bool_t          Kst_L0MuonDecision_TIS;
   Bool_t          Kst_L0MuonDecision_TOS;
   Bool_t          Kst_L0DiMuonDecision_Dec;
   Bool_t          Kst_L0DiMuonDecision_TIS;
   Bool_t          Kst_L0DiMuonDecision_TOS;
   Bool_t          Kst_L0ElectronDecision_Dec;
   Bool_t          Kst_L0ElectronDecision_TIS;
   Bool_t          Kst_L0ElectronDecision_TOS;
   Bool_t          Kst_L0PhotonDecision_Dec;
   Bool_t          Kst_L0PhotonDecision_TIS;
   Bool_t          Kst_L0PhotonDecision_TOS;
   Bool_t          Kst_Hlt1SingleHadronDecision_Dec;
   Bool_t          Kst_Hlt1SingleHadronDecision_TIS;
   Bool_t          Kst_Hlt1SingleHadronDecision_TOS;
   Bool_t          Kst_Hlt1MBNoBiasDecision_Dec;
   Bool_t          Kst_Hlt1MBNoBiasDecision_TIS;
   Bool_t          Kst_Hlt1MBNoBiasDecision_TOS;
   Bool_t          Kst_Hlt1DiHadronDecision_Dec;
   Bool_t          Kst_Hlt1DiHadronDecision_TIS;
   Bool_t          Kst_Hlt1DiHadronDecision_TOS;
   Bool_t          Kst_Hlt1L0AnyDecision_Dec;
   Bool_t          Kst_Hlt1L0AnyDecision_TIS;
   Bool_t          Kst_Hlt1L0AnyDecision_TOS;
   Bool_t          Kst_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Kst_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Kst_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Kst_Hlt2TopoOSTF4BodyDecision_Dec;
   Bool_t          Kst_Hlt2TopoOSTF4BodyDecision_TIS;
   Bool_t          Kst_Hlt2TopoOSTF4BodyDecision_TOS;
   Bool_t          Kst_Hlt2IncPhiDecision_Dec;
   Bool_t          Kst_Hlt2IncPhiDecision_TIS;
   Bool_t          Kst_Hlt2IncPhiDecision_TOS;
   Bool_t          Kst_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Kst_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Kst_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Kst_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Kst_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Kst_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Kst_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Kst_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Kst_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Kst_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Kst_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Kst_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Kst_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Kst_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Kst_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Kst_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Kst_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Kst_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Kst_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          Kst_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          Kst_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          Kst_Hlt2IncPhiSidebandsDecision_Dec;
   Bool_t          Kst_Hlt2IncPhiSidebandsDecision_TIS;
   Bool_t          Kst_Hlt2IncPhiSidebandsDecision_TOS;
   Bool_t          Kst_Hlt2B2HHDecision_Dec;
   Bool_t          Kst_Hlt2B2HHDecision_TIS;
   Bool_t          Kst_Hlt2B2HHDecision_TOS;
   Int_t           Kst_NOPARTWITHINDCHI2WDW;
   Int_t           Kst_NOPARTWITHINCHI2WDW;
   Double_t        Kst_SMALLESTCHI2;
   Double_t        Kst_SMALLESTDELTACHI2;
   Double_t        Piminus_CosTheta;
   Double_t        Piminus_OWNPV_X;
   Double_t        Piminus_OWNPV_Y;
   Double_t        Piminus_OWNPV_Z;
   Double_t        Piminus_OWNPV_XERR;
   Double_t        Piminus_OWNPV_YERR;
   Double_t        Piminus_OWNPV_ZERR;
   Double_t        Piminus_OWNPV_CHI2;
   Int_t           Piminus_OWNPV_NDOF;
   Float_t         Piminus_OWNPV_COV_[3][3];
   Double_t        Piminus_IP_OWNPV;
   Double_t        Piminus_IPCHI2_OWNPV;
   Double_t        Piminus_ORIVX_X;
   Double_t        Piminus_ORIVX_Y;
   Double_t        Piminus_ORIVX_Z;
   Double_t        Piminus_ORIVX_XERR;
   Double_t        Piminus_ORIVX_YERR;
   Double_t        Piminus_ORIVX_ZERR;
   Double_t        Piminus_ORIVX_CHI2;
   Int_t           Piminus_ORIVX_NDOF;
   Float_t         Piminus_ORIVX_COV_[3][3];
   Double_t        Piminus_P;
   Double_t        Piminus_PT;
   Double_t        Piminus_PE;
   Double_t        Piminus_PX;
   Double_t        Piminus_PY;
   Double_t        Piminus_PZ;
   Double_t        Piminus_M;
   Double_t        Piminus_L0Calo_HCAL_realET;
   Double_t        Piminus_L0Calo_HCAL_xProjection;
   Double_t        Piminus_L0Calo_HCAL_yProjection;
   Int_t           Piminus_L0Calo_HCAL_region;
   Int_t           Piminus_TRUEID;
   Int_t           Piminus_MC_MOTHER_ID;
   Int_t           Piminus_MC_MOTHER_KEY;
   Int_t           Piminus_MC_GD_MOTHER_ID;
   Int_t           Piminus_MC_GD_MOTHER_KEY;
   Int_t           Piminus_MC_GD_GD_MOTHER_ID;
   Int_t           Piminus_MC_GD_GD_MOTHER_KEY;
   Double_t        Piminus_TRUEP_E;
   Double_t        Piminus_TRUEP_X;
   Double_t        Piminus_TRUEP_Y;
   Double_t        Piminus_TRUEP_Z;
   Double_t        Piminus_TRUEPT;
   Double_t        Piminus_TRUEORIGINVERTEX_X;
   Double_t        Piminus_TRUEORIGINVERTEX_Y;
   Double_t        Piminus_TRUEORIGINVERTEX_Z;
   Double_t        Piminus_TRUEENDVERTEX_X;
   Double_t        Piminus_TRUEENDVERTEX_Y;
   Double_t        Piminus_TRUEENDVERTEX_Z;
   Bool_t          Piminus_TRUEISSTABLE;
   Double_t        Piminus_TRUETAU;
   Double_t        Piminus_ThetaL;
   Double_t        Piminus_ThetaK;
   Double_t        Piminus_Phi;
   Double_t        Piminus_ThetaTr;
   Double_t        Piminus_PhiTr;
   Double_t        Piminus_ThetaVtr;
   Int_t           Piminus_ID;
   Double_t        Piminus_PIDe;
   Double_t        Piminus_PIDmu;
   Double_t        Piminus_PIDK;
   Double_t        Piminus_PIDp;
   Double_t        Piminus_ProbNNe;
   Double_t        Piminus_ProbNNk;
   Double_t        Piminus_ProbNNp;
   Double_t        Piminus_ProbNNpi;
   Double_t        Piminus_ProbNNmu;
   Double_t        Piminus_ProbNNghost;
   Bool_t          Piminus_hasMuon;
   Bool_t          Piminus_isMuon;
   Bool_t          Piminus_hasRich;
   Bool_t          Piminus_hasCalo;
   Bool_t          Piminus_L0Global_Dec;
   Bool_t          Piminus_L0Global_TIS;
   Bool_t          Piminus_L0Global_TOS;
   Bool_t          Piminus_Hlt1Global_Dec;
   Bool_t          Piminus_Hlt1Global_TIS;
   Bool_t          Piminus_Hlt1Global_TOS;
   Bool_t          Piminus_Hlt1Phys_Dec;
   Bool_t          Piminus_Hlt1Phys_TIS;
   Bool_t          Piminus_Hlt1Phys_TOS;
   Bool_t          Piminus_Hlt2Global_Dec;
   Bool_t          Piminus_Hlt2Global_TIS;
   Bool_t          Piminus_Hlt2Global_TOS;
   Bool_t          Piminus_Hlt2Phys_Dec;
   Bool_t          Piminus_Hlt2Phys_TIS;
   Bool_t          Piminus_Hlt2Phys_TOS;
   Bool_t          Piminus_StrippingGlobal_Dec;
   Bool_t          Piminus_StrippingGlobal_TIS;
   Bool_t          Piminus_StrippingGlobal_TOS;
   Bool_t          Piminus_L0HadronDecision_Dec;
   Bool_t          Piminus_L0HadronDecision_TIS;
   Bool_t          Piminus_L0HadronDecision_TOS;
   Bool_t          Piminus_L0MuonDecision_Dec;
   Bool_t          Piminus_L0MuonDecision_TIS;
   Bool_t          Piminus_L0MuonDecision_TOS;
   Bool_t          Piminus_L0DiMuonDecision_Dec;
   Bool_t          Piminus_L0DiMuonDecision_TIS;
   Bool_t          Piminus_L0DiMuonDecision_TOS;
   Bool_t          Piminus_L0ElectronDecision_Dec;
   Bool_t          Piminus_L0ElectronDecision_TIS;
   Bool_t          Piminus_L0ElectronDecision_TOS;
   Bool_t          Piminus_L0PhotonDecision_Dec;
   Bool_t          Piminus_L0PhotonDecision_TIS;
   Bool_t          Piminus_L0PhotonDecision_TOS;
   Bool_t          Piminus_Hlt1SingleHadronDecision_Dec;
   Bool_t          Piminus_Hlt1SingleHadronDecision_TIS;
   Bool_t          Piminus_Hlt1SingleHadronDecision_TOS;
   Bool_t          Piminus_Hlt1MBNoBiasDecision_Dec;
   Bool_t          Piminus_Hlt1MBNoBiasDecision_TIS;
   Bool_t          Piminus_Hlt1MBNoBiasDecision_TOS;
   Bool_t          Piminus_Hlt1DiHadronDecision_Dec;
   Bool_t          Piminus_Hlt1DiHadronDecision_TIS;
   Bool_t          Piminus_Hlt1DiHadronDecision_TOS;
   Bool_t          Piminus_Hlt1L0AnyDecision_Dec;
   Bool_t          Piminus_Hlt1L0AnyDecision_TIS;
   Bool_t          Piminus_Hlt1L0AnyDecision_TOS;
   Bool_t          Piminus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Piminus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Piminus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Piminus_Hlt2TopoOSTF4BodyDecision_Dec;
   Bool_t          Piminus_Hlt2TopoOSTF4BodyDecision_TIS;
   Bool_t          Piminus_Hlt2TopoOSTF4BodyDecision_TOS;
   Bool_t          Piminus_Hlt2IncPhiDecision_Dec;
   Bool_t          Piminus_Hlt2IncPhiDecision_TIS;
   Bool_t          Piminus_Hlt2IncPhiDecision_TOS;
   Bool_t          Piminus_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Piminus_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Piminus_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Piminus_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Piminus_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Piminus_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Piminus_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Piminus_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Piminus_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Piminus_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Piminus_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Piminus_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Piminus_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Piminus_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Piminus_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Piminus_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Piminus_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Piminus_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Piminus_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          Piminus_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          Piminus_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          Piminus_Hlt2IncPhiSidebandsDecision_Dec;
   Bool_t          Piminus_Hlt2IncPhiSidebandsDecision_TIS;
   Bool_t          Piminus_Hlt2IncPhiSidebandsDecision_TOS;
   Bool_t          Piminus_Hlt2B2HHDecision_Dec;
   Bool_t          Piminus_Hlt2B2HHDecision_TIS;
   Bool_t          Piminus_Hlt2B2HHDecision_TOS;
   Int_t           Piminus_TRACK_Type;
   Int_t           Piminus_TRACK_Key;
   Double_t        Piminus_TRACK_CHI2NDOF;
   Double_t        Piminus_TRACK_PCHI2;
   Double_t        Piminus_TRACK_MatchCHI2;
   Double_t        Piminus_TRACK_GhostProb;
   Double_t        Piminus_TRACK_CloneDist;
   Double_t        Piminus_TRACK_Likelihood;
   Int_t           Piminus_NOPARTWITHINDCHI2WDW;
   Int_t           Piminus_NOPARTWITHINCHI2WDW;
   Double_t        Piminus_SMALLESTCHI2;
   Double_t        Piminus_SMALLESTDELTACHI2;
   Double_t        Kplus_CosTheta;
   Double_t        Kplus_OWNPV_X;
   Double_t        Kplus_OWNPV_Y;
   Double_t        Kplus_OWNPV_Z;
   Double_t        Kplus_OWNPV_XERR;
   Double_t        Kplus_OWNPV_YERR;
   Double_t        Kplus_OWNPV_ZERR;
   Double_t        Kplus_OWNPV_CHI2;
   Int_t           Kplus_OWNPV_NDOF;
   Float_t         Kplus_OWNPV_COV_[3][3];
   Double_t        Kplus_IP_OWNPV;
   Double_t        Kplus_IPCHI2_OWNPV;
   Double_t        Kplus_ORIVX_X;
   Double_t        Kplus_ORIVX_Y;
   Double_t        Kplus_ORIVX_Z;
   Double_t        Kplus_ORIVX_XERR;
   Double_t        Kplus_ORIVX_YERR;
   Double_t        Kplus_ORIVX_ZERR;
   Double_t        Kplus_ORIVX_CHI2;
   Int_t           Kplus_ORIVX_NDOF;
   Float_t         Kplus_ORIVX_COV_[3][3];
   Double_t        Kplus_P;
   Double_t        Kplus_PT;
   Double_t        Kplus_PE;
   Double_t        Kplus_PX;
   Double_t        Kplus_PY;
   Double_t        Kplus_PZ;
   Double_t        Kplus_M;
   Double_t        Kplus_L0Calo_HCAL_realET;
   Double_t        Kplus_L0Calo_HCAL_xProjection;
   Double_t        Kplus_L0Calo_HCAL_yProjection;
   Int_t           Kplus_L0Calo_HCAL_region;
   Int_t           Kplus_TRUEID;
   Int_t           Kplus_MC_MOTHER_ID;
   Int_t           Kplus_MC_MOTHER_KEY;
   Int_t           Kplus_MC_GD_MOTHER_ID;
   Int_t           Kplus_MC_GD_MOTHER_KEY;
   Int_t           Kplus_MC_GD_GD_MOTHER_ID;
   Int_t           Kplus_MC_GD_GD_MOTHER_KEY;
   Double_t        Kplus_TRUEP_E;
   Double_t        Kplus_TRUEP_X;
   Double_t        Kplus_TRUEP_Y;
   Double_t        Kplus_TRUEP_Z;
   Double_t        Kplus_TRUEPT;
   Double_t        Kplus_TRUEORIGINVERTEX_X;
   Double_t        Kplus_TRUEORIGINVERTEX_Y;
   Double_t        Kplus_TRUEORIGINVERTEX_Z;
   Double_t        Kplus_TRUEENDVERTEX_X;
   Double_t        Kplus_TRUEENDVERTEX_Y;
   Double_t        Kplus_TRUEENDVERTEX_Z;
   Bool_t          Kplus_TRUEISSTABLE;
   Double_t        Kplus_TRUETAU;
   Double_t        Kplus_ThetaL;
   Double_t        Kplus_ThetaK;
   Double_t        Kplus_Phi;
   Double_t        Kplus_ThetaTr;
   Double_t        Kplus_PhiTr;
   Double_t        Kplus_ThetaVtr;
   Int_t           Kplus_ID;
   Double_t        Kplus_PIDe;
   Double_t        Kplus_PIDmu;
   Double_t        Kplus_PIDK;
   Double_t        Kplus_PIDp;
   Double_t        Kplus_ProbNNe;
   Double_t        Kplus_ProbNNk;
   Double_t        Kplus_ProbNNp;
   Double_t        Kplus_ProbNNpi;
   Double_t        Kplus_ProbNNmu;
   Double_t        Kplus_ProbNNghost;
   Bool_t          Kplus_hasMuon;
   Bool_t          Kplus_isMuon;
   Bool_t          Kplus_hasRich;
   Bool_t          Kplus_hasCalo;
   Bool_t          Kplus_L0Global_Dec;
   Bool_t          Kplus_L0Global_TIS;
   Bool_t          Kplus_L0Global_TOS;
   Bool_t          Kplus_Hlt1Global_Dec;
   Bool_t          Kplus_Hlt1Global_TIS;
   Bool_t          Kplus_Hlt1Global_TOS;
   Bool_t          Kplus_Hlt1Phys_Dec;
   Bool_t          Kplus_Hlt1Phys_TIS;
   Bool_t          Kplus_Hlt1Phys_TOS;
   Bool_t          Kplus_Hlt2Global_Dec;
   Bool_t          Kplus_Hlt2Global_TIS;
   Bool_t          Kplus_Hlt2Global_TOS;
   Bool_t          Kplus_Hlt2Phys_Dec;
   Bool_t          Kplus_Hlt2Phys_TIS;
   Bool_t          Kplus_Hlt2Phys_TOS;
   Bool_t          Kplus_StrippingGlobal_Dec;
   Bool_t          Kplus_StrippingGlobal_TIS;
   Bool_t          Kplus_StrippingGlobal_TOS;
   Bool_t          Kplus_L0HadronDecision_Dec;
   Bool_t          Kplus_L0HadronDecision_TIS;
   Bool_t          Kplus_L0HadronDecision_TOS;
   Bool_t          Kplus_L0MuonDecision_Dec;
   Bool_t          Kplus_L0MuonDecision_TIS;
   Bool_t          Kplus_L0MuonDecision_TOS;
   Bool_t          Kplus_L0DiMuonDecision_Dec;
   Bool_t          Kplus_L0DiMuonDecision_TIS;
   Bool_t          Kplus_L0DiMuonDecision_TOS;
   Bool_t          Kplus_L0ElectronDecision_Dec;
   Bool_t          Kplus_L0ElectronDecision_TIS;
   Bool_t          Kplus_L0ElectronDecision_TOS;
   Bool_t          Kplus_L0PhotonDecision_Dec;
   Bool_t          Kplus_L0PhotonDecision_TIS;
   Bool_t          Kplus_L0PhotonDecision_TOS;
   Bool_t          Kplus_Hlt1SingleHadronDecision_Dec;
   Bool_t          Kplus_Hlt1SingleHadronDecision_TIS;
   Bool_t          Kplus_Hlt1SingleHadronDecision_TOS;
   Bool_t          Kplus_Hlt1MBNoBiasDecision_Dec;
   Bool_t          Kplus_Hlt1MBNoBiasDecision_TIS;
   Bool_t          Kplus_Hlt1MBNoBiasDecision_TOS;
   Bool_t          Kplus_Hlt1DiHadronDecision_Dec;
   Bool_t          Kplus_Hlt1DiHadronDecision_TIS;
   Bool_t          Kplus_Hlt1DiHadronDecision_TOS;
   Bool_t          Kplus_Hlt1L0AnyDecision_Dec;
   Bool_t          Kplus_Hlt1L0AnyDecision_TIS;
   Bool_t          Kplus_Hlt1L0AnyDecision_TOS;
   Bool_t          Kplus_Hlt1TrackAllL0Decision_Dec;
   Bool_t          Kplus_Hlt1TrackAllL0Decision_TIS;
   Bool_t          Kplus_Hlt1TrackAllL0Decision_TOS;
   Bool_t          Kplus_Hlt2TopoOSTF4BodyDecision_Dec;
   Bool_t          Kplus_Hlt2TopoOSTF4BodyDecision_TIS;
   Bool_t          Kplus_Hlt2TopoOSTF4BodyDecision_TOS;
   Bool_t          Kplus_Hlt2IncPhiDecision_Dec;
   Bool_t          Kplus_Hlt2IncPhiDecision_TIS;
   Bool_t          Kplus_Hlt2IncPhiDecision_TOS;
   Bool_t          Kplus_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          Kplus_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          Kplus_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          Kplus_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          Kplus_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          Kplus_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          Kplus_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          Kplus_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          Kplus_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          Kplus_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          Kplus_Hlt2IncPhiSidebandsDecision_Dec;
   Bool_t          Kplus_Hlt2IncPhiSidebandsDecision_TIS;
   Bool_t          Kplus_Hlt2IncPhiSidebandsDecision_TOS;
   Bool_t          Kplus_Hlt2B2HHDecision_Dec;
   Bool_t          Kplus_Hlt2B2HHDecision_TIS;
   Bool_t          Kplus_Hlt2B2HHDecision_TOS;
   Int_t           Kplus_TRACK_Type;
   Int_t           Kplus_TRACK_Key;
   Double_t        Kplus_TRACK_CHI2NDOF;
   Double_t        Kplus_TRACK_PCHI2;
   Double_t        Kplus_TRACK_MatchCHI2;
   Double_t        Kplus_TRACK_GhostProb;
   Double_t        Kplus_TRACK_CloneDist;
   Double_t        Kplus_TRACK_Likelihood;
   Int_t           Kplus_NOPARTWITHINDCHI2WDW;
   Int_t           Kplus_NOPARTWITHINCHI2WDW;
   Double_t        Kplus_SMALLESTCHI2;
   Double_t        Kplus_SMALLESTDELTACHI2;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLTTCK;
   ULong64_t       GpsTime;
   Short_t         Polarity;
   Int_t           nPV;
   Float_t         PVX[100];   //[nPV]
   Float_t         PVY[100];   //[nPV]
   Float_t         PVZ[100];   //[nPV]
   Float_t         PVXERR[100];   //[nPV]
   Float_t         PVYERR[100];   //[nPV]
   Float_t         PVZERR[100];   //[nPV]
   Float_t         PVCHI2[100];   //[nPV]
   Float_t         PVNDOF[100];   //[nPV]
   Float_t         PVNTRACKS[100];   //[nPV]
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nLongTracks;
   Int_t           nDownstreamTracks;
   Int_t           nUpstreamTracks;
   Int_t           nVeloTracks;
   Int_t           nTTracks;
   Int_t           nBackTracks;
   Int_t           nRich1Hits;
   Int_t           nRich2Hits;
   Int_t           nVeloClusters;
   Int_t           nITClusters;
   Int_t           nTTClusters;
   Int_t           nOTClusters;
   Int_t           nSPDHits;
   Int_t           nMuonCoordsS0;
   Int_t           nMuonCoordsS1;
   Int_t           nMuonCoordsS2;
   Int_t           nMuonCoordsS3;
   Int_t           nMuonCoordsS4;
   Int_t           nMuonTracks;
   Int_t           L0Global;
   UInt_t          Hlt1Global;
   UInt_t          Hlt2Global;
   Int_t           L0HadronDecision;
   Int_t           L0MuonDecision;
   Int_t           L0DiMuonDecision;
   Int_t           L0ElectronDecision;
   Int_t           L0PhotonDecision;
   UInt_t          L0nSelections;
   Int_t           Hlt1SingleHadronDecision;
   Int_t           Hlt1MBNoBiasDecision;
   Int_t           Hlt1DiHadronDecision;
   Int_t           Hlt1L0AnyDecision;
   Int_t           Hlt1TrackAllL0Decision;
   UInt_t          Hlt1nSelections;
   Int_t           Hlt2TopoOSTF4BodyDecision;
   Int_t           Hlt2IncPhiDecision;
   Int_t           Hlt2Topo4BodySimpleDecision;
   Int_t           Hlt2Topo3BodySimpleDecision;
   Int_t           Hlt2Topo3BodyBBDTDecision;
   Int_t           Hlt2Topo2BodySimpleDecision;
   Int_t           Hlt2Topo2BodyBBDTDecision;
   Int_t           Hlt2Topo4BodyBBDTDecision;
   Int_t           Hlt2TopoMu4BodyBBDTDecision;
   Int_t           Hlt2IncPhiSidebandsDecision;
   Int_t           Hlt2B2HHDecision;
   UInt_t          Hlt2nSelections;
   Int_t           MaxRoutingBits;
   Float_t         RoutingBits[64];   //[MaxRoutingBits]

   // List of branches
   TBranch        *b_B_s0_ENDVERTEX_X;   //!
   TBranch        *b_B_s0_ENDVERTEX_Y;   //!
   TBranch        *b_B_s0_ENDVERTEX_Z;   //!
   TBranch        *b_B_s0_ENDVERTEX_XERR;   //!
   TBranch        *b_B_s0_ENDVERTEX_YERR;   //!
   TBranch        *b_B_s0_ENDVERTEX_ZERR;   //!
   TBranch        *b_B_s0_ENDVERTEX_CHI2;   //!
   TBranch        *b_B_s0_ENDVERTEX_NDOF;   //!
   TBranch        *b_B_s0_ENDVERTEX_COV_;   //!
   TBranch        *b_B_s0_OWNPV_X;   //!
   TBranch        *b_B_s0_OWNPV_Y;   //!
   TBranch        *b_B_s0_OWNPV_Z;   //!
   TBranch        *b_B_s0_OWNPV_XERR;   //!
   TBranch        *b_B_s0_OWNPV_YERR;   //!
   TBranch        *b_B_s0_OWNPV_ZERR;   //!
   TBranch        *b_B_s0_OWNPV_CHI2;   //!
   TBranch        *b_B_s0_OWNPV_NDOF;   //!
   TBranch        *b_B_s0_OWNPV_COV_;   //!
   TBranch        *b_B_s0_IP_OWNPV;   //!
   TBranch        *b_B_s0_IPCHI2_OWNPV;   //!
   TBranch        *b_B_s0_FD_OWNPV;   //!
   TBranch        *b_B_s0_FDCHI2_OWNPV;   //!
   TBranch        *b_B_s0_DIRA_OWNPV;   //!
   TBranch        *b_B_s0_P;   //!
   TBranch        *b_B_s0_PT;   //!
   TBranch        *b_B_s0_PE;   //!
   TBranch        *b_B_s0_PX;   //!
   TBranch        *b_B_s0_PY;   //!
   TBranch        *b_B_s0_PZ;   //!
   TBranch        *b_B_s0_MM;   //!
   TBranch        *b_B_s0_MMERR;   //!
   TBranch        *b_B_s0_M;   //!
   TBranch        *b_B_s0_BKGCAT;   //!
   TBranch        *b_B_s0_TRUEID;   //!
   TBranch        *b_B_s0_MC_MOTHER_ID;   //!
   TBranch        *b_B_s0_MC_MOTHER_KEY;   //!
   TBranch        *b_B_s0_MC_GD_MOTHER_ID;   //!
   TBranch        *b_B_s0_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_B_s0_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_B_s0_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_B_s0_TRUEP_E;   //!
   TBranch        *b_B_s0_TRUEP_X;   //!
   TBranch        *b_B_s0_TRUEP_Y;   //!
   TBranch        *b_B_s0_TRUEP_Z;   //!
   TBranch        *b_B_s0_TRUEPT;   //!
   TBranch        *b_B_s0_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_B_s0_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_B_s0_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_B_s0_TRUEENDVERTEX_X;   //!
   TBranch        *b_B_s0_TRUEENDVERTEX_Y;   //!
   TBranch        *b_B_s0_TRUEENDVERTEX_Z;   //!
   TBranch        *b_B_s0_TRUEISSTABLE;   //!
   TBranch        *b_B_s0_TRUETAU;   //!
   TBranch        *b_B_s0_ThetaL;   //!
   TBranch        *b_B_s0_ThetaK;   //!
   TBranch        *b_B_s0_Phi;   //!
   TBranch        *b_B_s0_ThetaTr;   //!
   TBranch        *b_B_s0_PhiTr;   //!
   TBranch        *b_B_s0_ThetaVtr;   //!
   TBranch        *b_B_s0_ID;   //!
   TBranch        *b_B_s0_TAU;   //!
   TBranch        *b_B_s0_TAUERR;   //!
   TBranch        *b_B_s0_TAUCHI2;   //!
   TBranch        *b_B_s0_L0Global_Dec;   //!
   TBranch        *b_B_s0_L0Global_TIS;   //!
   TBranch        *b_B_s0_L0Global_TOS;   //!
   TBranch        *b_B_s0_Hlt1Global_Dec;   //!
   TBranch        *b_B_s0_Hlt1Global_TIS;   //!
   TBranch        *b_B_s0_Hlt1Global_TOS;   //!
   TBranch        *b_B_s0_Hlt1Phys_Dec;   //!
   TBranch        *b_B_s0_Hlt1Phys_TIS;   //!
   TBranch        *b_B_s0_Hlt1Phys_TOS;   //!
   TBranch        *b_B_s0_Hlt2Global_Dec;   //!
   TBranch        *b_B_s0_Hlt2Global_TIS;   //!
   TBranch        *b_B_s0_Hlt2Global_TOS;   //!
   TBranch        *b_B_s0_Hlt2Phys_Dec;   //!
   TBranch        *b_B_s0_Hlt2Phys_TIS;   //!
   TBranch        *b_B_s0_Hlt2Phys_TOS;   //!
   TBranch        *b_B_s0_StrippingGlobal_Dec;   //!
   TBranch        *b_B_s0_StrippingGlobal_TIS;   //!
   TBranch        *b_B_s0_StrippingGlobal_TOS;   //!
   TBranch        *b_B_s0_L0HadronDecision_Dec;   //!
   TBranch        *b_B_s0_L0HadronDecision_TIS;   //!
   TBranch        *b_B_s0_L0HadronDecision_TOS;   //!
   TBranch        *b_B_s0_L0MuonDecision_Dec;   //!
   TBranch        *b_B_s0_L0MuonDecision_TIS;   //!
   TBranch        *b_B_s0_L0MuonDecision_TOS;   //!
   TBranch        *b_B_s0_L0DiMuonDecision_Dec;   //!
   TBranch        *b_B_s0_L0DiMuonDecision_TIS;   //!
   TBranch        *b_B_s0_L0DiMuonDecision_TOS;   //!
   TBranch        *b_B_s0_L0ElectronDecision_Dec;   //!
   TBranch        *b_B_s0_L0ElectronDecision_TIS;   //!
   TBranch        *b_B_s0_L0ElectronDecision_TOS;   //!
   TBranch        *b_B_s0_L0PhotonDecision_Dec;   //!
   TBranch        *b_B_s0_L0PhotonDecision_TIS;   //!
   TBranch        *b_B_s0_L0PhotonDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt1SingleHadronDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt1SingleHadronDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt1SingleHadronDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt1MBNoBiasDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt1MBNoBiasDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt1MBNoBiasDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt1DiHadronDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt1DiHadronDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt1DiHadronDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_B_s0_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_B_s0_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_B_s0_Hlt2TopoOSTF4BodyDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2TopoOSTF4BodyDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2TopoOSTF4BodyDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2IncPhiDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2IncPhiDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2IncPhiDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2IncPhiSidebandsDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2IncPhiSidebandsDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2IncPhiSidebandsDecision_TOS;   //!
   TBranch        *b_B_s0_Hlt2B2HHDecision_Dec;   //!
   TBranch        *b_B_s0_Hlt2B2HHDecision_TIS;   //!
   TBranch        *b_B_s0_Hlt2B2HHDecision_TOS;   //!
   TBranch        *b_B_s0_TAGDECISION;   //!
   TBranch        *b_B_s0_TAGCAT;   //!
   TBranch        *b_B_s0_TAGOMEGA;   //!
   TBranch        *b_B_s0_TAGDECISION_OS;   //!
   TBranch        *b_B_s0_TAGCAT_OS;   //!
   TBranch        *b_B_s0_TAGOMEGA_OS;   //!
   TBranch        *b_B_s0_TAGGER;   //!
   TBranch        *b_B_s0_NOPARTWITHINDCHI2WDW;   //!
   TBranch        *b_B_s0_NOPARTWITHINCHI2WDW;   //!
   TBranch        *b_B_s0_SMALLESTCHI2;   //!
   TBranch        *b_B_s0_SMALLESTDELTACHI2;   //!
   TBranch        *b_Kstb_CosTheta;   //!
   TBranch        *b_Kstb_ENDVERTEX_X;   //!
   TBranch        *b_Kstb_ENDVERTEX_Y;   //!
   TBranch        *b_Kstb_ENDVERTEX_Z;   //!
   TBranch        *b_Kstb_ENDVERTEX_XERR;   //!
   TBranch        *b_Kstb_ENDVERTEX_YERR;   //!
   TBranch        *b_Kstb_ENDVERTEX_ZERR;   //!
   TBranch        *b_Kstb_ENDVERTEX_CHI2;   //!
   TBranch        *b_Kstb_ENDVERTEX_NDOF;   //!
   TBranch        *b_Kstb_ENDVERTEX_COV_;   //!
   TBranch        *b_Kstb_OWNPV_X;   //!
   TBranch        *b_Kstb_OWNPV_Y;   //!
   TBranch        *b_Kstb_OWNPV_Z;   //!
   TBranch        *b_Kstb_OWNPV_XERR;   //!
   TBranch        *b_Kstb_OWNPV_YERR;   //!
   TBranch        *b_Kstb_OWNPV_ZERR;   //!
   TBranch        *b_Kstb_OWNPV_CHI2;   //!
   TBranch        *b_Kstb_OWNPV_NDOF;   //!
   TBranch        *b_Kstb_OWNPV_COV_;   //!
   TBranch        *b_Kstb_IP_OWNPV;   //!
   TBranch        *b_Kstb_IPCHI2_OWNPV;   //!
   TBranch        *b_Kstb_FD_OWNPV;   //!
   TBranch        *b_Kstb_FDCHI2_OWNPV;   //!
   TBranch        *b_Kstb_DIRA_OWNPV;   //!
   TBranch        *b_Kstb_ORIVX_X;   //!
   TBranch        *b_Kstb_ORIVX_Y;   //!
   TBranch        *b_Kstb_ORIVX_Z;   //!
   TBranch        *b_Kstb_ORIVX_XERR;   //!
   TBranch        *b_Kstb_ORIVX_YERR;   //!
   TBranch        *b_Kstb_ORIVX_ZERR;   //!
   TBranch        *b_Kstb_ORIVX_CHI2;   //!
   TBranch        *b_Kstb_ORIVX_NDOF;   //!
   TBranch        *b_Kstb_ORIVX_COV_;   //!
   TBranch        *b_Kstb_FD_ORIVX;   //!
   TBranch        *b_Kstb_FDCHI2_ORIVX;   //!
   TBranch        *b_Kstb_DIRA_ORIVX;   //!
   TBranch        *b_Kstb_P;   //!
   TBranch        *b_Kstb_PT;   //!
   TBranch        *b_Kstb_PE;   //!
   TBranch        *b_Kstb_PX;   //!
   TBranch        *b_Kstb_PY;   //!
   TBranch        *b_Kstb_PZ;   //!
   TBranch        *b_Kstb_MM;   //!
   TBranch        *b_Kstb_MMERR;   //!
   TBranch        *b_Kstb_M;   //!
   TBranch        *b_Kstb_BKGCAT;   //!
   TBranch        *b_Kstb_TRUEID;   //!
   TBranch        *b_Kstb_MC_MOTHER_ID;   //!
   TBranch        *b_Kstb_MC_MOTHER_KEY;   //!
   TBranch        *b_Kstb_MC_GD_MOTHER_ID;   //!
   TBranch        *b_Kstb_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_Kstb_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_Kstb_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_Kstb_TRUEP_E;   //!
   TBranch        *b_Kstb_TRUEP_X;   //!
   TBranch        *b_Kstb_TRUEP_Y;   //!
   TBranch        *b_Kstb_TRUEP_Z;   //!
   TBranch        *b_Kstb_TRUEPT;   //!
   TBranch        *b_Kstb_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_Kstb_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_Kstb_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_Kstb_TRUEENDVERTEX_X;   //!
   TBranch        *b_Kstb_TRUEENDVERTEX_Y;   //!
   TBranch        *b_Kstb_TRUEENDVERTEX_Z;   //!
   TBranch        *b_Kstb_TRUEISSTABLE;   //!
   TBranch        *b_Kstb_TRUETAU;   //!
   TBranch        *b_Kstb_ThetaL;   //!
   TBranch        *b_Kstb_ThetaK;   //!
   TBranch        *b_Kstb_Phi;   //!
   TBranch        *b_Kstb_ThetaTr;   //!
   TBranch        *b_Kstb_PhiTr;   //!
   TBranch        *b_Kstb_ThetaVtr;   //!
   TBranch        *b_Kstb_ID;   //!
   TBranch        *b_Kstb_TAU;   //!
   TBranch        *b_Kstb_TAUERR;   //!
   TBranch        *b_Kstb_TAUCHI2;   //!
   TBranch        *b_Kstb_L0Global_Dec;   //!
   TBranch        *b_Kstb_L0Global_TIS;   //!
   TBranch        *b_Kstb_L0Global_TOS;   //!
   TBranch        *b_Kstb_Hlt1Global_Dec;   //!
   TBranch        *b_Kstb_Hlt1Global_TIS;   //!
   TBranch        *b_Kstb_Hlt1Global_TOS;   //!
   TBranch        *b_Kstb_Hlt1Phys_Dec;   //!
   TBranch        *b_Kstb_Hlt1Phys_TIS;   //!
   TBranch        *b_Kstb_Hlt1Phys_TOS;   //!
   TBranch        *b_Kstb_Hlt2Global_Dec;   //!
   TBranch        *b_Kstb_Hlt2Global_TIS;   //!
   TBranch        *b_Kstb_Hlt2Global_TOS;   //!
   TBranch        *b_Kstb_Hlt2Phys_Dec;   //!
   TBranch        *b_Kstb_Hlt2Phys_TIS;   //!
   TBranch        *b_Kstb_Hlt2Phys_TOS;   //!
   TBranch        *b_Kstb_StrippingGlobal_Dec;   //!
   TBranch        *b_Kstb_StrippingGlobal_TIS;   //!
   TBranch        *b_Kstb_StrippingGlobal_TOS;   //!
   TBranch        *b_Kstb_L0HadronDecision_Dec;   //!
   TBranch        *b_Kstb_L0HadronDecision_TIS;   //!
   TBranch        *b_Kstb_L0HadronDecision_TOS;   //!
   TBranch        *b_Kstb_L0MuonDecision_Dec;   //!
   TBranch        *b_Kstb_L0MuonDecision_TIS;   //!
   TBranch        *b_Kstb_L0MuonDecision_TOS;   //!
   TBranch        *b_Kstb_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Kstb_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Kstb_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Kstb_L0ElectronDecision_Dec;   //!
   TBranch        *b_Kstb_L0ElectronDecision_TIS;   //!
   TBranch        *b_Kstb_L0ElectronDecision_TOS;   //!
   TBranch        *b_Kstb_L0PhotonDecision_Dec;   //!
   TBranch        *b_Kstb_L0PhotonDecision_TIS;   //!
   TBranch        *b_Kstb_L0PhotonDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt1SingleHadronDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt1SingleHadronDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt1SingleHadronDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt1MBNoBiasDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt1MBNoBiasDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt1MBNoBiasDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt1DiHadronDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt1DiHadronDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt1DiHadronDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Kstb_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Kstb_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Kstb_Hlt2TopoOSTF4BodyDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2TopoOSTF4BodyDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2TopoOSTF4BodyDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt2IncPhiDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2IncPhiDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2IncPhiDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt2IncPhiSidebandsDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2IncPhiSidebandsDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2IncPhiSidebandsDecision_TOS;   //!
   TBranch        *b_Kstb_Hlt2B2HHDecision_Dec;   //!
   TBranch        *b_Kstb_Hlt2B2HHDecision_TIS;   //!
   TBranch        *b_Kstb_Hlt2B2HHDecision_TOS;   //!
   TBranch        *b_Kstb_NOPARTWITHINDCHI2WDW;   //!
   TBranch        *b_Kstb_NOPARTWITHINCHI2WDW;   //!
   TBranch        *b_Kstb_SMALLESTCHI2;   //!
   TBranch        *b_Kstb_SMALLESTDELTACHI2;   //!
   TBranch        *b_Piplus_CosTheta;   //!
   TBranch        *b_Piplus_OWNPV_X;   //!
   TBranch        *b_Piplus_OWNPV_Y;   //!
   TBranch        *b_Piplus_OWNPV_Z;   //!
   TBranch        *b_Piplus_OWNPV_XERR;   //!
   TBranch        *b_Piplus_OWNPV_YERR;   //!
   TBranch        *b_Piplus_OWNPV_ZERR;   //!
   TBranch        *b_Piplus_OWNPV_CHI2;   //!
   TBranch        *b_Piplus_OWNPV_NDOF;   //!
   TBranch        *b_Piplus_OWNPV_COV_;   //!
   TBranch        *b_Piplus_IP_OWNPV;   //!
   TBranch        *b_Piplus_IPCHI2_OWNPV;   //!
   TBranch        *b_Piplus_ORIVX_X;   //!
   TBranch        *b_Piplus_ORIVX_Y;   //!
   TBranch        *b_Piplus_ORIVX_Z;   //!
   TBranch        *b_Piplus_ORIVX_XERR;   //!
   TBranch        *b_Piplus_ORIVX_YERR;   //!
   TBranch        *b_Piplus_ORIVX_ZERR;   //!
   TBranch        *b_Piplus_ORIVX_CHI2;   //!
   TBranch        *b_Piplus_ORIVX_NDOF;   //!
   TBranch        *b_Piplus_ORIVX_COV_;   //!
   TBranch        *b_Piplus_P;   //!
   TBranch        *b_Piplus_PT;   //!
   TBranch        *b_Piplus_PE;   //!
   TBranch        *b_Piplus_PX;   //!
   TBranch        *b_Piplus_PY;   //!
   TBranch        *b_Piplus_PZ;   //!
   TBranch        *b_Piplus_M;   //!
   TBranch        *b_Piplus_L0Calo_HCAL_realET;   //!
   TBranch        *b_Piplus_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_Piplus_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_Piplus_L0Calo_HCAL_region;   //!
   TBranch        *b_Piplus_TRUEID;   //!
   TBranch        *b_Piplus_MC_MOTHER_ID;   //!
   TBranch        *b_Piplus_MC_MOTHER_KEY;   //!
   TBranch        *b_Piplus_MC_GD_MOTHER_ID;   //!
   TBranch        *b_Piplus_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_Piplus_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_Piplus_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_Piplus_TRUEP_E;   //!
   TBranch        *b_Piplus_TRUEP_X;   //!
   TBranch        *b_Piplus_TRUEP_Y;   //!
   TBranch        *b_Piplus_TRUEP_Z;   //!
   TBranch        *b_Piplus_TRUEPT;   //!
   TBranch        *b_Piplus_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_Piplus_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_Piplus_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_Piplus_TRUEENDVERTEX_X;   //!
   TBranch        *b_Piplus_TRUEENDVERTEX_Y;   //!
   TBranch        *b_Piplus_TRUEENDVERTEX_Z;   //!
   TBranch        *b_Piplus_TRUEISSTABLE;   //!
   TBranch        *b_Piplus_TRUETAU;   //!
   TBranch        *b_Piplus_ThetaL;   //!
   TBranch        *b_Piplus_ThetaK;   //!
   TBranch        *b_Piplus_Phi;   //!
   TBranch        *b_Piplus_ThetaTr;   //!
   TBranch        *b_Piplus_PhiTr;   //!
   TBranch        *b_Piplus_ThetaVtr;   //!
   TBranch        *b_Piplus_ID;   //!
   TBranch        *b_Piplus_PIDe;   //!
   TBranch        *b_Piplus_PIDmu;   //!
   TBranch        *b_Piplus_PIDK;   //!
   TBranch        *b_Piplus_PIDp;   //!
   TBranch        *b_Piplus_ProbNNe;   //!
   TBranch        *b_Piplus_ProbNNk;   //!
   TBranch        *b_Piplus_ProbNNp;   //!
   TBranch        *b_Piplus_ProbNNpi;   //!
   TBranch        *b_Piplus_ProbNNmu;   //!
   TBranch        *b_Piplus_ProbNNghost;   //!
   TBranch        *b_Piplus_hasMuon;   //!
   TBranch        *b_Piplus_isMuon;   //!
   TBranch        *b_Piplus_hasRich;   //!
   TBranch        *b_Piplus_hasCalo;   //!
   TBranch        *b_Piplus_L0Global_Dec;   //!
   TBranch        *b_Piplus_L0Global_TIS;   //!
   TBranch        *b_Piplus_L0Global_TOS;   //!
   TBranch        *b_Piplus_Hlt1Global_Dec;   //!
   TBranch        *b_Piplus_Hlt1Global_TIS;   //!
   TBranch        *b_Piplus_Hlt1Global_TOS;   //!
   TBranch        *b_Piplus_Hlt1Phys_Dec;   //!
   TBranch        *b_Piplus_Hlt1Phys_TIS;   //!
   TBranch        *b_Piplus_Hlt1Phys_TOS;   //!
   TBranch        *b_Piplus_Hlt2Global_Dec;   //!
   TBranch        *b_Piplus_Hlt2Global_TIS;   //!
   TBranch        *b_Piplus_Hlt2Global_TOS;   //!
   TBranch        *b_Piplus_Hlt2Phys_Dec;   //!
   TBranch        *b_Piplus_Hlt2Phys_TIS;   //!
   TBranch        *b_Piplus_Hlt2Phys_TOS;   //!
   TBranch        *b_Piplus_StrippingGlobal_Dec;   //!
   TBranch        *b_Piplus_StrippingGlobal_TIS;   //!
   TBranch        *b_Piplus_StrippingGlobal_TOS;   //!
   TBranch        *b_Piplus_L0HadronDecision_Dec;   //!
   TBranch        *b_Piplus_L0HadronDecision_TIS;   //!
   TBranch        *b_Piplus_L0HadronDecision_TOS;   //!
   TBranch        *b_Piplus_L0MuonDecision_Dec;   //!
   TBranch        *b_Piplus_L0MuonDecision_TIS;   //!
   TBranch        *b_Piplus_L0MuonDecision_TOS;   //!
   TBranch        *b_Piplus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Piplus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Piplus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Piplus_L0ElectronDecision_Dec;   //!
   TBranch        *b_Piplus_L0ElectronDecision_TIS;   //!
   TBranch        *b_Piplus_L0ElectronDecision_TOS;   //!
   TBranch        *b_Piplus_L0PhotonDecision_Dec;   //!
   TBranch        *b_Piplus_L0PhotonDecision_TIS;   //!
   TBranch        *b_Piplus_L0PhotonDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt1SingleHadronDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt1SingleHadronDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt1SingleHadronDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt1MBNoBiasDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt1MBNoBiasDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt1MBNoBiasDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt1DiHadronDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt1DiHadronDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt1DiHadronDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Piplus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Piplus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Piplus_Hlt2TopoOSTF4BodyDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2TopoOSTF4BodyDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2TopoOSTF4BodyDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt2IncPhiDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2IncPhiDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2IncPhiDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt2IncPhiSidebandsDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2IncPhiSidebandsDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2IncPhiSidebandsDecision_TOS;   //!
   TBranch        *b_Piplus_Hlt2B2HHDecision_Dec;   //!
   TBranch        *b_Piplus_Hlt2B2HHDecision_TIS;   //!
   TBranch        *b_Piplus_Hlt2B2HHDecision_TOS;   //!
   TBranch        *b_Piplus_TRACK_Type;   //!
   TBranch        *b_Piplus_TRACK_Key;   //!
   TBranch        *b_Piplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Piplus_TRACK_PCHI2;   //!
   TBranch        *b_Piplus_TRACK_MatchCHI2;   //!
   TBranch        *b_Piplus_TRACK_GhostProb;   //!
   TBranch        *b_Piplus_TRACK_CloneDist;   //!
   TBranch        *b_Piplus_TRACK_Likelihood;   //!
   TBranch        *b_Piplus_NOPARTWITHINDCHI2WDW;   //!
   TBranch        *b_Piplus_NOPARTWITHINCHI2WDW;   //!
   TBranch        *b_Piplus_SMALLESTCHI2;   //!
   TBranch        *b_Piplus_SMALLESTDELTACHI2;   //!
   TBranch        *b_Kminus_CosTheta;   //!
   TBranch        *b_Kminus_OWNPV_X;   //!
   TBranch        *b_Kminus_OWNPV_Y;   //!
   TBranch        *b_Kminus_OWNPV_Z;   //!
   TBranch        *b_Kminus_OWNPV_XERR;   //!
   TBranch        *b_Kminus_OWNPV_YERR;   //!
   TBranch        *b_Kminus_OWNPV_ZERR;   //!
   TBranch        *b_Kminus_OWNPV_CHI2;   //!
   TBranch        *b_Kminus_OWNPV_NDOF;   //!
   TBranch        *b_Kminus_OWNPV_COV_;   //!
   TBranch        *b_Kminus_IP_OWNPV;   //!
   TBranch        *b_Kminus_IPCHI2_OWNPV;   //!
   TBranch        *b_Kminus_ORIVX_X;   //!
   TBranch        *b_Kminus_ORIVX_Y;   //!
   TBranch        *b_Kminus_ORIVX_Z;   //!
   TBranch        *b_Kminus_ORIVX_XERR;   //!
   TBranch        *b_Kminus_ORIVX_YERR;   //!
   TBranch        *b_Kminus_ORIVX_ZERR;   //!
   TBranch        *b_Kminus_ORIVX_CHI2;   //!
   TBranch        *b_Kminus_ORIVX_NDOF;   //!
   TBranch        *b_Kminus_ORIVX_COV_;   //!
   TBranch        *b_Kminus_P;   //!
   TBranch        *b_Kminus_PT;   //!
   TBranch        *b_Kminus_PE;   //!
   TBranch        *b_Kminus_PX;   //!
   TBranch        *b_Kminus_PY;   //!
   TBranch        *b_Kminus_PZ;   //!
   TBranch        *b_Kminus_M;   //!
   TBranch        *b_Kminus_L0Calo_HCAL_realET;   //!
   TBranch        *b_Kminus_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_Kminus_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_Kminus_L0Calo_HCAL_region;   //!
   TBranch        *b_Kminus_TRUEID;   //!
   TBranch        *b_Kminus_MC_MOTHER_ID;   //!
   TBranch        *b_Kminus_MC_MOTHER_KEY;   //!
   TBranch        *b_Kminus_MC_GD_MOTHER_ID;   //!
   TBranch        *b_Kminus_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_Kminus_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_Kminus_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_Kminus_TRUEP_E;   //!
   TBranch        *b_Kminus_TRUEP_X;   //!
   TBranch        *b_Kminus_TRUEP_Y;   //!
   TBranch        *b_Kminus_TRUEP_Z;   //!
   TBranch        *b_Kminus_TRUEPT;   //!
   TBranch        *b_Kminus_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_Kminus_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_Kminus_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_Kminus_TRUEENDVERTEX_X;   //!
   TBranch        *b_Kminus_TRUEENDVERTEX_Y;   //!
   TBranch        *b_Kminus_TRUEENDVERTEX_Z;   //!
   TBranch        *b_Kminus_TRUEISSTABLE;   //!
   TBranch        *b_Kminus_TRUETAU;   //!
   TBranch        *b_Kminus_ThetaL;   //!
   TBranch        *b_Kminus_ThetaK;   //!
   TBranch        *b_Kminus_Phi;   //!
   TBranch        *b_Kminus_ThetaTr;   //!
   TBranch        *b_Kminus_PhiTr;   //!
   TBranch        *b_Kminus_ThetaVtr;   //!
   TBranch        *b_Kminus_ID;   //!
   TBranch        *b_Kminus_PIDe;   //!
   TBranch        *b_Kminus_PIDmu;   //!
   TBranch        *b_Kminus_PIDK;   //!
   TBranch        *b_Kminus_PIDp;   //!
   TBranch        *b_Kminus_ProbNNe;   //!
   TBranch        *b_Kminus_ProbNNk;   //!
   TBranch        *b_Kminus_ProbNNp;   //!
   TBranch        *b_Kminus_ProbNNpi;   //!
   TBranch        *b_Kminus_ProbNNmu;   //!
   TBranch        *b_Kminus_ProbNNghost;   //!
   TBranch        *b_Kminus_hasMuon;   //!
   TBranch        *b_Kminus_isMuon;   //!
   TBranch        *b_Kminus_hasRich;   //!
   TBranch        *b_Kminus_hasCalo;   //!
   TBranch        *b_Kminus_L0Global_Dec;   //!
   TBranch        *b_Kminus_L0Global_TIS;   //!
   TBranch        *b_Kminus_L0Global_TOS;   //!
   TBranch        *b_Kminus_Hlt1Global_Dec;   //!
   TBranch        *b_Kminus_Hlt1Global_TIS;   //!
   TBranch        *b_Kminus_Hlt1Global_TOS;   //!
   TBranch        *b_Kminus_Hlt1Phys_Dec;   //!
   TBranch        *b_Kminus_Hlt1Phys_TIS;   //!
   TBranch        *b_Kminus_Hlt1Phys_TOS;   //!
   TBranch        *b_Kminus_Hlt2Global_Dec;   //!
   TBranch        *b_Kminus_Hlt2Global_TIS;   //!
   TBranch        *b_Kminus_Hlt2Global_TOS;   //!
   TBranch        *b_Kminus_Hlt2Phys_Dec;   //!
   TBranch        *b_Kminus_Hlt2Phys_TIS;   //!
   TBranch        *b_Kminus_Hlt2Phys_TOS;   //!
   TBranch        *b_Kminus_StrippingGlobal_Dec;   //!
   TBranch        *b_Kminus_StrippingGlobal_TIS;   //!
   TBranch        *b_Kminus_StrippingGlobal_TOS;   //!
   TBranch        *b_Kminus_L0HadronDecision_Dec;   //!
   TBranch        *b_Kminus_L0HadronDecision_TIS;   //!
   TBranch        *b_Kminus_L0HadronDecision_TOS;   //!
   TBranch        *b_Kminus_L0MuonDecision_Dec;   //!
   TBranch        *b_Kminus_L0MuonDecision_TIS;   //!
   TBranch        *b_Kminus_L0MuonDecision_TOS;   //!
   TBranch        *b_Kminus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Kminus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Kminus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Kminus_L0ElectronDecision_Dec;   //!
   TBranch        *b_Kminus_L0ElectronDecision_TIS;   //!
   TBranch        *b_Kminus_L0ElectronDecision_TOS;   //!
   TBranch        *b_Kminus_L0PhotonDecision_Dec;   //!
   TBranch        *b_Kminus_L0PhotonDecision_TIS;   //!
   TBranch        *b_Kminus_L0PhotonDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt1SingleHadronDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt1SingleHadronDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt1SingleHadronDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt1MBNoBiasDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt1MBNoBiasDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt1MBNoBiasDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt1DiHadronDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt1DiHadronDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt1DiHadronDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Kminus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Kminus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Kminus_Hlt2TopoOSTF4BodyDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2TopoOSTF4BodyDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2TopoOSTF4BodyDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt2IncPhiDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2IncPhiDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2IncPhiDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt2IncPhiSidebandsDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2IncPhiSidebandsDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2IncPhiSidebandsDecision_TOS;   //!
   TBranch        *b_Kminus_Hlt2B2HHDecision_Dec;   //!
   TBranch        *b_Kminus_Hlt2B2HHDecision_TIS;   //!
   TBranch        *b_Kminus_Hlt2B2HHDecision_TOS;   //!
   TBranch        *b_Kminus_TRACK_Type;   //!
   TBranch        *b_Kminus_TRACK_Key;   //!
   TBranch        *b_Kminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kminus_TRACK_PCHI2;   //!
   TBranch        *b_Kminus_TRACK_MatchCHI2;   //!
   TBranch        *b_Kminus_TRACK_GhostProb;   //!
   TBranch        *b_Kminus_TRACK_CloneDist;   //!
   TBranch        *b_Kminus_TRACK_Likelihood;   //!
   TBranch        *b_Kminus_NOPARTWITHINDCHI2WDW;   //!
   TBranch        *b_Kminus_NOPARTWITHINCHI2WDW;   //!
   TBranch        *b_Kminus_SMALLESTCHI2;   //!
   TBranch        *b_Kminus_SMALLESTDELTACHI2;   //!
   TBranch        *b_Kst_CosTheta;   //!
   TBranch        *b_Kst_ENDVERTEX_X;   //!
   TBranch        *b_Kst_ENDVERTEX_Y;   //!
   TBranch        *b_Kst_ENDVERTEX_Z;   //!
   TBranch        *b_Kst_ENDVERTEX_XERR;   //!
   TBranch        *b_Kst_ENDVERTEX_YERR;   //!
   TBranch        *b_Kst_ENDVERTEX_ZERR;   //!
   TBranch        *b_Kst_ENDVERTEX_CHI2;   //!
   TBranch        *b_Kst_ENDVERTEX_NDOF;   //!
   TBranch        *b_Kst_ENDVERTEX_COV_;   //!
   TBranch        *b_Kst_OWNPV_X;   //!
   TBranch        *b_Kst_OWNPV_Y;   //!
   TBranch        *b_Kst_OWNPV_Z;   //!
   TBranch        *b_Kst_OWNPV_XERR;   //!
   TBranch        *b_Kst_OWNPV_YERR;   //!
   TBranch        *b_Kst_OWNPV_ZERR;   //!
   TBranch        *b_Kst_OWNPV_CHI2;   //!
   TBranch        *b_Kst_OWNPV_NDOF;   //!
   TBranch        *b_Kst_OWNPV_COV_;   //!
   TBranch        *b_Kst_IP_OWNPV;   //!
   TBranch        *b_Kst_IPCHI2_OWNPV;   //!
   TBranch        *b_Kst_FD_OWNPV;   //!
   TBranch        *b_Kst_FDCHI2_OWNPV;   //!
   TBranch        *b_Kst_DIRA_OWNPV;   //!
   TBranch        *b_Kst_ORIVX_X;   //!
   TBranch        *b_Kst_ORIVX_Y;   //!
   TBranch        *b_Kst_ORIVX_Z;   //!
   TBranch        *b_Kst_ORIVX_XERR;   //!
   TBranch        *b_Kst_ORIVX_YERR;   //!
   TBranch        *b_Kst_ORIVX_ZERR;   //!
   TBranch        *b_Kst_ORIVX_CHI2;   //!
   TBranch        *b_Kst_ORIVX_NDOF;   //!
   TBranch        *b_Kst_ORIVX_COV_;   //!
   TBranch        *b_Kst_FD_ORIVX;   //!
   TBranch        *b_Kst_FDCHI2_ORIVX;   //!
   TBranch        *b_Kst_DIRA_ORIVX;   //!
   TBranch        *b_Kst_P;   //!
   TBranch        *b_Kst_PT;   //!
   TBranch        *b_Kst_PE;   //!
   TBranch        *b_Kst_PX;   //!
   TBranch        *b_Kst_PY;   //!
   TBranch        *b_Kst_PZ;   //!
   TBranch        *b_Kst_MM;   //!
   TBranch        *b_Kst_MMERR;   //!
   TBranch        *b_Kst_M;   //!
   TBranch        *b_Kst_BKGCAT;   //!
   TBranch        *b_Kst_TRUEID;   //!
   TBranch        *b_Kst_MC_MOTHER_ID;   //!
   TBranch        *b_Kst_MC_MOTHER_KEY;   //!
   TBranch        *b_Kst_MC_GD_MOTHER_ID;   //!
   TBranch        *b_Kst_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_Kst_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_Kst_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_Kst_TRUEP_E;   //!
   TBranch        *b_Kst_TRUEP_X;   //!
   TBranch        *b_Kst_TRUEP_Y;   //!
   TBranch        *b_Kst_TRUEP_Z;   //!
   TBranch        *b_Kst_TRUEPT;   //!
   TBranch        *b_Kst_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_Kst_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_Kst_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_Kst_TRUEENDVERTEX_X;   //!
   TBranch        *b_Kst_TRUEENDVERTEX_Y;   //!
   TBranch        *b_Kst_TRUEENDVERTEX_Z;   //!
   TBranch        *b_Kst_TRUEISSTABLE;   //!
   TBranch        *b_Kst_TRUETAU;   //!
   TBranch        *b_Kst_ThetaL;   //!
   TBranch        *b_Kst_ThetaK;   //!
   TBranch        *b_Kst_Phi;   //!
   TBranch        *b_Kst_ThetaTr;   //!
   TBranch        *b_Kst_PhiTr;   //!
   TBranch        *b_Kst_ThetaVtr;   //!
   TBranch        *b_Kst_ID;   //!
   TBranch        *b_Kst_TAU;   //!
   TBranch        *b_Kst_TAUERR;   //!
   TBranch        *b_Kst_TAUCHI2;   //!
   TBranch        *b_Kst_L0Global_Dec;   //!
   TBranch        *b_Kst_L0Global_TIS;   //!
   TBranch        *b_Kst_L0Global_TOS;   //!
   TBranch        *b_Kst_Hlt1Global_Dec;   //!
   TBranch        *b_Kst_Hlt1Global_TIS;   //!
   TBranch        *b_Kst_Hlt1Global_TOS;   //!
   TBranch        *b_Kst_Hlt1Phys_Dec;   //!
   TBranch        *b_Kst_Hlt1Phys_TIS;   //!
   TBranch        *b_Kst_Hlt1Phys_TOS;   //!
   TBranch        *b_Kst_Hlt2Global_Dec;   //!
   TBranch        *b_Kst_Hlt2Global_TIS;   //!
   TBranch        *b_Kst_Hlt2Global_TOS;   //!
   TBranch        *b_Kst_Hlt2Phys_Dec;   //!
   TBranch        *b_Kst_Hlt2Phys_TIS;   //!
   TBranch        *b_Kst_Hlt2Phys_TOS;   //!
   TBranch        *b_Kst_StrippingGlobal_Dec;   //!
   TBranch        *b_Kst_StrippingGlobal_TIS;   //!
   TBranch        *b_Kst_StrippingGlobal_TOS;   //!
   TBranch        *b_Kst_L0HadronDecision_Dec;   //!
   TBranch        *b_Kst_L0HadronDecision_TIS;   //!
   TBranch        *b_Kst_L0HadronDecision_TOS;   //!
   TBranch        *b_Kst_L0MuonDecision_Dec;   //!
   TBranch        *b_Kst_L0MuonDecision_TIS;   //!
   TBranch        *b_Kst_L0MuonDecision_TOS;   //!
   TBranch        *b_Kst_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Kst_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Kst_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Kst_L0ElectronDecision_Dec;   //!
   TBranch        *b_Kst_L0ElectronDecision_TIS;   //!
   TBranch        *b_Kst_L0ElectronDecision_TOS;   //!
   TBranch        *b_Kst_L0PhotonDecision_Dec;   //!
   TBranch        *b_Kst_L0PhotonDecision_TIS;   //!
   TBranch        *b_Kst_L0PhotonDecision_TOS;   //!
   TBranch        *b_Kst_Hlt1SingleHadronDecision_Dec;   //!
   TBranch        *b_Kst_Hlt1SingleHadronDecision_TIS;   //!
   TBranch        *b_Kst_Hlt1SingleHadronDecision_TOS;   //!
   TBranch        *b_Kst_Hlt1MBNoBiasDecision_Dec;   //!
   TBranch        *b_Kst_Hlt1MBNoBiasDecision_TIS;   //!
   TBranch        *b_Kst_Hlt1MBNoBiasDecision_TOS;   //!
   TBranch        *b_Kst_Hlt1DiHadronDecision_Dec;   //!
   TBranch        *b_Kst_Hlt1DiHadronDecision_TIS;   //!
   TBranch        *b_Kst_Hlt1DiHadronDecision_TOS;   //!
   TBranch        *b_Kst_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_Kst_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_Kst_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_Kst_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Kst_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Kst_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Kst_Hlt2TopoOSTF4BodyDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2TopoOSTF4BodyDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2TopoOSTF4BodyDecision_TOS;   //!
   TBranch        *b_Kst_Hlt2IncPhiDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2IncPhiDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2IncPhiDecision_TOS;   //!
   TBranch        *b_Kst_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Kst_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Kst_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kst_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Kst_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kst_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kst_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kst_Hlt2IncPhiSidebandsDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2IncPhiSidebandsDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2IncPhiSidebandsDecision_TOS;   //!
   TBranch        *b_Kst_Hlt2B2HHDecision_Dec;   //!
   TBranch        *b_Kst_Hlt2B2HHDecision_TIS;   //!
   TBranch        *b_Kst_Hlt2B2HHDecision_TOS;   //!
   TBranch        *b_Kst_NOPARTWITHINDCHI2WDW;   //!
   TBranch        *b_Kst_NOPARTWITHINCHI2WDW;   //!
   TBranch        *b_Kst_SMALLESTCHI2;   //!
   TBranch        *b_Kst_SMALLESTDELTACHI2;   //!
   TBranch        *b_Piminus_CosTheta;   //!
   TBranch        *b_Piminus_OWNPV_X;   //!
   TBranch        *b_Piminus_OWNPV_Y;   //!
   TBranch        *b_Piminus_OWNPV_Z;   //!
   TBranch        *b_Piminus_OWNPV_XERR;   //!
   TBranch        *b_Piminus_OWNPV_YERR;   //!
   TBranch        *b_Piminus_OWNPV_ZERR;   //!
   TBranch        *b_Piminus_OWNPV_CHI2;   //!
   TBranch        *b_Piminus_OWNPV_NDOF;   //!
   TBranch        *b_Piminus_OWNPV_COV_;   //!
   TBranch        *b_Piminus_IP_OWNPV;   //!
   TBranch        *b_Piminus_IPCHI2_OWNPV;   //!
   TBranch        *b_Piminus_ORIVX_X;   //!
   TBranch        *b_Piminus_ORIVX_Y;   //!
   TBranch        *b_Piminus_ORIVX_Z;   //!
   TBranch        *b_Piminus_ORIVX_XERR;   //!
   TBranch        *b_Piminus_ORIVX_YERR;   //!
   TBranch        *b_Piminus_ORIVX_ZERR;   //!
   TBranch        *b_Piminus_ORIVX_CHI2;   //!
   TBranch        *b_Piminus_ORIVX_NDOF;   //!
   TBranch        *b_Piminus_ORIVX_COV_;   //!
   TBranch        *b_Piminus_P;   //!
   TBranch        *b_Piminus_PT;   //!
   TBranch        *b_Piminus_PE;   //!
   TBranch        *b_Piminus_PX;   //!
   TBranch        *b_Piminus_PY;   //!
   TBranch        *b_Piminus_PZ;   //!
   TBranch        *b_Piminus_M;   //!
   TBranch        *b_Piminus_L0Calo_HCAL_realET;   //!
   TBranch        *b_Piminus_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_Piminus_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_Piminus_L0Calo_HCAL_region;   //!
   TBranch        *b_Piminus_TRUEID;   //!
   TBranch        *b_Piminus_MC_MOTHER_ID;   //!
   TBranch        *b_Piminus_MC_MOTHER_KEY;   //!
   TBranch        *b_Piminus_MC_GD_MOTHER_ID;   //!
   TBranch        *b_Piminus_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_Piminus_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_Piminus_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_Piminus_TRUEP_E;   //!
   TBranch        *b_Piminus_TRUEP_X;   //!
   TBranch        *b_Piminus_TRUEP_Y;   //!
   TBranch        *b_Piminus_TRUEP_Z;   //!
   TBranch        *b_Piminus_TRUEPT;   //!
   TBranch        *b_Piminus_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_Piminus_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_Piminus_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_Piminus_TRUEENDVERTEX_X;   //!
   TBranch        *b_Piminus_TRUEENDVERTEX_Y;   //!
   TBranch        *b_Piminus_TRUEENDVERTEX_Z;   //!
   TBranch        *b_Piminus_TRUEISSTABLE;   //!
   TBranch        *b_Piminus_TRUETAU;   //!
   TBranch        *b_Piminus_ThetaL;   //!
   TBranch        *b_Piminus_ThetaK;   //!
   TBranch        *b_Piminus_Phi;   //!
   TBranch        *b_Piminus_ThetaTr;   //!
   TBranch        *b_Piminus_PhiTr;   //!
   TBranch        *b_Piminus_ThetaVtr;   //!
   TBranch        *b_Piminus_ID;   //!
   TBranch        *b_Piminus_PIDe;   //!
   TBranch        *b_Piminus_PIDmu;   //!
   TBranch        *b_Piminus_PIDK;   //!
   TBranch        *b_Piminus_PIDp;   //!
   TBranch        *b_Piminus_ProbNNe;   //!
   TBranch        *b_Piminus_ProbNNk;   //!
   TBranch        *b_Piminus_ProbNNp;   //!
   TBranch        *b_Piminus_ProbNNpi;   //!
   TBranch        *b_Piminus_ProbNNmu;   //!
   TBranch        *b_Piminus_ProbNNghost;   //!
   TBranch        *b_Piminus_hasMuon;   //!
   TBranch        *b_Piminus_isMuon;   //!
   TBranch        *b_Piminus_hasRich;   //!
   TBranch        *b_Piminus_hasCalo;   //!
   TBranch        *b_Piminus_L0Global_Dec;   //!
   TBranch        *b_Piminus_L0Global_TIS;   //!
   TBranch        *b_Piminus_L0Global_TOS;   //!
   TBranch        *b_Piminus_Hlt1Global_Dec;   //!
   TBranch        *b_Piminus_Hlt1Global_TIS;   //!
   TBranch        *b_Piminus_Hlt1Global_TOS;   //!
   TBranch        *b_Piminus_Hlt1Phys_Dec;   //!
   TBranch        *b_Piminus_Hlt1Phys_TIS;   //!
   TBranch        *b_Piminus_Hlt1Phys_TOS;   //!
   TBranch        *b_Piminus_Hlt2Global_Dec;   //!
   TBranch        *b_Piminus_Hlt2Global_TIS;   //!
   TBranch        *b_Piminus_Hlt2Global_TOS;   //!
   TBranch        *b_Piminus_Hlt2Phys_Dec;   //!
   TBranch        *b_Piminus_Hlt2Phys_TIS;   //!
   TBranch        *b_Piminus_Hlt2Phys_TOS;   //!
   TBranch        *b_Piminus_StrippingGlobal_Dec;   //!
   TBranch        *b_Piminus_StrippingGlobal_TIS;   //!
   TBranch        *b_Piminus_StrippingGlobal_TOS;   //!
   TBranch        *b_Piminus_L0HadronDecision_Dec;   //!
   TBranch        *b_Piminus_L0HadronDecision_TIS;   //!
   TBranch        *b_Piminus_L0HadronDecision_TOS;   //!
   TBranch        *b_Piminus_L0MuonDecision_Dec;   //!
   TBranch        *b_Piminus_L0MuonDecision_TIS;   //!
   TBranch        *b_Piminus_L0MuonDecision_TOS;   //!
   TBranch        *b_Piminus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Piminus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Piminus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Piminus_L0ElectronDecision_Dec;   //!
   TBranch        *b_Piminus_L0ElectronDecision_TIS;   //!
   TBranch        *b_Piminus_L0ElectronDecision_TOS;   //!
   TBranch        *b_Piminus_L0PhotonDecision_Dec;   //!
   TBranch        *b_Piminus_L0PhotonDecision_TIS;   //!
   TBranch        *b_Piminus_L0PhotonDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt1SingleHadronDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt1SingleHadronDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt1SingleHadronDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt1MBNoBiasDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt1MBNoBiasDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt1MBNoBiasDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt1DiHadronDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt1DiHadronDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt1DiHadronDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Piminus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Piminus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Piminus_Hlt2TopoOSTF4BodyDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2TopoOSTF4BodyDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2TopoOSTF4BodyDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt2IncPhiDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2IncPhiDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2IncPhiDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt2IncPhiSidebandsDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2IncPhiSidebandsDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2IncPhiSidebandsDecision_TOS;   //!
   TBranch        *b_Piminus_Hlt2B2HHDecision_Dec;   //!
   TBranch        *b_Piminus_Hlt2B2HHDecision_TIS;   //!
   TBranch        *b_Piminus_Hlt2B2HHDecision_TOS;   //!
   TBranch        *b_Piminus_TRACK_Type;   //!
   TBranch        *b_Piminus_TRACK_Key;   //!
   TBranch        *b_Piminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Piminus_TRACK_PCHI2;   //!
   TBranch        *b_Piminus_TRACK_MatchCHI2;   //!
   TBranch        *b_Piminus_TRACK_GhostProb;   //!
   TBranch        *b_Piminus_TRACK_CloneDist;   //!
   TBranch        *b_Piminus_TRACK_Likelihood;   //!
   TBranch        *b_Piminus_NOPARTWITHINDCHI2WDW;   //!
   TBranch        *b_Piminus_NOPARTWITHINCHI2WDW;   //!
   TBranch        *b_Piminus_SMALLESTCHI2;   //!
   TBranch        *b_Piminus_SMALLESTDELTACHI2;   //!
   TBranch        *b_Kplus_CosTheta;   //!
   TBranch        *b_Kplus_OWNPV_X;   //!
   TBranch        *b_Kplus_OWNPV_Y;   //!
   TBranch        *b_Kplus_OWNPV_Z;   //!
   TBranch        *b_Kplus_OWNPV_XERR;   //!
   TBranch        *b_Kplus_OWNPV_YERR;   //!
   TBranch        *b_Kplus_OWNPV_ZERR;   //!
   TBranch        *b_Kplus_OWNPV_CHI2;   //!
   TBranch        *b_Kplus_OWNPV_NDOF;   //!
   TBranch        *b_Kplus_OWNPV_COV_;   //!
   TBranch        *b_Kplus_IP_OWNPV;   //!
   TBranch        *b_Kplus_IPCHI2_OWNPV;   //!
   TBranch        *b_Kplus_ORIVX_X;   //!
   TBranch        *b_Kplus_ORIVX_Y;   //!
   TBranch        *b_Kplus_ORIVX_Z;   //!
   TBranch        *b_Kplus_ORIVX_XERR;   //!
   TBranch        *b_Kplus_ORIVX_YERR;   //!
   TBranch        *b_Kplus_ORIVX_ZERR;   //!
   TBranch        *b_Kplus_ORIVX_CHI2;   //!
   TBranch        *b_Kplus_ORIVX_NDOF;   //!
   TBranch        *b_Kplus_ORIVX_COV_;   //!
   TBranch        *b_Kplus_P;   //!
   TBranch        *b_Kplus_PT;   //!
   TBranch        *b_Kplus_PE;   //!
   TBranch        *b_Kplus_PX;   //!
   TBranch        *b_Kplus_PY;   //!
   TBranch        *b_Kplus_PZ;   //!
   TBranch        *b_Kplus_M;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_realET;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_Kplus_L0Calo_HCAL_region;   //!
   TBranch        *b_Kplus_TRUEID;   //!
   TBranch        *b_Kplus_MC_MOTHER_ID;   //!
   TBranch        *b_Kplus_MC_MOTHER_KEY;   //!
   TBranch        *b_Kplus_MC_GD_MOTHER_ID;   //!
   TBranch        *b_Kplus_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_Kplus_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_Kplus_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_Kplus_TRUEP_E;   //!
   TBranch        *b_Kplus_TRUEP_X;   //!
   TBranch        *b_Kplus_TRUEP_Y;   //!
   TBranch        *b_Kplus_TRUEP_Z;   //!
   TBranch        *b_Kplus_TRUEPT;   //!
   TBranch        *b_Kplus_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_Kplus_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_Kplus_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_Kplus_TRUEENDVERTEX_X;   //!
   TBranch        *b_Kplus_TRUEENDVERTEX_Y;   //!
   TBranch        *b_Kplus_TRUEENDVERTEX_Z;   //!
   TBranch        *b_Kplus_TRUEISSTABLE;   //!
   TBranch        *b_Kplus_TRUETAU;   //!
   TBranch        *b_Kplus_ThetaL;   //!
   TBranch        *b_Kplus_ThetaK;   //!
   TBranch        *b_Kplus_Phi;   //!
   TBranch        *b_Kplus_ThetaTr;   //!
   TBranch        *b_Kplus_PhiTr;   //!
   TBranch        *b_Kplus_ThetaVtr;   //!
   TBranch        *b_Kplus_ID;   //!
   TBranch        *b_Kplus_PIDe;   //!
   TBranch        *b_Kplus_PIDmu;   //!
   TBranch        *b_Kplus_PIDK;   //!
   TBranch        *b_Kplus_PIDp;   //!
   TBranch        *b_Kplus_ProbNNe;   //!
   TBranch        *b_Kplus_ProbNNk;   //!
   TBranch        *b_Kplus_ProbNNp;   //!
   TBranch        *b_Kplus_ProbNNpi;   //!
   TBranch        *b_Kplus_ProbNNmu;   //!
   TBranch        *b_Kplus_ProbNNghost;   //!
   TBranch        *b_Kplus_hasMuon;   //!
   TBranch        *b_Kplus_isMuon;   //!
   TBranch        *b_Kplus_hasRich;   //!
   TBranch        *b_Kplus_hasCalo;   //!
   TBranch        *b_Kplus_L0Global_Dec;   //!
   TBranch        *b_Kplus_L0Global_TIS;   //!
   TBranch        *b_Kplus_L0Global_TOS;   //!
   TBranch        *b_Kplus_Hlt1Global_Dec;   //!
   TBranch        *b_Kplus_Hlt1Global_TIS;   //!
   TBranch        *b_Kplus_Hlt1Global_TOS;   //!
   TBranch        *b_Kplus_Hlt1Phys_Dec;   //!
   TBranch        *b_Kplus_Hlt1Phys_TIS;   //!
   TBranch        *b_Kplus_Hlt1Phys_TOS;   //!
   TBranch        *b_Kplus_Hlt2Global_Dec;   //!
   TBranch        *b_Kplus_Hlt2Global_TIS;   //!
   TBranch        *b_Kplus_Hlt2Global_TOS;   //!
   TBranch        *b_Kplus_Hlt2Phys_Dec;   //!
   TBranch        *b_Kplus_Hlt2Phys_TIS;   //!
   TBranch        *b_Kplus_Hlt2Phys_TOS;   //!
   TBranch        *b_Kplus_StrippingGlobal_Dec;   //!
   TBranch        *b_Kplus_StrippingGlobal_TIS;   //!
   TBranch        *b_Kplus_StrippingGlobal_TOS;   //!
   TBranch        *b_Kplus_L0HadronDecision_Dec;   //!
   TBranch        *b_Kplus_L0HadronDecision_TIS;   //!
   TBranch        *b_Kplus_L0HadronDecision_TOS;   //!
   TBranch        *b_Kplus_L0MuonDecision_Dec;   //!
   TBranch        *b_Kplus_L0MuonDecision_TIS;   //!
   TBranch        *b_Kplus_L0MuonDecision_TOS;   //!
   TBranch        *b_Kplus_L0DiMuonDecision_Dec;   //!
   TBranch        *b_Kplus_L0DiMuonDecision_TIS;   //!
   TBranch        *b_Kplus_L0DiMuonDecision_TOS;   //!
   TBranch        *b_Kplus_L0ElectronDecision_Dec;   //!
   TBranch        *b_Kplus_L0ElectronDecision_TIS;   //!
   TBranch        *b_Kplus_L0ElectronDecision_TOS;   //!
   TBranch        *b_Kplus_L0PhotonDecision_Dec;   //!
   TBranch        *b_Kplus_L0PhotonDecision_TIS;   //!
   TBranch        *b_Kplus_L0PhotonDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1SingleHadronDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1SingleHadronDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1SingleHadronDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1MBNoBiasDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1MBNoBiasDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1MBNoBiasDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1DiHadronDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1DiHadronDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1DiHadronDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_Kplus_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_Kplus_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_Kplus_Hlt2TopoOSTF4BodyDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2TopoOSTF4BodyDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2TopoOSTF4BodyDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2IncPhiDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2IncPhiDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2IncPhiDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2IncPhiSidebandsDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2IncPhiSidebandsDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2IncPhiSidebandsDecision_TOS;   //!
   TBranch        *b_Kplus_Hlt2B2HHDecision_Dec;   //!
   TBranch        *b_Kplus_Hlt2B2HHDecision_TIS;   //!
   TBranch        *b_Kplus_Hlt2B2HHDecision_TOS;   //!
   TBranch        *b_Kplus_TRACK_Type;   //!
   TBranch        *b_Kplus_TRACK_Key;   //!
   TBranch        *b_Kplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kplus_TRACK_PCHI2;   //!
   TBranch        *b_Kplus_TRACK_MatchCHI2;   //!
   TBranch        *b_Kplus_TRACK_GhostProb;   //!
   TBranch        *b_Kplus_TRACK_CloneDist;   //!
   TBranch        *b_Kplus_TRACK_Likelihood;   //!
   TBranch        *b_Kplus_NOPARTWITHINDCHI2WDW;   //!
   TBranch        *b_Kplus_NOPARTWITHINCHI2WDW;   //!
   TBranch        *b_Kplus_SMALLESTCHI2;   //!
   TBranch        *b_Kplus_SMALLESTDELTACHI2;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLTTCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_PVX;   //!
   TBranch        *b_PVY;   //!
   TBranch        *b_PVZ;   //!
   TBranch        *b_PVXERR;   //!
   TBranch        *b_PVYERR;   //!
   TBranch        *b_PVZERR;   //!
   TBranch        *b_PVCHI2;   //!
   TBranch        *b_PVNDOF;   //!
   TBranch        *b_PVNTRACKS;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nLongTracks;   //!
   TBranch        *b_nDownstreamTracks;   //!
   TBranch        *b_nUpstreamTracks;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTTracks;   //!
   TBranch        *b_nBackTracks;   //!
   TBranch        *b_nRich1Hits;   //!
   TBranch        *b_nRich2Hits;   //!
   TBranch        *b_nVeloClusters;   //!
   TBranch        *b_nITClusters;   //!
   TBranch        *b_nTTClusters;   //!
   TBranch        *b_nOTClusters;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_nMuonCoordsS0;   //!
   TBranch        *b_nMuonCoordsS1;   //!
   TBranch        *b_nMuonCoordsS2;   //!
   TBranch        *b_nMuonCoordsS3;   //!
   TBranch        *b_nMuonCoordsS4;   //!
   TBranch        *b_nMuonTracks;   //!
   TBranch        *b_L0Global;   //!
   TBranch        *b_Hlt1Global;   //!
   TBranch        *b_Hlt2Global;   //!
   TBranch        *b_L0HadronDecision;   //!
   TBranch        *b_L0MuonDecision;   //!
   TBranch        *b_L0DiMuonDecision;   //!
   TBranch        *b_L0ElectronDecision;   //!
   TBranch        *b_L0PhotonDecision;   //!
   TBranch        *b_L0nSelections;   //!
   TBranch        *b_Hlt1SingleHadronDecision;   //!
   TBranch        *b_Hlt1MBNoBiasDecision;   //!
   TBranch        *b_Hlt1DiHadronDecision;   //!
   TBranch        *b_Hlt1L0AnyDecision;   //!
   TBranch        *b_Hlt1TrackAllL0Decision;   //!
   TBranch        *b_Hlt1nSelections;   //!
   TBranch        *b_Hlt2TopoOSTF4BodyDecision;   //!
   TBranch        *b_Hlt2IncPhiDecision;   //!
   TBranch        *b_Hlt2Topo4BodySimpleDecision;   //!
   TBranch        *b_Hlt2Topo3BodySimpleDecision;   //!
   TBranch        *b_Hlt2Topo3BodyBBDTDecision;   //!
   TBranch        *b_Hlt2Topo2BodySimpleDecision;   //!
   TBranch        *b_Hlt2Topo2BodyBBDTDecision;   //!
   TBranch        *b_Hlt2Topo4BodyBBDTDecision;   //!
   TBranch        *b_Hlt2TopoMu4BodyBBDTDecision;   //!
   TBranch        *b_Hlt2IncPhiSidebandsDecision;   //!
   TBranch        *b_Hlt2B2HHDecision;   //!
   TBranch        *b_Hlt2nSelections;   //!
   TBranch        *b_MaxRoutingBits;   //!
   TBranch        *b_RoutingBits;   //!

   MCClass(TTree *tree=0, TString outFileName="out.root");
   virtual ~MCClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree, TString outFileName);
   virtual void     Loop(TString pidHistDir, Long64_t firstEntry=-1, Long64_t lastEntry=-1);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void     Save();

};

#endif

#ifdef MCClass_cxx
MCClass::MCClass(TTree *tree, TString outFileName) :
  fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("ntuples/Bs2Kst0Kst0_wide_MC2012_magnetDown_Job11.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("ntuples/Bs2Kst0Kst0_wide_MC2012_magnetDown_Job11.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("ntuples/Bs2Kst0Kst0_wide_MC2012_magnetDown_Job11.root:/Bs2Kst0Kst0");
      dir->GetObject("DecayTree",tree);

   }
   Init(tree, outFileName);
}

MCClass::~MCClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

void MCClass::Save(){
  outFile->Write();
  outFile->Close();
}

Int_t MCClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MCClass::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void MCClass::Init(TTree *tree, TString outFileName)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   outFile = new TFile(outFileName,"RECREATE");
   outTree = new TTree("ReducedTree","Tree with PID correction added");

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("B_s0_ENDVERTEX_X", &B_s0_ENDVERTEX_X, &b_B_s0_ENDVERTEX_X);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_Y", &B_s0_ENDVERTEX_Y, &b_B_s0_ENDVERTEX_Y);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_Z", &B_s0_ENDVERTEX_Z, &b_B_s0_ENDVERTEX_Z);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_XERR", &B_s0_ENDVERTEX_XERR, &b_B_s0_ENDVERTEX_XERR);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_YERR", &B_s0_ENDVERTEX_YERR, &b_B_s0_ENDVERTEX_YERR);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_ZERR", &B_s0_ENDVERTEX_ZERR, &b_B_s0_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_CHI2", &B_s0_ENDVERTEX_CHI2, &b_B_s0_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_NDOF", &B_s0_ENDVERTEX_NDOF, &b_B_s0_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("B_s0_ENDVERTEX_COV_", B_s0_ENDVERTEX_COV_, &b_B_s0_ENDVERTEX_COV_);
   fChain->SetBranchAddress("B_s0_OWNPV_X", &B_s0_OWNPV_X, &b_B_s0_OWNPV_X);
   fChain->SetBranchAddress("B_s0_OWNPV_Y", &B_s0_OWNPV_Y, &b_B_s0_OWNPV_Y);
   fChain->SetBranchAddress("B_s0_OWNPV_Z", &B_s0_OWNPV_Z, &b_B_s0_OWNPV_Z);
   fChain->SetBranchAddress("B_s0_OWNPV_XERR", &B_s0_OWNPV_XERR, &b_B_s0_OWNPV_XERR);
   fChain->SetBranchAddress("B_s0_OWNPV_YERR", &B_s0_OWNPV_YERR, &b_B_s0_OWNPV_YERR);
   fChain->SetBranchAddress("B_s0_OWNPV_ZERR", &B_s0_OWNPV_ZERR, &b_B_s0_OWNPV_ZERR);
   fChain->SetBranchAddress("B_s0_OWNPV_CHI2", &B_s0_OWNPV_CHI2, &b_B_s0_OWNPV_CHI2);
   fChain->SetBranchAddress("B_s0_OWNPV_NDOF", &B_s0_OWNPV_NDOF, &b_B_s0_OWNPV_NDOF);
   fChain->SetBranchAddress("B_s0_OWNPV_COV_", B_s0_OWNPV_COV_, &b_B_s0_OWNPV_COV_);
   fChain->SetBranchAddress("B_s0_IP_OWNPV", &B_s0_IP_OWNPV, &b_B_s0_IP_OWNPV);
   fChain->SetBranchAddress("B_s0_IPCHI2_OWNPV", &B_s0_IPCHI2_OWNPV, &b_B_s0_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_s0_FD_OWNPV", &B_s0_FD_OWNPV, &b_B_s0_FD_OWNPV);
   fChain->SetBranchAddress("B_s0_FDCHI2_OWNPV", &B_s0_FDCHI2_OWNPV, &b_B_s0_FDCHI2_OWNPV);
   fChain->SetBranchAddress("B_s0_DIRA_OWNPV", &B_s0_DIRA_OWNPV, &b_B_s0_DIRA_OWNPV);
   fChain->SetBranchAddress("B_s0_P", &B_s0_P, &b_B_s0_P);
   fChain->SetBranchAddress("B_s0_PT", &B_s0_PT, &b_B_s0_PT);
   fChain->SetBranchAddress("B_s0_PE", &B_s0_PE, &b_B_s0_PE);
   fChain->SetBranchAddress("B_s0_PX", &B_s0_PX, &b_B_s0_PX);
   fChain->SetBranchAddress("B_s0_PY", &B_s0_PY, &b_B_s0_PY);
   fChain->SetBranchAddress("B_s0_PZ", &B_s0_PZ, &b_B_s0_PZ);
   fChain->SetBranchAddress("B_s0_MM", &B_s0_MM, &b_B_s0_MM);
   fChain->SetBranchAddress("B_s0_MMERR", &B_s0_MMERR, &b_B_s0_MMERR);
   fChain->SetBranchAddress("B_s0_M", &B_s0_M, &b_B_s0_M);
   fChain->SetBranchAddress("B_s0_BKGCAT", &B_s0_BKGCAT, &b_B_s0_BKGCAT);
   fChain->SetBranchAddress("B_s0_TRUEID", &B_s0_TRUEID, &b_B_s0_TRUEID);
   fChain->SetBranchAddress("B_s0_MC_MOTHER_ID", &B_s0_MC_MOTHER_ID, &b_B_s0_MC_MOTHER_ID);
   fChain->SetBranchAddress("B_s0_MC_MOTHER_KEY", &B_s0_MC_MOTHER_KEY, &b_B_s0_MC_MOTHER_KEY);
   fChain->SetBranchAddress("B_s0_MC_GD_MOTHER_ID", &B_s0_MC_GD_MOTHER_ID, &b_B_s0_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("B_s0_MC_GD_MOTHER_KEY", &B_s0_MC_GD_MOTHER_KEY, &b_B_s0_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("B_s0_MC_GD_GD_MOTHER_ID", &B_s0_MC_GD_GD_MOTHER_ID, &b_B_s0_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("B_s0_MC_GD_GD_MOTHER_KEY", &B_s0_MC_GD_GD_MOTHER_KEY, &b_B_s0_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("B_s0_TRUEP_E", &B_s0_TRUEP_E, &b_B_s0_TRUEP_E);
   fChain->SetBranchAddress("B_s0_TRUEP_X", &B_s0_TRUEP_X, &b_B_s0_TRUEP_X);
   fChain->SetBranchAddress("B_s0_TRUEP_Y", &B_s0_TRUEP_Y, &b_B_s0_TRUEP_Y);
   fChain->SetBranchAddress("B_s0_TRUEP_Z", &B_s0_TRUEP_Z, &b_B_s0_TRUEP_Z);
   fChain->SetBranchAddress("B_s0_TRUEPT", &B_s0_TRUEPT, &b_B_s0_TRUEPT);
   fChain->SetBranchAddress("B_s0_TRUEORIGINVERTEX_X", &B_s0_TRUEORIGINVERTEX_X, &b_B_s0_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("B_s0_TRUEORIGINVERTEX_Y", &B_s0_TRUEORIGINVERTEX_Y, &b_B_s0_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("B_s0_TRUEORIGINVERTEX_Z", &B_s0_TRUEORIGINVERTEX_Z, &b_B_s0_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("B_s0_TRUEENDVERTEX_X", &B_s0_TRUEENDVERTEX_X, &b_B_s0_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("B_s0_TRUEENDVERTEX_Y", &B_s0_TRUEENDVERTEX_Y, &b_B_s0_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("B_s0_TRUEENDVERTEX_Z", &B_s0_TRUEENDVERTEX_Z, &b_B_s0_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("B_s0_TRUEISSTABLE", &B_s0_TRUEISSTABLE, &b_B_s0_TRUEISSTABLE);
   fChain->SetBranchAddress("B_s0_TRUETAU", &B_s0_TRUETAU, &b_B_s0_TRUETAU);
   fChain->SetBranchAddress("B_s0_ThetaL", &B_s0_ThetaL, &b_B_s0_ThetaL);
   fChain->SetBranchAddress("B_s0_ThetaK", &B_s0_ThetaK, &b_B_s0_ThetaK);
   fChain->SetBranchAddress("B_s0_Phi", &B_s0_Phi, &b_B_s0_Phi);
   fChain->SetBranchAddress("B_s0_ThetaTr", &B_s0_ThetaTr, &b_B_s0_ThetaTr);
   fChain->SetBranchAddress("B_s0_PhiTr", &B_s0_PhiTr, &b_B_s0_PhiTr);
   fChain->SetBranchAddress("B_s0_ThetaVtr", &B_s0_ThetaVtr, &b_B_s0_ThetaVtr);
   fChain->SetBranchAddress("B_s0_ID", &B_s0_ID, &b_B_s0_ID);
   fChain->SetBranchAddress("B_s0_TAU", &B_s0_TAU, &b_B_s0_TAU);
   fChain->SetBranchAddress("B_s0_TAUERR", &B_s0_TAUERR, &b_B_s0_TAUERR);
   fChain->SetBranchAddress("B_s0_TAUCHI2", &B_s0_TAUCHI2, &b_B_s0_TAUCHI2);
   fChain->SetBranchAddress("B_s0_L0Global_Dec", &B_s0_L0Global_Dec, &b_B_s0_L0Global_Dec);
   fChain->SetBranchAddress("B_s0_L0Global_TIS", &B_s0_L0Global_TIS, &b_B_s0_L0Global_TIS);
   fChain->SetBranchAddress("B_s0_L0Global_TOS", &B_s0_L0Global_TOS, &b_B_s0_L0Global_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1Global_Dec", &B_s0_Hlt1Global_Dec, &b_B_s0_Hlt1Global_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1Global_TIS", &B_s0_Hlt1Global_TIS, &b_B_s0_Hlt1Global_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1Global_TOS", &B_s0_Hlt1Global_TOS, &b_B_s0_Hlt1Global_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1Phys_Dec", &B_s0_Hlt1Phys_Dec, &b_B_s0_Hlt1Phys_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1Phys_TIS", &B_s0_Hlt1Phys_TIS, &b_B_s0_Hlt1Phys_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1Phys_TOS", &B_s0_Hlt1Phys_TOS, &b_B_s0_Hlt1Phys_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2Global_Dec", &B_s0_Hlt2Global_Dec, &b_B_s0_Hlt2Global_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2Global_TIS", &B_s0_Hlt2Global_TIS, &b_B_s0_Hlt2Global_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2Global_TOS", &B_s0_Hlt2Global_TOS, &b_B_s0_Hlt2Global_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2Phys_Dec", &B_s0_Hlt2Phys_Dec, &b_B_s0_Hlt2Phys_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2Phys_TIS", &B_s0_Hlt2Phys_TIS, &b_B_s0_Hlt2Phys_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2Phys_TOS", &B_s0_Hlt2Phys_TOS, &b_B_s0_Hlt2Phys_TOS);
   fChain->SetBranchAddress("B_s0_StrippingGlobal_Dec", &B_s0_StrippingGlobal_Dec, &b_B_s0_StrippingGlobal_Dec);
   fChain->SetBranchAddress("B_s0_StrippingGlobal_TIS", &B_s0_StrippingGlobal_TIS, &b_B_s0_StrippingGlobal_TIS);
   fChain->SetBranchAddress("B_s0_StrippingGlobal_TOS", &B_s0_StrippingGlobal_TOS, &b_B_s0_StrippingGlobal_TOS);
   fChain->SetBranchAddress("B_s0_L0HadronDecision_Dec", &B_s0_L0HadronDecision_Dec, &b_B_s0_L0HadronDecision_Dec);
   fChain->SetBranchAddress("B_s0_L0HadronDecision_TIS", &B_s0_L0HadronDecision_TIS, &b_B_s0_L0HadronDecision_TIS);
   fChain->SetBranchAddress("B_s0_L0HadronDecision_TOS", &B_s0_L0HadronDecision_TOS, &b_B_s0_L0HadronDecision_TOS);
   fChain->SetBranchAddress("B_s0_L0MuonDecision_Dec", &B_s0_L0MuonDecision_Dec, &b_B_s0_L0MuonDecision_Dec);
   fChain->SetBranchAddress("B_s0_L0MuonDecision_TIS", &B_s0_L0MuonDecision_TIS, &b_B_s0_L0MuonDecision_TIS);
   fChain->SetBranchAddress("B_s0_L0MuonDecision_TOS", &B_s0_L0MuonDecision_TOS, &b_B_s0_L0MuonDecision_TOS);
   fChain->SetBranchAddress("B_s0_L0DiMuonDecision_Dec", &B_s0_L0DiMuonDecision_Dec, &b_B_s0_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("B_s0_L0DiMuonDecision_TIS", &B_s0_L0DiMuonDecision_TIS, &b_B_s0_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("B_s0_L0DiMuonDecision_TOS", &B_s0_L0DiMuonDecision_TOS, &b_B_s0_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("B_s0_L0ElectronDecision_Dec", &B_s0_L0ElectronDecision_Dec, &b_B_s0_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("B_s0_L0ElectronDecision_TIS", &B_s0_L0ElectronDecision_TIS, &b_B_s0_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("B_s0_L0ElectronDecision_TOS", &B_s0_L0ElectronDecision_TOS, &b_B_s0_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("B_s0_L0PhotonDecision_Dec", &B_s0_L0PhotonDecision_Dec, &b_B_s0_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("B_s0_L0PhotonDecision_TIS", &B_s0_L0PhotonDecision_TIS, &b_B_s0_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("B_s0_L0PhotonDecision_TOS", &B_s0_L0PhotonDecision_TOS, &b_B_s0_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1SingleHadronDecision_Dec", &B_s0_Hlt1SingleHadronDecision_Dec, &b_B_s0_Hlt1SingleHadronDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1SingleHadronDecision_TIS", &B_s0_Hlt1SingleHadronDecision_TIS, &b_B_s0_Hlt1SingleHadronDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1SingleHadronDecision_TOS", &B_s0_Hlt1SingleHadronDecision_TOS, &b_B_s0_Hlt1SingleHadronDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1MBNoBiasDecision_Dec", &B_s0_Hlt1MBNoBiasDecision_Dec, &b_B_s0_Hlt1MBNoBiasDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1MBNoBiasDecision_TIS", &B_s0_Hlt1MBNoBiasDecision_TIS, &b_B_s0_Hlt1MBNoBiasDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1MBNoBiasDecision_TOS", &B_s0_Hlt1MBNoBiasDecision_TOS, &b_B_s0_Hlt1MBNoBiasDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1DiHadronDecision_Dec", &B_s0_Hlt1DiHadronDecision_Dec, &b_B_s0_Hlt1DiHadronDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1DiHadronDecision_TIS", &B_s0_Hlt1DiHadronDecision_TIS, &b_B_s0_Hlt1DiHadronDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1DiHadronDecision_TOS", &B_s0_Hlt1DiHadronDecision_TOS, &b_B_s0_Hlt1DiHadronDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1L0AnyDecision_Dec", &B_s0_Hlt1L0AnyDecision_Dec, &b_B_s0_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1L0AnyDecision_TIS", &B_s0_Hlt1L0AnyDecision_TIS, &b_B_s0_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1L0AnyDecision_TOS", &B_s0_Hlt1L0AnyDecision_TOS, &b_B_s0_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt1TrackAllL0Decision_Dec", &B_s0_Hlt1TrackAllL0Decision_Dec, &b_B_s0_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt1TrackAllL0Decision_TIS", &B_s0_Hlt1TrackAllL0Decision_TIS, &b_B_s0_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt1TrackAllL0Decision_TOS", &B_s0_Hlt1TrackAllL0Decision_TOS, &b_B_s0_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2TopoOSTF4BodyDecision_Dec", &B_s0_Hlt2TopoOSTF4BodyDecision_Dec, &b_B_s0_Hlt2TopoOSTF4BodyDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2TopoOSTF4BodyDecision_TIS", &B_s0_Hlt2TopoOSTF4BodyDecision_TIS, &b_B_s0_Hlt2TopoOSTF4BodyDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2TopoOSTF4BodyDecision_TOS", &B_s0_Hlt2TopoOSTF4BodyDecision_TOS, &b_B_s0_Hlt2TopoOSTF4BodyDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2IncPhiDecision_Dec", &B_s0_Hlt2IncPhiDecision_Dec, &b_B_s0_Hlt2IncPhiDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2IncPhiDecision_TIS", &B_s0_Hlt2IncPhiDecision_TIS, &b_B_s0_Hlt2IncPhiDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2IncPhiDecision_TOS", &B_s0_Hlt2IncPhiDecision_TOS, &b_B_s0_Hlt2IncPhiDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo4BodySimpleDecision_Dec", &B_s0_Hlt2Topo4BodySimpleDecision_Dec, &b_B_s0_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2Topo4BodySimpleDecision_TIS", &B_s0_Hlt2Topo4BodySimpleDecision_TIS, &b_B_s0_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo4BodySimpleDecision_TOS", &B_s0_Hlt2Topo4BodySimpleDecision_TOS, &b_B_s0_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo3BodySimpleDecision_Dec", &B_s0_Hlt2Topo3BodySimpleDecision_Dec, &b_B_s0_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2Topo3BodySimpleDecision_TIS", &B_s0_Hlt2Topo3BodySimpleDecision_TIS, &b_B_s0_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo3BodySimpleDecision_TOS", &B_s0_Hlt2Topo3BodySimpleDecision_TOS, &b_B_s0_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo3BodyBBDTDecision_Dec", &B_s0_Hlt2Topo3BodyBBDTDecision_Dec, &b_B_s0_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2Topo3BodyBBDTDecision_TIS", &B_s0_Hlt2Topo3BodyBBDTDecision_TIS, &b_B_s0_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo3BodyBBDTDecision_TOS", &B_s0_Hlt2Topo3BodyBBDTDecision_TOS, &b_B_s0_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo2BodySimpleDecision_Dec", &B_s0_Hlt2Topo2BodySimpleDecision_Dec, &b_B_s0_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2Topo2BodySimpleDecision_TIS", &B_s0_Hlt2Topo2BodySimpleDecision_TIS, &b_B_s0_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo2BodySimpleDecision_TOS", &B_s0_Hlt2Topo2BodySimpleDecision_TOS, &b_B_s0_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo2BodyBBDTDecision_Dec", &B_s0_Hlt2Topo2BodyBBDTDecision_Dec, &b_B_s0_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2Topo2BodyBBDTDecision_TIS", &B_s0_Hlt2Topo2BodyBBDTDecision_TIS, &b_B_s0_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo2BodyBBDTDecision_TOS", &B_s0_Hlt2Topo2BodyBBDTDecision_TOS, &b_B_s0_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo4BodyBBDTDecision_Dec", &B_s0_Hlt2Topo4BodyBBDTDecision_Dec, &b_B_s0_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2Topo4BodyBBDTDecision_TIS", &B_s0_Hlt2Topo4BodyBBDTDecision_TIS, &b_B_s0_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2Topo4BodyBBDTDecision_TOS", &B_s0_Hlt2Topo4BodyBBDTDecision_TOS, &b_B_s0_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec", &B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS", &B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS", &B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2IncPhiSidebandsDecision_Dec", &B_s0_Hlt2IncPhiSidebandsDecision_Dec, &b_B_s0_Hlt2IncPhiSidebandsDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2IncPhiSidebandsDecision_TIS", &B_s0_Hlt2IncPhiSidebandsDecision_TIS, &b_B_s0_Hlt2IncPhiSidebandsDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2IncPhiSidebandsDecision_TOS", &B_s0_Hlt2IncPhiSidebandsDecision_TOS, &b_B_s0_Hlt2IncPhiSidebandsDecision_TOS);
   fChain->SetBranchAddress("B_s0_Hlt2B2HHDecision_Dec", &B_s0_Hlt2B2HHDecision_Dec, &b_B_s0_Hlt2B2HHDecision_Dec);
   fChain->SetBranchAddress("B_s0_Hlt2B2HHDecision_TIS", &B_s0_Hlt2B2HHDecision_TIS, &b_B_s0_Hlt2B2HHDecision_TIS);
   fChain->SetBranchAddress("B_s0_Hlt2B2HHDecision_TOS", &B_s0_Hlt2B2HHDecision_TOS, &b_B_s0_Hlt2B2HHDecision_TOS);
   fChain->SetBranchAddress("B_s0_TAGDECISION", &B_s0_TAGDECISION, &b_B_s0_TAGDECISION);
   fChain->SetBranchAddress("B_s0_TAGCAT", &B_s0_TAGCAT, &b_B_s0_TAGCAT);
   fChain->SetBranchAddress("B_s0_TAGOMEGA", &B_s0_TAGOMEGA, &b_B_s0_TAGOMEGA);
   fChain->SetBranchAddress("B_s0_TAGDECISION_OS", &B_s0_TAGDECISION_OS, &b_B_s0_TAGDECISION_OS);
   fChain->SetBranchAddress("B_s0_TAGCAT_OS", &B_s0_TAGCAT_OS, &b_B_s0_TAGCAT_OS);
   fChain->SetBranchAddress("B_s0_TAGOMEGA_OS", &B_s0_TAGOMEGA_OS, &b_B_s0_TAGOMEGA_OS);
   fChain->SetBranchAddress("B_s0_TAGGER", &B_s0_TAGGER, &b_B_s0_TAGGER);
   fChain->SetBranchAddress("B_s0_NOPARTWITHINDCHI2WDW", &B_s0_NOPARTWITHINDCHI2WDW, &b_B_s0_NOPARTWITHINDCHI2WDW);
   fChain->SetBranchAddress("B_s0_NOPARTWITHINCHI2WDW", &B_s0_NOPARTWITHINCHI2WDW, &b_B_s0_NOPARTWITHINCHI2WDW);
   fChain->SetBranchAddress("B_s0_SMALLESTCHI2", &B_s0_SMALLESTCHI2, &b_B_s0_SMALLESTCHI2);
   fChain->SetBranchAddress("B_s0_SMALLESTDELTACHI2", &B_s0_SMALLESTDELTACHI2, &b_B_s0_SMALLESTDELTACHI2);
   fChain->SetBranchAddress("Kstb_CosTheta", &Kstb_CosTheta, &b_Kstb_CosTheta);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_X", &Kstb_ENDVERTEX_X, &b_Kstb_ENDVERTEX_X);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_Y", &Kstb_ENDVERTEX_Y, &b_Kstb_ENDVERTEX_Y);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_Z", &Kstb_ENDVERTEX_Z, &b_Kstb_ENDVERTEX_Z);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_XERR", &Kstb_ENDVERTEX_XERR, &b_Kstb_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_YERR", &Kstb_ENDVERTEX_YERR, &b_Kstb_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_ZERR", &Kstb_ENDVERTEX_ZERR, &b_Kstb_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_CHI2", &Kstb_ENDVERTEX_CHI2, &b_Kstb_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_NDOF", &Kstb_ENDVERTEX_NDOF, &b_Kstb_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_COV_", Kstb_ENDVERTEX_COV_, &b_Kstb_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Kstb_OWNPV_X", &Kstb_OWNPV_X, &b_Kstb_OWNPV_X);
   fChain->SetBranchAddress("Kstb_OWNPV_Y", &Kstb_OWNPV_Y, &b_Kstb_OWNPV_Y);
   fChain->SetBranchAddress("Kstb_OWNPV_Z", &Kstb_OWNPV_Z, &b_Kstb_OWNPV_Z);
   fChain->SetBranchAddress("Kstb_OWNPV_XERR", &Kstb_OWNPV_XERR, &b_Kstb_OWNPV_XERR);
   fChain->SetBranchAddress("Kstb_OWNPV_YERR", &Kstb_OWNPV_YERR, &b_Kstb_OWNPV_YERR);
   fChain->SetBranchAddress("Kstb_OWNPV_ZERR", &Kstb_OWNPV_ZERR, &b_Kstb_OWNPV_ZERR);
   fChain->SetBranchAddress("Kstb_OWNPV_CHI2", &Kstb_OWNPV_CHI2, &b_Kstb_OWNPV_CHI2);
   fChain->SetBranchAddress("Kstb_OWNPV_NDOF", &Kstb_OWNPV_NDOF, &b_Kstb_OWNPV_NDOF);
   fChain->SetBranchAddress("Kstb_OWNPV_COV_", Kstb_OWNPV_COV_, &b_Kstb_OWNPV_COV_);
   fChain->SetBranchAddress("Kstb_IP_OWNPV", &Kstb_IP_OWNPV, &b_Kstb_IP_OWNPV);
   fChain->SetBranchAddress("Kstb_IPCHI2_OWNPV", &Kstb_IPCHI2_OWNPV, &b_Kstb_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kstb_FD_OWNPV", &Kstb_FD_OWNPV, &b_Kstb_FD_OWNPV);
   fChain->SetBranchAddress("Kstb_FDCHI2_OWNPV", &Kstb_FDCHI2_OWNPV, &b_Kstb_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Kstb_DIRA_OWNPV", &Kstb_DIRA_OWNPV, &b_Kstb_DIRA_OWNPV);
   fChain->SetBranchAddress("Kstb_ORIVX_X", &Kstb_ORIVX_X, &b_Kstb_ORIVX_X);
   fChain->SetBranchAddress("Kstb_ORIVX_Y", &Kstb_ORIVX_Y, &b_Kstb_ORIVX_Y);
   fChain->SetBranchAddress("Kstb_ORIVX_Z", &Kstb_ORIVX_Z, &b_Kstb_ORIVX_Z);
   fChain->SetBranchAddress("Kstb_ORIVX_XERR", &Kstb_ORIVX_XERR, &b_Kstb_ORIVX_XERR);
   fChain->SetBranchAddress("Kstb_ORIVX_YERR", &Kstb_ORIVX_YERR, &b_Kstb_ORIVX_YERR);
   fChain->SetBranchAddress("Kstb_ORIVX_ZERR", &Kstb_ORIVX_ZERR, &b_Kstb_ORIVX_ZERR);
   fChain->SetBranchAddress("Kstb_ORIVX_CHI2", &Kstb_ORIVX_CHI2, &b_Kstb_ORIVX_CHI2);
   fChain->SetBranchAddress("Kstb_ORIVX_NDOF", &Kstb_ORIVX_NDOF, &b_Kstb_ORIVX_NDOF);
   fChain->SetBranchAddress("Kstb_ORIVX_COV_", Kstb_ORIVX_COV_, &b_Kstb_ORIVX_COV_);
   fChain->SetBranchAddress("Kstb_FD_ORIVX", &Kstb_FD_ORIVX, &b_Kstb_FD_ORIVX);
   fChain->SetBranchAddress("Kstb_FDCHI2_ORIVX", &Kstb_FDCHI2_ORIVX, &b_Kstb_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Kstb_DIRA_ORIVX", &Kstb_DIRA_ORIVX, &b_Kstb_DIRA_ORIVX);
   fChain->SetBranchAddress("Kstb_P", &Kstb_P, &b_Kstb_P);
   fChain->SetBranchAddress("Kstb_PT", &Kstb_PT, &b_Kstb_PT);
   fChain->SetBranchAddress("Kstb_PE", &Kstb_PE, &b_Kstb_PE);
   fChain->SetBranchAddress("Kstb_PX", &Kstb_PX, &b_Kstb_PX);
   fChain->SetBranchAddress("Kstb_PY", &Kstb_PY, &b_Kstb_PY);
   fChain->SetBranchAddress("Kstb_PZ", &Kstb_PZ, &b_Kstb_PZ);
   fChain->SetBranchAddress("Kstb_MM", &Kstb_MM, &b_Kstb_MM);
   fChain->SetBranchAddress("Kstb_MMERR", &Kstb_MMERR, &b_Kstb_MMERR);
   fChain->SetBranchAddress("Kstb_M", &Kstb_M, &b_Kstb_M);
   fChain->SetBranchAddress("Kstb_BKGCAT", &Kstb_BKGCAT, &b_Kstb_BKGCAT);
   fChain->SetBranchAddress("Kstb_TRUEID", &Kstb_TRUEID, &b_Kstb_TRUEID);
   fChain->SetBranchAddress("Kstb_MC_MOTHER_ID", &Kstb_MC_MOTHER_ID, &b_Kstb_MC_MOTHER_ID);
   fChain->SetBranchAddress("Kstb_MC_MOTHER_KEY", &Kstb_MC_MOTHER_KEY, &b_Kstb_MC_MOTHER_KEY);
   fChain->SetBranchAddress("Kstb_MC_GD_MOTHER_ID", &Kstb_MC_GD_MOTHER_ID, &b_Kstb_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kstb_MC_GD_MOTHER_KEY", &Kstb_MC_GD_MOTHER_KEY, &b_Kstb_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kstb_MC_GD_GD_MOTHER_ID", &Kstb_MC_GD_GD_MOTHER_ID, &b_Kstb_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kstb_MC_GD_GD_MOTHER_KEY", &Kstb_MC_GD_GD_MOTHER_KEY, &b_Kstb_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kstb_TRUEP_E", &Kstb_TRUEP_E, &b_Kstb_TRUEP_E);
   fChain->SetBranchAddress("Kstb_TRUEP_X", &Kstb_TRUEP_X, &b_Kstb_TRUEP_X);
   fChain->SetBranchAddress("Kstb_TRUEP_Y", &Kstb_TRUEP_Y, &b_Kstb_TRUEP_Y);
   fChain->SetBranchAddress("Kstb_TRUEP_Z", &Kstb_TRUEP_Z, &b_Kstb_TRUEP_Z);
   fChain->SetBranchAddress("Kstb_TRUEPT", &Kstb_TRUEPT, &b_Kstb_TRUEPT);
   fChain->SetBranchAddress("Kstb_TRUEORIGINVERTEX_X", &Kstb_TRUEORIGINVERTEX_X, &b_Kstb_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("Kstb_TRUEORIGINVERTEX_Y", &Kstb_TRUEORIGINVERTEX_Y, &b_Kstb_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("Kstb_TRUEORIGINVERTEX_Z", &Kstb_TRUEORIGINVERTEX_Z, &b_Kstb_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("Kstb_TRUEENDVERTEX_X", &Kstb_TRUEENDVERTEX_X, &b_Kstb_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("Kstb_TRUEENDVERTEX_Y", &Kstb_TRUEENDVERTEX_Y, &b_Kstb_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("Kstb_TRUEENDVERTEX_Z", &Kstb_TRUEENDVERTEX_Z, &b_Kstb_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("Kstb_TRUEISSTABLE", &Kstb_TRUEISSTABLE, &b_Kstb_TRUEISSTABLE);
   fChain->SetBranchAddress("Kstb_TRUETAU", &Kstb_TRUETAU, &b_Kstb_TRUETAU);
   fChain->SetBranchAddress("Kstb_ThetaL", &Kstb_ThetaL, &b_Kstb_ThetaL);
   fChain->SetBranchAddress("Kstb_ThetaK", &Kstb_ThetaK, &b_Kstb_ThetaK);
   fChain->SetBranchAddress("Kstb_Phi", &Kstb_Phi, &b_Kstb_Phi);
   fChain->SetBranchAddress("Kstb_ThetaTr", &Kstb_ThetaTr, &b_Kstb_ThetaTr);
   fChain->SetBranchAddress("Kstb_PhiTr", &Kstb_PhiTr, &b_Kstb_PhiTr);
   fChain->SetBranchAddress("Kstb_ThetaVtr", &Kstb_ThetaVtr, &b_Kstb_ThetaVtr);
   fChain->SetBranchAddress("Kstb_ID", &Kstb_ID, &b_Kstb_ID);
   fChain->SetBranchAddress("Kstb_TAU", &Kstb_TAU, &b_Kstb_TAU);
   fChain->SetBranchAddress("Kstb_TAUERR", &Kstb_TAUERR, &b_Kstb_TAUERR);
   fChain->SetBranchAddress("Kstb_TAUCHI2", &Kstb_TAUCHI2, &b_Kstb_TAUCHI2);
   fChain->SetBranchAddress("Kstb_L0Global_Dec", &Kstb_L0Global_Dec, &b_Kstb_L0Global_Dec);
   fChain->SetBranchAddress("Kstb_L0Global_TIS", &Kstb_L0Global_TIS, &b_Kstb_L0Global_TIS);
   fChain->SetBranchAddress("Kstb_L0Global_TOS", &Kstb_L0Global_TOS, &b_Kstb_L0Global_TOS);
   fChain->SetBranchAddress("Kstb_Hlt1Global_Dec", &Kstb_Hlt1Global_Dec, &b_Kstb_Hlt1Global_Dec);
   fChain->SetBranchAddress("Kstb_Hlt1Global_TIS", &Kstb_Hlt1Global_TIS, &b_Kstb_Hlt1Global_TIS);
   fChain->SetBranchAddress("Kstb_Hlt1Global_TOS", &Kstb_Hlt1Global_TOS, &b_Kstb_Hlt1Global_TOS);
   fChain->SetBranchAddress("Kstb_Hlt1Phys_Dec", &Kstb_Hlt1Phys_Dec, &b_Kstb_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Kstb_Hlt1Phys_TIS", &Kstb_Hlt1Phys_TIS, &b_Kstb_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Kstb_Hlt1Phys_TOS", &Kstb_Hlt1Phys_TOS, &b_Kstb_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2Global_Dec", &Kstb_Hlt2Global_Dec, &b_Kstb_Hlt2Global_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2Global_TIS", &Kstb_Hlt2Global_TIS, &b_Kstb_Hlt2Global_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2Global_TOS", &Kstb_Hlt2Global_TOS, &b_Kstb_Hlt2Global_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2Phys_Dec", &Kstb_Hlt2Phys_Dec, &b_Kstb_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2Phys_TIS", &Kstb_Hlt2Phys_TIS, &b_Kstb_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2Phys_TOS", &Kstb_Hlt2Phys_TOS, &b_Kstb_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Kstb_StrippingGlobal_Dec", &Kstb_StrippingGlobal_Dec, &b_Kstb_StrippingGlobal_Dec);
   fChain->SetBranchAddress("Kstb_StrippingGlobal_TIS", &Kstb_StrippingGlobal_TIS, &b_Kstb_StrippingGlobal_TIS);
   fChain->SetBranchAddress("Kstb_StrippingGlobal_TOS", &Kstb_StrippingGlobal_TOS, &b_Kstb_StrippingGlobal_TOS);
   fChain->SetBranchAddress("Kstb_L0HadronDecision_Dec", &Kstb_L0HadronDecision_Dec, &b_Kstb_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Kstb_L0HadronDecision_TIS", &Kstb_L0HadronDecision_TIS, &b_Kstb_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Kstb_L0HadronDecision_TOS", &Kstb_L0HadronDecision_TOS, &b_Kstb_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Kstb_L0MuonDecision_Dec", &Kstb_L0MuonDecision_Dec, &b_Kstb_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Kstb_L0MuonDecision_TIS", &Kstb_L0MuonDecision_TIS, &b_Kstb_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Kstb_L0MuonDecision_TOS", &Kstb_L0MuonDecision_TOS, &b_Kstb_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Kstb_L0DiMuonDecision_Dec", &Kstb_L0DiMuonDecision_Dec, &b_Kstb_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Kstb_L0DiMuonDecision_TIS", &Kstb_L0DiMuonDecision_TIS, &b_Kstb_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Kstb_L0DiMuonDecision_TOS", &Kstb_L0DiMuonDecision_TOS, &b_Kstb_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Kstb_L0ElectronDecision_Dec", &Kstb_L0ElectronDecision_Dec, &b_Kstb_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("Kstb_L0ElectronDecision_TIS", &Kstb_L0ElectronDecision_TIS, &b_Kstb_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("Kstb_L0ElectronDecision_TOS", &Kstb_L0ElectronDecision_TOS, &b_Kstb_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("Kstb_L0PhotonDecision_Dec", &Kstb_L0PhotonDecision_Dec, &b_Kstb_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("Kstb_L0PhotonDecision_TIS", &Kstb_L0PhotonDecision_TIS, &b_Kstb_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("Kstb_L0PhotonDecision_TOS", &Kstb_L0PhotonDecision_TOS, &b_Kstb_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt1SingleHadronDecision_Dec", &Kstb_Hlt1SingleHadronDecision_Dec, &b_Kstb_Hlt1SingleHadronDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt1SingleHadronDecision_TIS", &Kstb_Hlt1SingleHadronDecision_TIS, &b_Kstb_Hlt1SingleHadronDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt1SingleHadronDecision_TOS", &Kstb_Hlt1SingleHadronDecision_TOS, &b_Kstb_Hlt1SingleHadronDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt1MBNoBiasDecision_Dec", &Kstb_Hlt1MBNoBiasDecision_Dec, &b_Kstb_Hlt1MBNoBiasDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt1MBNoBiasDecision_TIS", &Kstb_Hlt1MBNoBiasDecision_TIS, &b_Kstb_Hlt1MBNoBiasDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt1MBNoBiasDecision_TOS", &Kstb_Hlt1MBNoBiasDecision_TOS, &b_Kstb_Hlt1MBNoBiasDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt1DiHadronDecision_Dec", &Kstb_Hlt1DiHadronDecision_Dec, &b_Kstb_Hlt1DiHadronDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt1DiHadronDecision_TIS", &Kstb_Hlt1DiHadronDecision_TIS, &b_Kstb_Hlt1DiHadronDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt1DiHadronDecision_TOS", &Kstb_Hlt1DiHadronDecision_TOS, &b_Kstb_Hlt1DiHadronDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt1L0AnyDecision_Dec", &Kstb_Hlt1L0AnyDecision_Dec, &b_Kstb_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt1L0AnyDecision_TIS", &Kstb_Hlt1L0AnyDecision_TIS, &b_Kstb_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt1L0AnyDecision_TOS", &Kstb_Hlt1L0AnyDecision_TOS, &b_Kstb_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt1TrackAllL0Decision_Dec", &Kstb_Hlt1TrackAllL0Decision_Dec, &b_Kstb_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt1TrackAllL0Decision_TIS", &Kstb_Hlt1TrackAllL0Decision_TIS, &b_Kstb_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt1TrackAllL0Decision_TOS", &Kstb_Hlt1TrackAllL0Decision_TOS, &b_Kstb_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2TopoOSTF4BodyDecision_Dec", &Kstb_Hlt2TopoOSTF4BodyDecision_Dec, &b_Kstb_Hlt2TopoOSTF4BodyDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2TopoOSTF4BodyDecision_TIS", &Kstb_Hlt2TopoOSTF4BodyDecision_TIS, &b_Kstb_Hlt2TopoOSTF4BodyDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2TopoOSTF4BodyDecision_TOS", &Kstb_Hlt2TopoOSTF4BodyDecision_TOS, &b_Kstb_Hlt2TopoOSTF4BodyDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2IncPhiDecision_Dec", &Kstb_Hlt2IncPhiDecision_Dec, &b_Kstb_Hlt2IncPhiDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2IncPhiDecision_TIS", &Kstb_Hlt2IncPhiDecision_TIS, &b_Kstb_Hlt2IncPhiDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2IncPhiDecision_TOS", &Kstb_Hlt2IncPhiDecision_TOS, &b_Kstb_Hlt2IncPhiDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo4BodySimpleDecision_Dec", &Kstb_Hlt2Topo4BodySimpleDecision_Dec, &b_Kstb_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2Topo4BodySimpleDecision_TIS", &Kstb_Hlt2Topo4BodySimpleDecision_TIS, &b_Kstb_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo4BodySimpleDecision_TOS", &Kstb_Hlt2Topo4BodySimpleDecision_TOS, &b_Kstb_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo3BodySimpleDecision_Dec", &Kstb_Hlt2Topo3BodySimpleDecision_Dec, &b_Kstb_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2Topo3BodySimpleDecision_TIS", &Kstb_Hlt2Topo3BodySimpleDecision_TIS, &b_Kstb_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo3BodySimpleDecision_TOS", &Kstb_Hlt2Topo3BodySimpleDecision_TOS, &b_Kstb_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo3BodyBBDTDecision_Dec", &Kstb_Hlt2Topo3BodyBBDTDecision_Dec, &b_Kstb_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2Topo3BodyBBDTDecision_TIS", &Kstb_Hlt2Topo3BodyBBDTDecision_TIS, &b_Kstb_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo3BodyBBDTDecision_TOS", &Kstb_Hlt2Topo3BodyBBDTDecision_TOS, &b_Kstb_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo2BodySimpleDecision_Dec", &Kstb_Hlt2Topo2BodySimpleDecision_Dec, &b_Kstb_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2Topo2BodySimpleDecision_TIS", &Kstb_Hlt2Topo2BodySimpleDecision_TIS, &b_Kstb_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo2BodySimpleDecision_TOS", &Kstb_Hlt2Topo2BodySimpleDecision_TOS, &b_Kstb_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo2BodyBBDTDecision_Dec", &Kstb_Hlt2Topo2BodyBBDTDecision_Dec, &b_Kstb_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2Topo2BodyBBDTDecision_TIS", &Kstb_Hlt2Topo2BodyBBDTDecision_TIS, &b_Kstb_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo2BodyBBDTDecision_TOS", &Kstb_Hlt2Topo2BodyBBDTDecision_TOS, &b_Kstb_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo4BodyBBDTDecision_Dec", &Kstb_Hlt2Topo4BodyBBDTDecision_Dec, &b_Kstb_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2Topo4BodyBBDTDecision_TIS", &Kstb_Hlt2Topo4BodyBBDTDecision_TIS, &b_Kstb_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2Topo4BodyBBDTDecision_TOS", &Kstb_Hlt2Topo4BodyBBDTDecision_TOS, &b_Kstb_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2TopoMu4BodyBBDTDecision_Dec", &Kstb_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_Kstb_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2TopoMu4BodyBBDTDecision_TIS", &Kstb_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_Kstb_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2TopoMu4BodyBBDTDecision_TOS", &Kstb_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_Kstb_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2IncPhiSidebandsDecision_Dec", &Kstb_Hlt2IncPhiSidebandsDecision_Dec, &b_Kstb_Hlt2IncPhiSidebandsDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2IncPhiSidebandsDecision_TIS", &Kstb_Hlt2IncPhiSidebandsDecision_TIS, &b_Kstb_Hlt2IncPhiSidebandsDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2IncPhiSidebandsDecision_TOS", &Kstb_Hlt2IncPhiSidebandsDecision_TOS, &b_Kstb_Hlt2IncPhiSidebandsDecision_TOS);
   fChain->SetBranchAddress("Kstb_Hlt2B2HHDecision_Dec", &Kstb_Hlt2B2HHDecision_Dec, &b_Kstb_Hlt2B2HHDecision_Dec);
   fChain->SetBranchAddress("Kstb_Hlt2B2HHDecision_TIS", &Kstb_Hlt2B2HHDecision_TIS, &b_Kstb_Hlt2B2HHDecision_TIS);
   fChain->SetBranchAddress("Kstb_Hlt2B2HHDecision_TOS", &Kstb_Hlt2B2HHDecision_TOS, &b_Kstb_Hlt2B2HHDecision_TOS);
   fChain->SetBranchAddress("Kstb_NOPARTWITHINDCHI2WDW", &Kstb_NOPARTWITHINDCHI2WDW, &b_Kstb_NOPARTWITHINDCHI2WDW);
   fChain->SetBranchAddress("Kstb_NOPARTWITHINCHI2WDW", &Kstb_NOPARTWITHINCHI2WDW, &b_Kstb_NOPARTWITHINCHI2WDW);
   fChain->SetBranchAddress("Kstb_SMALLESTCHI2", &Kstb_SMALLESTCHI2, &b_Kstb_SMALLESTCHI2);
   fChain->SetBranchAddress("Kstb_SMALLESTDELTACHI2", &Kstb_SMALLESTDELTACHI2, &b_Kstb_SMALLESTDELTACHI2);
   fChain->SetBranchAddress("Piplus_CosTheta", &Piplus_CosTheta, &b_Piplus_CosTheta);
   fChain->SetBranchAddress("Piplus_OWNPV_X", &Piplus_OWNPV_X, &b_Piplus_OWNPV_X);
   fChain->SetBranchAddress("Piplus_OWNPV_Y", &Piplus_OWNPV_Y, &b_Piplus_OWNPV_Y);
   fChain->SetBranchAddress("Piplus_OWNPV_Z", &Piplus_OWNPV_Z, &b_Piplus_OWNPV_Z);
   fChain->SetBranchAddress("Piplus_OWNPV_XERR", &Piplus_OWNPV_XERR, &b_Piplus_OWNPV_XERR);
   fChain->SetBranchAddress("Piplus_OWNPV_YERR", &Piplus_OWNPV_YERR, &b_Piplus_OWNPV_YERR);
   fChain->SetBranchAddress("Piplus_OWNPV_ZERR", &Piplus_OWNPV_ZERR, &b_Piplus_OWNPV_ZERR);
   fChain->SetBranchAddress("Piplus_OWNPV_CHI2", &Piplus_OWNPV_CHI2, &b_Piplus_OWNPV_CHI2);
   fChain->SetBranchAddress("Piplus_OWNPV_NDOF", &Piplus_OWNPV_NDOF, &b_Piplus_OWNPV_NDOF);
   fChain->SetBranchAddress("Piplus_OWNPV_COV_", Piplus_OWNPV_COV_, &b_Piplus_OWNPV_COV_);
   fChain->SetBranchAddress("Piplus_IP_OWNPV", &Piplus_IP_OWNPV, &b_Piplus_IP_OWNPV);
   fChain->SetBranchAddress("Piplus_IPCHI2_OWNPV", &Piplus_IPCHI2_OWNPV, &b_Piplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Piplus_ORIVX_X", &Piplus_ORIVX_X, &b_Piplus_ORIVX_X);
   fChain->SetBranchAddress("Piplus_ORIVX_Y", &Piplus_ORIVX_Y, &b_Piplus_ORIVX_Y);
   fChain->SetBranchAddress("Piplus_ORIVX_Z", &Piplus_ORIVX_Z, &b_Piplus_ORIVX_Z);
   fChain->SetBranchAddress("Piplus_ORIVX_XERR", &Piplus_ORIVX_XERR, &b_Piplus_ORIVX_XERR);
   fChain->SetBranchAddress("Piplus_ORIVX_YERR", &Piplus_ORIVX_YERR, &b_Piplus_ORIVX_YERR);
   fChain->SetBranchAddress("Piplus_ORIVX_ZERR", &Piplus_ORIVX_ZERR, &b_Piplus_ORIVX_ZERR);
   fChain->SetBranchAddress("Piplus_ORIVX_CHI2", &Piplus_ORIVX_CHI2, &b_Piplus_ORIVX_CHI2);
   fChain->SetBranchAddress("Piplus_ORIVX_NDOF", &Piplus_ORIVX_NDOF, &b_Piplus_ORIVX_NDOF);
   fChain->SetBranchAddress("Piplus_ORIVX_COV_", Piplus_ORIVX_COV_, &b_Piplus_ORIVX_COV_);
   fChain->SetBranchAddress("Piplus_P", &Piplus_P, &b_Piplus_P);
   fChain->SetBranchAddress("Piplus_PT", &Piplus_PT, &b_Piplus_PT);
   fChain->SetBranchAddress("Piplus_PE", &Piplus_PE, &b_Piplus_PE);
   fChain->SetBranchAddress("Piplus_PX", &Piplus_PX, &b_Piplus_PX);
   fChain->SetBranchAddress("Piplus_PY", &Piplus_PY, &b_Piplus_PY);
   fChain->SetBranchAddress("Piplus_PZ", &Piplus_PZ, &b_Piplus_PZ);
   fChain->SetBranchAddress("Piplus_M", &Piplus_M, &b_Piplus_M);
   fChain->SetBranchAddress("Piplus_L0Calo_HCAL_realET", &Piplus_L0Calo_HCAL_realET, &b_Piplus_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("Piplus_L0Calo_HCAL_xProjection", &Piplus_L0Calo_HCAL_xProjection, &b_Piplus_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("Piplus_L0Calo_HCAL_yProjection", &Piplus_L0Calo_HCAL_yProjection, &b_Piplus_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("Piplus_L0Calo_HCAL_region", &Piplus_L0Calo_HCAL_region, &b_Piplus_L0Calo_HCAL_region);
   fChain->SetBranchAddress("Piplus_TRUEID", &Piplus_TRUEID, &b_Piplus_TRUEID);
   fChain->SetBranchAddress("Piplus_MC_MOTHER_ID", &Piplus_MC_MOTHER_ID, &b_Piplus_MC_MOTHER_ID);
   fChain->SetBranchAddress("Piplus_MC_MOTHER_KEY", &Piplus_MC_MOTHER_KEY, &b_Piplus_MC_MOTHER_KEY);
   fChain->SetBranchAddress("Piplus_MC_GD_MOTHER_ID", &Piplus_MC_GD_MOTHER_ID, &b_Piplus_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("Piplus_MC_GD_MOTHER_KEY", &Piplus_MC_GD_MOTHER_KEY, &b_Piplus_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Piplus_MC_GD_GD_MOTHER_ID", &Piplus_MC_GD_GD_MOTHER_ID, &b_Piplus_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("Piplus_MC_GD_GD_MOTHER_KEY", &Piplus_MC_GD_GD_MOTHER_KEY, &b_Piplus_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Piplus_TRUEP_E", &Piplus_TRUEP_E, &b_Piplus_TRUEP_E);
   fChain->SetBranchAddress("Piplus_TRUEP_X", &Piplus_TRUEP_X, &b_Piplus_TRUEP_X);
   fChain->SetBranchAddress("Piplus_TRUEP_Y", &Piplus_TRUEP_Y, &b_Piplus_TRUEP_Y);
   fChain->SetBranchAddress("Piplus_TRUEP_Z", &Piplus_TRUEP_Z, &b_Piplus_TRUEP_Z);
   fChain->SetBranchAddress("Piplus_TRUEPT", &Piplus_TRUEPT, &b_Piplus_TRUEPT);
   fChain->SetBranchAddress("Piplus_TRUEORIGINVERTEX_X", &Piplus_TRUEORIGINVERTEX_X, &b_Piplus_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("Piplus_TRUEORIGINVERTEX_Y", &Piplus_TRUEORIGINVERTEX_Y, &b_Piplus_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("Piplus_TRUEORIGINVERTEX_Z", &Piplus_TRUEORIGINVERTEX_Z, &b_Piplus_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("Piplus_TRUEENDVERTEX_X", &Piplus_TRUEENDVERTEX_X, &b_Piplus_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("Piplus_TRUEENDVERTEX_Y", &Piplus_TRUEENDVERTEX_Y, &b_Piplus_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("Piplus_TRUEENDVERTEX_Z", &Piplus_TRUEENDVERTEX_Z, &b_Piplus_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("Piplus_TRUEISSTABLE", &Piplus_TRUEISSTABLE, &b_Piplus_TRUEISSTABLE);
   fChain->SetBranchAddress("Piplus_TRUETAU", &Piplus_TRUETAU, &b_Piplus_TRUETAU);
   fChain->SetBranchAddress("Piplus_ThetaL", &Piplus_ThetaL, &b_Piplus_ThetaL);
   fChain->SetBranchAddress("Piplus_ThetaK", &Piplus_ThetaK, &b_Piplus_ThetaK);
   fChain->SetBranchAddress("Piplus_Phi", &Piplus_Phi, &b_Piplus_Phi);
   fChain->SetBranchAddress("Piplus_ThetaTr", &Piplus_ThetaTr, &b_Piplus_ThetaTr);
   fChain->SetBranchAddress("Piplus_PhiTr", &Piplus_PhiTr, &b_Piplus_PhiTr);
   fChain->SetBranchAddress("Piplus_ThetaVtr", &Piplus_ThetaVtr, &b_Piplus_ThetaVtr);
   fChain->SetBranchAddress("Piplus_ID", &Piplus_ID, &b_Piplus_ID);
   fChain->SetBranchAddress("Piplus_PIDe", &Piplus_PIDe, &b_Piplus_PIDe);
   fChain->SetBranchAddress("Piplus_PIDmu", &Piplus_PIDmu, &b_Piplus_PIDmu);
   fChain->SetBranchAddress("Piplus_PIDK", &Piplus_PIDK, &b_Piplus_PIDK);
   fChain->SetBranchAddress("Piplus_PIDp", &Piplus_PIDp, &b_Piplus_PIDp);
   fChain->SetBranchAddress("Piplus_ProbNNe", &Piplus_ProbNNe, &b_Piplus_ProbNNe);
   fChain->SetBranchAddress("Piplus_ProbNNk", &Piplus_ProbNNk, &b_Piplus_ProbNNk);
   fChain->SetBranchAddress("Piplus_ProbNNp", &Piplus_ProbNNp, &b_Piplus_ProbNNp);
   fChain->SetBranchAddress("Piplus_ProbNNpi", &Piplus_ProbNNpi, &b_Piplus_ProbNNpi);
   fChain->SetBranchAddress("Piplus_ProbNNmu", &Piplus_ProbNNmu, &b_Piplus_ProbNNmu);
   fChain->SetBranchAddress("Piplus_ProbNNghost", &Piplus_ProbNNghost, &b_Piplus_ProbNNghost);
   fChain->SetBranchAddress("Piplus_hasMuon", &Piplus_hasMuon, &b_Piplus_hasMuon);
   fChain->SetBranchAddress("Piplus_isMuon", &Piplus_isMuon, &b_Piplus_isMuon);
   fChain->SetBranchAddress("Piplus_hasRich", &Piplus_hasRich, &b_Piplus_hasRich);
   fChain->SetBranchAddress("Piplus_hasCalo", &Piplus_hasCalo, &b_Piplus_hasCalo);
   fChain->SetBranchAddress("Piplus_L0Global_Dec", &Piplus_L0Global_Dec, &b_Piplus_L0Global_Dec);
   fChain->SetBranchAddress("Piplus_L0Global_TIS", &Piplus_L0Global_TIS, &b_Piplus_L0Global_TIS);
   fChain->SetBranchAddress("Piplus_L0Global_TOS", &Piplus_L0Global_TOS, &b_Piplus_L0Global_TOS);
   fChain->SetBranchAddress("Piplus_Hlt1Global_Dec", &Piplus_Hlt1Global_Dec, &b_Piplus_Hlt1Global_Dec);
   fChain->SetBranchAddress("Piplus_Hlt1Global_TIS", &Piplus_Hlt1Global_TIS, &b_Piplus_Hlt1Global_TIS);
   fChain->SetBranchAddress("Piplus_Hlt1Global_TOS", &Piplus_Hlt1Global_TOS, &b_Piplus_Hlt1Global_TOS);
   fChain->SetBranchAddress("Piplus_Hlt1Phys_Dec", &Piplus_Hlt1Phys_Dec, &b_Piplus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Piplus_Hlt1Phys_TIS", &Piplus_Hlt1Phys_TIS, &b_Piplus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Piplus_Hlt1Phys_TOS", &Piplus_Hlt1Phys_TOS, &b_Piplus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2Global_Dec", &Piplus_Hlt2Global_Dec, &b_Piplus_Hlt2Global_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2Global_TIS", &Piplus_Hlt2Global_TIS, &b_Piplus_Hlt2Global_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2Global_TOS", &Piplus_Hlt2Global_TOS, &b_Piplus_Hlt2Global_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2Phys_Dec", &Piplus_Hlt2Phys_Dec, &b_Piplus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2Phys_TIS", &Piplus_Hlt2Phys_TIS, &b_Piplus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2Phys_TOS", &Piplus_Hlt2Phys_TOS, &b_Piplus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Piplus_StrippingGlobal_Dec", &Piplus_StrippingGlobal_Dec, &b_Piplus_StrippingGlobal_Dec);
   fChain->SetBranchAddress("Piplus_StrippingGlobal_TIS", &Piplus_StrippingGlobal_TIS, &b_Piplus_StrippingGlobal_TIS);
   fChain->SetBranchAddress("Piplus_StrippingGlobal_TOS", &Piplus_StrippingGlobal_TOS, &b_Piplus_StrippingGlobal_TOS);
   fChain->SetBranchAddress("Piplus_L0HadronDecision_Dec", &Piplus_L0HadronDecision_Dec, &b_Piplus_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Piplus_L0HadronDecision_TIS", &Piplus_L0HadronDecision_TIS, &b_Piplus_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Piplus_L0HadronDecision_TOS", &Piplus_L0HadronDecision_TOS, &b_Piplus_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Piplus_L0MuonDecision_Dec", &Piplus_L0MuonDecision_Dec, &b_Piplus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Piplus_L0MuonDecision_TIS", &Piplus_L0MuonDecision_TIS, &b_Piplus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Piplus_L0MuonDecision_TOS", &Piplus_L0MuonDecision_TOS, &b_Piplus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Piplus_L0DiMuonDecision_Dec", &Piplus_L0DiMuonDecision_Dec, &b_Piplus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Piplus_L0DiMuonDecision_TIS", &Piplus_L0DiMuonDecision_TIS, &b_Piplus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Piplus_L0DiMuonDecision_TOS", &Piplus_L0DiMuonDecision_TOS, &b_Piplus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Piplus_L0ElectronDecision_Dec", &Piplus_L0ElectronDecision_Dec, &b_Piplus_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("Piplus_L0ElectronDecision_TIS", &Piplus_L0ElectronDecision_TIS, &b_Piplus_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("Piplus_L0ElectronDecision_TOS", &Piplus_L0ElectronDecision_TOS, &b_Piplus_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("Piplus_L0PhotonDecision_Dec", &Piplus_L0PhotonDecision_Dec, &b_Piplus_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("Piplus_L0PhotonDecision_TIS", &Piplus_L0PhotonDecision_TIS, &b_Piplus_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("Piplus_L0PhotonDecision_TOS", &Piplus_L0PhotonDecision_TOS, &b_Piplus_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt1SingleHadronDecision_Dec", &Piplus_Hlt1SingleHadronDecision_Dec, &b_Piplus_Hlt1SingleHadronDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt1SingleHadronDecision_TIS", &Piplus_Hlt1SingleHadronDecision_TIS, &b_Piplus_Hlt1SingleHadronDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt1SingleHadronDecision_TOS", &Piplus_Hlt1SingleHadronDecision_TOS, &b_Piplus_Hlt1SingleHadronDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt1MBNoBiasDecision_Dec", &Piplus_Hlt1MBNoBiasDecision_Dec, &b_Piplus_Hlt1MBNoBiasDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt1MBNoBiasDecision_TIS", &Piplus_Hlt1MBNoBiasDecision_TIS, &b_Piplus_Hlt1MBNoBiasDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt1MBNoBiasDecision_TOS", &Piplus_Hlt1MBNoBiasDecision_TOS, &b_Piplus_Hlt1MBNoBiasDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt1DiHadronDecision_Dec", &Piplus_Hlt1DiHadronDecision_Dec, &b_Piplus_Hlt1DiHadronDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt1DiHadronDecision_TIS", &Piplus_Hlt1DiHadronDecision_TIS, &b_Piplus_Hlt1DiHadronDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt1DiHadronDecision_TOS", &Piplus_Hlt1DiHadronDecision_TOS, &b_Piplus_Hlt1DiHadronDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt1L0AnyDecision_Dec", &Piplus_Hlt1L0AnyDecision_Dec, &b_Piplus_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt1L0AnyDecision_TIS", &Piplus_Hlt1L0AnyDecision_TIS, &b_Piplus_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt1L0AnyDecision_TOS", &Piplus_Hlt1L0AnyDecision_TOS, &b_Piplus_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt1TrackAllL0Decision_Dec", &Piplus_Hlt1TrackAllL0Decision_Dec, &b_Piplus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt1TrackAllL0Decision_TIS", &Piplus_Hlt1TrackAllL0Decision_TIS, &b_Piplus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt1TrackAllL0Decision_TOS", &Piplus_Hlt1TrackAllL0Decision_TOS, &b_Piplus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2TopoOSTF4BodyDecision_Dec", &Piplus_Hlt2TopoOSTF4BodyDecision_Dec, &b_Piplus_Hlt2TopoOSTF4BodyDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2TopoOSTF4BodyDecision_TIS", &Piplus_Hlt2TopoOSTF4BodyDecision_TIS, &b_Piplus_Hlt2TopoOSTF4BodyDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2TopoOSTF4BodyDecision_TOS", &Piplus_Hlt2TopoOSTF4BodyDecision_TOS, &b_Piplus_Hlt2TopoOSTF4BodyDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2IncPhiDecision_Dec", &Piplus_Hlt2IncPhiDecision_Dec, &b_Piplus_Hlt2IncPhiDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2IncPhiDecision_TIS", &Piplus_Hlt2IncPhiDecision_TIS, &b_Piplus_Hlt2IncPhiDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2IncPhiDecision_TOS", &Piplus_Hlt2IncPhiDecision_TOS, &b_Piplus_Hlt2IncPhiDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo4BodySimpleDecision_Dec", &Piplus_Hlt2Topo4BodySimpleDecision_Dec, &b_Piplus_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2Topo4BodySimpleDecision_TIS", &Piplus_Hlt2Topo4BodySimpleDecision_TIS, &b_Piplus_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo4BodySimpleDecision_TOS", &Piplus_Hlt2Topo4BodySimpleDecision_TOS, &b_Piplus_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo3BodySimpleDecision_Dec", &Piplus_Hlt2Topo3BodySimpleDecision_Dec, &b_Piplus_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2Topo3BodySimpleDecision_TIS", &Piplus_Hlt2Topo3BodySimpleDecision_TIS, &b_Piplus_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo3BodySimpleDecision_TOS", &Piplus_Hlt2Topo3BodySimpleDecision_TOS, &b_Piplus_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo3BodyBBDTDecision_Dec", &Piplus_Hlt2Topo3BodyBBDTDecision_Dec, &b_Piplus_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2Topo3BodyBBDTDecision_TIS", &Piplus_Hlt2Topo3BodyBBDTDecision_TIS, &b_Piplus_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo3BodyBBDTDecision_TOS", &Piplus_Hlt2Topo3BodyBBDTDecision_TOS, &b_Piplus_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo2BodySimpleDecision_Dec", &Piplus_Hlt2Topo2BodySimpleDecision_Dec, &b_Piplus_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2Topo2BodySimpleDecision_TIS", &Piplus_Hlt2Topo2BodySimpleDecision_TIS, &b_Piplus_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo2BodySimpleDecision_TOS", &Piplus_Hlt2Topo2BodySimpleDecision_TOS, &b_Piplus_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo2BodyBBDTDecision_Dec", &Piplus_Hlt2Topo2BodyBBDTDecision_Dec, &b_Piplus_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2Topo2BodyBBDTDecision_TIS", &Piplus_Hlt2Topo2BodyBBDTDecision_TIS, &b_Piplus_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo2BodyBBDTDecision_TOS", &Piplus_Hlt2Topo2BodyBBDTDecision_TOS, &b_Piplus_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo4BodyBBDTDecision_Dec", &Piplus_Hlt2Topo4BodyBBDTDecision_Dec, &b_Piplus_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2Topo4BodyBBDTDecision_TIS", &Piplus_Hlt2Topo4BodyBBDTDecision_TIS, &b_Piplus_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2Topo4BodyBBDTDecision_TOS", &Piplus_Hlt2Topo4BodyBBDTDecision_TOS, &b_Piplus_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2TopoMu4BodyBBDTDecision_Dec", &Piplus_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_Piplus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2TopoMu4BodyBBDTDecision_TIS", &Piplus_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_Piplus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2TopoMu4BodyBBDTDecision_TOS", &Piplus_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_Piplus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2IncPhiSidebandsDecision_Dec", &Piplus_Hlt2IncPhiSidebandsDecision_Dec, &b_Piplus_Hlt2IncPhiSidebandsDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2IncPhiSidebandsDecision_TIS", &Piplus_Hlt2IncPhiSidebandsDecision_TIS, &b_Piplus_Hlt2IncPhiSidebandsDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2IncPhiSidebandsDecision_TOS", &Piplus_Hlt2IncPhiSidebandsDecision_TOS, &b_Piplus_Hlt2IncPhiSidebandsDecision_TOS);
   fChain->SetBranchAddress("Piplus_Hlt2B2HHDecision_Dec", &Piplus_Hlt2B2HHDecision_Dec, &b_Piplus_Hlt2B2HHDecision_Dec);
   fChain->SetBranchAddress("Piplus_Hlt2B2HHDecision_TIS", &Piplus_Hlt2B2HHDecision_TIS, &b_Piplus_Hlt2B2HHDecision_TIS);
   fChain->SetBranchAddress("Piplus_Hlt2B2HHDecision_TOS", &Piplus_Hlt2B2HHDecision_TOS, &b_Piplus_Hlt2B2HHDecision_TOS);
   fChain->SetBranchAddress("Piplus_TRACK_Type", &Piplus_TRACK_Type, &b_Piplus_TRACK_Type);
   fChain->SetBranchAddress("Piplus_TRACK_Key", &Piplus_TRACK_Key, &b_Piplus_TRACK_Key);
   fChain->SetBranchAddress("Piplus_TRACK_CHI2NDOF", &Piplus_TRACK_CHI2NDOF, &b_Piplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Piplus_TRACK_PCHI2", &Piplus_TRACK_PCHI2, &b_Piplus_TRACK_PCHI2);
   fChain->SetBranchAddress("Piplus_TRACK_MatchCHI2", &Piplus_TRACK_MatchCHI2, &b_Piplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Piplus_TRACK_GhostProb", &Piplus_TRACK_GhostProb, &b_Piplus_TRACK_GhostProb);
   fChain->SetBranchAddress("Piplus_TRACK_CloneDist", &Piplus_TRACK_CloneDist, &b_Piplus_TRACK_CloneDist);
   fChain->SetBranchAddress("Piplus_TRACK_Likelihood", &Piplus_TRACK_Likelihood, &b_Piplus_TRACK_Likelihood);
   fChain->SetBranchAddress("Piplus_NOPARTWITHINDCHI2WDW", &Piplus_NOPARTWITHINDCHI2WDW, &b_Piplus_NOPARTWITHINDCHI2WDW);
   fChain->SetBranchAddress("Piplus_NOPARTWITHINCHI2WDW", &Piplus_NOPARTWITHINCHI2WDW, &b_Piplus_NOPARTWITHINCHI2WDW);
   fChain->SetBranchAddress("Piplus_SMALLESTCHI2", &Piplus_SMALLESTCHI2, &b_Piplus_SMALLESTCHI2);
   fChain->SetBranchAddress("Piplus_SMALLESTDELTACHI2", &Piplus_SMALLESTDELTACHI2, &b_Piplus_SMALLESTDELTACHI2);
   fChain->SetBranchAddress("Kminus_CosTheta", &Kminus_CosTheta, &b_Kminus_CosTheta);
   fChain->SetBranchAddress("Kminus_OWNPV_X", &Kminus_OWNPV_X, &b_Kminus_OWNPV_X);
   fChain->SetBranchAddress("Kminus_OWNPV_Y", &Kminus_OWNPV_Y, &b_Kminus_OWNPV_Y);
   fChain->SetBranchAddress("Kminus_OWNPV_Z", &Kminus_OWNPV_Z, &b_Kminus_OWNPV_Z);
   fChain->SetBranchAddress("Kminus_OWNPV_XERR", &Kminus_OWNPV_XERR, &b_Kminus_OWNPV_XERR);
   fChain->SetBranchAddress("Kminus_OWNPV_YERR", &Kminus_OWNPV_YERR, &b_Kminus_OWNPV_YERR);
   fChain->SetBranchAddress("Kminus_OWNPV_ZERR", &Kminus_OWNPV_ZERR, &b_Kminus_OWNPV_ZERR);
   fChain->SetBranchAddress("Kminus_OWNPV_CHI2", &Kminus_OWNPV_CHI2, &b_Kminus_OWNPV_CHI2);
   fChain->SetBranchAddress("Kminus_OWNPV_NDOF", &Kminus_OWNPV_NDOF, &b_Kminus_OWNPV_NDOF);
   fChain->SetBranchAddress("Kminus_OWNPV_COV_", Kminus_OWNPV_COV_, &b_Kminus_OWNPV_COV_);
   fChain->SetBranchAddress("Kminus_IP_OWNPV", &Kminus_IP_OWNPV, &b_Kminus_IP_OWNPV);
   fChain->SetBranchAddress("Kminus_IPCHI2_OWNPV", &Kminus_IPCHI2_OWNPV, &b_Kminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kminus_ORIVX_X", &Kminus_ORIVX_X, &b_Kminus_ORIVX_X);
   fChain->SetBranchAddress("Kminus_ORIVX_Y", &Kminus_ORIVX_Y, &b_Kminus_ORIVX_Y);
   fChain->SetBranchAddress("Kminus_ORIVX_Z", &Kminus_ORIVX_Z, &b_Kminus_ORIVX_Z);
   fChain->SetBranchAddress("Kminus_ORIVX_XERR", &Kminus_ORIVX_XERR, &b_Kminus_ORIVX_XERR);
   fChain->SetBranchAddress("Kminus_ORIVX_YERR", &Kminus_ORIVX_YERR, &b_Kminus_ORIVX_YERR);
   fChain->SetBranchAddress("Kminus_ORIVX_ZERR", &Kminus_ORIVX_ZERR, &b_Kminus_ORIVX_ZERR);
   fChain->SetBranchAddress("Kminus_ORIVX_CHI2", &Kminus_ORIVX_CHI2, &b_Kminus_ORIVX_CHI2);
   fChain->SetBranchAddress("Kminus_ORIVX_NDOF", &Kminus_ORIVX_NDOF, &b_Kminus_ORIVX_NDOF);
   fChain->SetBranchAddress("Kminus_ORIVX_COV_", Kminus_ORIVX_COV_, &b_Kminus_ORIVX_COV_);
   fChain->SetBranchAddress("Kminus_P", &Kminus_P, &b_Kminus_P);
   fChain->SetBranchAddress("Kminus_PT", &Kminus_PT, &b_Kminus_PT);
   fChain->SetBranchAddress("Kminus_PE", &Kminus_PE, &b_Kminus_PE);
   fChain->SetBranchAddress("Kminus_PX", &Kminus_PX, &b_Kminus_PX);
   fChain->SetBranchAddress("Kminus_PY", &Kminus_PY, &b_Kminus_PY);
   fChain->SetBranchAddress("Kminus_PZ", &Kminus_PZ, &b_Kminus_PZ);
   fChain->SetBranchAddress("Kminus_M", &Kminus_M, &b_Kminus_M);
   fChain->SetBranchAddress("Kminus_L0Calo_HCAL_realET", &Kminus_L0Calo_HCAL_realET, &b_Kminus_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("Kminus_L0Calo_HCAL_xProjection", &Kminus_L0Calo_HCAL_xProjection, &b_Kminus_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("Kminus_L0Calo_HCAL_yProjection", &Kminus_L0Calo_HCAL_yProjection, &b_Kminus_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("Kminus_L0Calo_HCAL_region", &Kminus_L0Calo_HCAL_region, &b_Kminus_L0Calo_HCAL_region);
   fChain->SetBranchAddress("Kminus_TRUEID", &Kminus_TRUEID, &b_Kminus_TRUEID);
   fChain->SetBranchAddress("Kminus_MC_MOTHER_ID", &Kminus_MC_MOTHER_ID, &b_Kminus_MC_MOTHER_ID);
   fChain->SetBranchAddress("Kminus_MC_MOTHER_KEY", &Kminus_MC_MOTHER_KEY, &b_Kminus_MC_MOTHER_KEY);
   fChain->SetBranchAddress("Kminus_MC_GD_MOTHER_ID", &Kminus_MC_GD_MOTHER_ID, &b_Kminus_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kminus_MC_GD_MOTHER_KEY", &Kminus_MC_GD_MOTHER_KEY, &b_Kminus_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kminus_MC_GD_GD_MOTHER_ID", &Kminus_MC_GD_GD_MOTHER_ID, &b_Kminus_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kminus_MC_GD_GD_MOTHER_KEY", &Kminus_MC_GD_GD_MOTHER_KEY, &b_Kminus_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kminus_TRUEP_E", &Kminus_TRUEP_E, &b_Kminus_TRUEP_E);
   fChain->SetBranchAddress("Kminus_TRUEP_X", &Kminus_TRUEP_X, &b_Kminus_TRUEP_X);
   fChain->SetBranchAddress("Kminus_TRUEP_Y", &Kminus_TRUEP_Y, &b_Kminus_TRUEP_Y);
   fChain->SetBranchAddress("Kminus_TRUEP_Z", &Kminus_TRUEP_Z, &b_Kminus_TRUEP_Z);
   fChain->SetBranchAddress("Kminus_TRUEPT", &Kminus_TRUEPT, &b_Kminus_TRUEPT);
   fChain->SetBranchAddress("Kminus_TRUEORIGINVERTEX_X", &Kminus_TRUEORIGINVERTEX_X, &b_Kminus_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("Kminus_TRUEORIGINVERTEX_Y", &Kminus_TRUEORIGINVERTEX_Y, &b_Kminus_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("Kminus_TRUEORIGINVERTEX_Z", &Kminus_TRUEORIGINVERTEX_Z, &b_Kminus_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("Kminus_TRUEENDVERTEX_X", &Kminus_TRUEENDVERTEX_X, &b_Kminus_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("Kminus_TRUEENDVERTEX_Y", &Kminus_TRUEENDVERTEX_Y, &b_Kminus_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("Kminus_TRUEENDVERTEX_Z", &Kminus_TRUEENDVERTEX_Z, &b_Kminus_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("Kminus_TRUEISSTABLE", &Kminus_TRUEISSTABLE, &b_Kminus_TRUEISSTABLE);
   fChain->SetBranchAddress("Kminus_TRUETAU", &Kminus_TRUETAU, &b_Kminus_TRUETAU);
   fChain->SetBranchAddress("Kminus_ThetaL", &Kminus_ThetaL, &b_Kminus_ThetaL);
   fChain->SetBranchAddress("Kminus_ThetaK", &Kminus_ThetaK, &b_Kminus_ThetaK);
   fChain->SetBranchAddress("Kminus_Phi", &Kminus_Phi, &b_Kminus_Phi);
   fChain->SetBranchAddress("Kminus_ThetaTr", &Kminus_ThetaTr, &b_Kminus_ThetaTr);
   fChain->SetBranchAddress("Kminus_PhiTr", &Kminus_PhiTr, &b_Kminus_PhiTr);
   fChain->SetBranchAddress("Kminus_ThetaVtr", &Kminus_ThetaVtr, &b_Kminus_ThetaVtr);
   fChain->SetBranchAddress("Kminus_ID", &Kminus_ID, &b_Kminus_ID);
   fChain->SetBranchAddress("Kminus_PIDe", &Kminus_PIDe, &b_Kminus_PIDe);
   fChain->SetBranchAddress("Kminus_PIDmu", &Kminus_PIDmu, &b_Kminus_PIDmu);
   fChain->SetBranchAddress("Kminus_PIDK", &Kminus_PIDK, &b_Kminus_PIDK);
   fChain->SetBranchAddress("Kminus_PIDp", &Kminus_PIDp, &b_Kminus_PIDp);
   fChain->SetBranchAddress("Kminus_ProbNNe", &Kminus_ProbNNe, &b_Kminus_ProbNNe);
   fChain->SetBranchAddress("Kminus_ProbNNk", &Kminus_ProbNNk, &b_Kminus_ProbNNk);
   fChain->SetBranchAddress("Kminus_ProbNNp", &Kminus_ProbNNp, &b_Kminus_ProbNNp);
   fChain->SetBranchAddress("Kminus_ProbNNpi", &Kminus_ProbNNpi, &b_Kminus_ProbNNpi);
   fChain->SetBranchAddress("Kminus_ProbNNmu", &Kminus_ProbNNmu, &b_Kminus_ProbNNmu);
   fChain->SetBranchAddress("Kminus_ProbNNghost", &Kminus_ProbNNghost, &b_Kminus_ProbNNghost);
   fChain->SetBranchAddress("Kminus_hasMuon", &Kminus_hasMuon, &b_Kminus_hasMuon);
   fChain->SetBranchAddress("Kminus_isMuon", &Kminus_isMuon, &b_Kminus_isMuon);
   fChain->SetBranchAddress("Kminus_hasRich", &Kminus_hasRich, &b_Kminus_hasRich);
   fChain->SetBranchAddress("Kminus_hasCalo", &Kminus_hasCalo, &b_Kminus_hasCalo);
   fChain->SetBranchAddress("Kminus_L0Global_Dec", &Kminus_L0Global_Dec, &b_Kminus_L0Global_Dec);
   fChain->SetBranchAddress("Kminus_L0Global_TIS", &Kminus_L0Global_TIS, &b_Kminus_L0Global_TIS);
   fChain->SetBranchAddress("Kminus_L0Global_TOS", &Kminus_L0Global_TOS, &b_Kminus_L0Global_TOS);
   fChain->SetBranchAddress("Kminus_Hlt1Global_Dec", &Kminus_Hlt1Global_Dec, &b_Kminus_Hlt1Global_Dec);
   fChain->SetBranchAddress("Kminus_Hlt1Global_TIS", &Kminus_Hlt1Global_TIS, &b_Kminus_Hlt1Global_TIS);
   fChain->SetBranchAddress("Kminus_Hlt1Global_TOS", &Kminus_Hlt1Global_TOS, &b_Kminus_Hlt1Global_TOS);
   fChain->SetBranchAddress("Kminus_Hlt1Phys_Dec", &Kminus_Hlt1Phys_Dec, &b_Kminus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Kminus_Hlt1Phys_TIS", &Kminus_Hlt1Phys_TIS, &b_Kminus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Kminus_Hlt1Phys_TOS", &Kminus_Hlt1Phys_TOS, &b_Kminus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2Global_Dec", &Kminus_Hlt2Global_Dec, &b_Kminus_Hlt2Global_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2Global_TIS", &Kminus_Hlt2Global_TIS, &b_Kminus_Hlt2Global_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2Global_TOS", &Kminus_Hlt2Global_TOS, &b_Kminus_Hlt2Global_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2Phys_Dec", &Kminus_Hlt2Phys_Dec, &b_Kminus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2Phys_TIS", &Kminus_Hlt2Phys_TIS, &b_Kminus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2Phys_TOS", &Kminus_Hlt2Phys_TOS, &b_Kminus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Kminus_StrippingGlobal_Dec", &Kminus_StrippingGlobal_Dec, &b_Kminus_StrippingGlobal_Dec);
   fChain->SetBranchAddress("Kminus_StrippingGlobal_TIS", &Kminus_StrippingGlobal_TIS, &b_Kminus_StrippingGlobal_TIS);
   fChain->SetBranchAddress("Kminus_StrippingGlobal_TOS", &Kminus_StrippingGlobal_TOS, &b_Kminus_StrippingGlobal_TOS);
   fChain->SetBranchAddress("Kminus_L0HadronDecision_Dec", &Kminus_L0HadronDecision_Dec, &b_Kminus_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Kminus_L0HadronDecision_TIS", &Kminus_L0HadronDecision_TIS, &b_Kminus_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Kminus_L0HadronDecision_TOS", &Kminus_L0HadronDecision_TOS, &b_Kminus_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Kminus_L0MuonDecision_Dec", &Kminus_L0MuonDecision_Dec, &b_Kminus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Kminus_L0MuonDecision_TIS", &Kminus_L0MuonDecision_TIS, &b_Kminus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Kminus_L0MuonDecision_TOS", &Kminus_L0MuonDecision_TOS, &b_Kminus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Kminus_L0DiMuonDecision_Dec", &Kminus_L0DiMuonDecision_Dec, &b_Kminus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Kminus_L0DiMuonDecision_TIS", &Kminus_L0DiMuonDecision_TIS, &b_Kminus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Kminus_L0DiMuonDecision_TOS", &Kminus_L0DiMuonDecision_TOS, &b_Kminus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Kminus_L0ElectronDecision_Dec", &Kminus_L0ElectronDecision_Dec, &b_Kminus_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("Kminus_L0ElectronDecision_TIS", &Kminus_L0ElectronDecision_TIS, &b_Kminus_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("Kminus_L0ElectronDecision_TOS", &Kminus_L0ElectronDecision_TOS, &b_Kminus_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("Kminus_L0PhotonDecision_Dec", &Kminus_L0PhotonDecision_Dec, &b_Kminus_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("Kminus_L0PhotonDecision_TIS", &Kminus_L0PhotonDecision_TIS, &b_Kminus_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("Kminus_L0PhotonDecision_TOS", &Kminus_L0PhotonDecision_TOS, &b_Kminus_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt1SingleHadronDecision_Dec", &Kminus_Hlt1SingleHadronDecision_Dec, &b_Kminus_Hlt1SingleHadronDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt1SingleHadronDecision_TIS", &Kminus_Hlt1SingleHadronDecision_TIS, &b_Kminus_Hlt1SingleHadronDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt1SingleHadronDecision_TOS", &Kminus_Hlt1SingleHadronDecision_TOS, &b_Kminus_Hlt1SingleHadronDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt1MBNoBiasDecision_Dec", &Kminus_Hlt1MBNoBiasDecision_Dec, &b_Kminus_Hlt1MBNoBiasDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt1MBNoBiasDecision_TIS", &Kminus_Hlt1MBNoBiasDecision_TIS, &b_Kminus_Hlt1MBNoBiasDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt1MBNoBiasDecision_TOS", &Kminus_Hlt1MBNoBiasDecision_TOS, &b_Kminus_Hlt1MBNoBiasDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt1DiHadronDecision_Dec", &Kminus_Hlt1DiHadronDecision_Dec, &b_Kminus_Hlt1DiHadronDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt1DiHadronDecision_TIS", &Kminus_Hlt1DiHadronDecision_TIS, &b_Kminus_Hlt1DiHadronDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt1DiHadronDecision_TOS", &Kminus_Hlt1DiHadronDecision_TOS, &b_Kminus_Hlt1DiHadronDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt1L0AnyDecision_Dec", &Kminus_Hlt1L0AnyDecision_Dec, &b_Kminus_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt1L0AnyDecision_TIS", &Kminus_Hlt1L0AnyDecision_TIS, &b_Kminus_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt1L0AnyDecision_TOS", &Kminus_Hlt1L0AnyDecision_TOS, &b_Kminus_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt1TrackAllL0Decision_Dec", &Kminus_Hlt1TrackAllL0Decision_Dec, &b_Kminus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt1TrackAllL0Decision_TIS", &Kminus_Hlt1TrackAllL0Decision_TIS, &b_Kminus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt1TrackAllL0Decision_TOS", &Kminus_Hlt1TrackAllL0Decision_TOS, &b_Kminus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2TopoOSTF4BodyDecision_Dec", &Kminus_Hlt2TopoOSTF4BodyDecision_Dec, &b_Kminus_Hlt2TopoOSTF4BodyDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2TopoOSTF4BodyDecision_TIS", &Kminus_Hlt2TopoOSTF4BodyDecision_TIS, &b_Kminus_Hlt2TopoOSTF4BodyDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2TopoOSTF4BodyDecision_TOS", &Kminus_Hlt2TopoOSTF4BodyDecision_TOS, &b_Kminus_Hlt2TopoOSTF4BodyDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2IncPhiDecision_Dec", &Kminus_Hlt2IncPhiDecision_Dec, &b_Kminus_Hlt2IncPhiDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2IncPhiDecision_TIS", &Kminus_Hlt2IncPhiDecision_TIS, &b_Kminus_Hlt2IncPhiDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2IncPhiDecision_TOS", &Kminus_Hlt2IncPhiDecision_TOS, &b_Kminus_Hlt2IncPhiDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo4BodySimpleDecision_Dec", &Kminus_Hlt2Topo4BodySimpleDecision_Dec, &b_Kminus_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2Topo4BodySimpleDecision_TIS", &Kminus_Hlt2Topo4BodySimpleDecision_TIS, &b_Kminus_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo4BodySimpleDecision_TOS", &Kminus_Hlt2Topo4BodySimpleDecision_TOS, &b_Kminus_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo3BodySimpleDecision_Dec", &Kminus_Hlt2Topo3BodySimpleDecision_Dec, &b_Kminus_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2Topo3BodySimpleDecision_TIS", &Kminus_Hlt2Topo3BodySimpleDecision_TIS, &b_Kminus_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo3BodySimpleDecision_TOS", &Kminus_Hlt2Topo3BodySimpleDecision_TOS, &b_Kminus_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo3BodyBBDTDecision_Dec", &Kminus_Hlt2Topo3BodyBBDTDecision_Dec, &b_Kminus_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2Topo3BodyBBDTDecision_TIS", &Kminus_Hlt2Topo3BodyBBDTDecision_TIS, &b_Kminus_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo3BodyBBDTDecision_TOS", &Kminus_Hlt2Topo3BodyBBDTDecision_TOS, &b_Kminus_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo2BodySimpleDecision_Dec", &Kminus_Hlt2Topo2BodySimpleDecision_Dec, &b_Kminus_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2Topo2BodySimpleDecision_TIS", &Kminus_Hlt2Topo2BodySimpleDecision_TIS, &b_Kminus_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo2BodySimpleDecision_TOS", &Kminus_Hlt2Topo2BodySimpleDecision_TOS, &b_Kminus_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo2BodyBBDTDecision_Dec", &Kminus_Hlt2Topo2BodyBBDTDecision_Dec, &b_Kminus_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2Topo2BodyBBDTDecision_TIS", &Kminus_Hlt2Topo2BodyBBDTDecision_TIS, &b_Kminus_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo2BodyBBDTDecision_TOS", &Kminus_Hlt2Topo2BodyBBDTDecision_TOS, &b_Kminus_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo4BodyBBDTDecision_Dec", &Kminus_Hlt2Topo4BodyBBDTDecision_Dec, &b_Kminus_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2Topo4BodyBBDTDecision_TIS", &Kminus_Hlt2Topo4BodyBBDTDecision_TIS, &b_Kminus_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2Topo4BodyBBDTDecision_TOS", &Kminus_Hlt2Topo4BodyBBDTDecision_TOS, &b_Kminus_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2TopoMu4BodyBBDTDecision_Dec", &Kminus_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_Kminus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2TopoMu4BodyBBDTDecision_TIS", &Kminus_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_Kminus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2TopoMu4BodyBBDTDecision_TOS", &Kminus_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_Kminus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2IncPhiSidebandsDecision_Dec", &Kminus_Hlt2IncPhiSidebandsDecision_Dec, &b_Kminus_Hlt2IncPhiSidebandsDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2IncPhiSidebandsDecision_TIS", &Kminus_Hlt2IncPhiSidebandsDecision_TIS, &b_Kminus_Hlt2IncPhiSidebandsDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2IncPhiSidebandsDecision_TOS", &Kminus_Hlt2IncPhiSidebandsDecision_TOS, &b_Kminus_Hlt2IncPhiSidebandsDecision_TOS);
   fChain->SetBranchAddress("Kminus_Hlt2B2HHDecision_Dec", &Kminus_Hlt2B2HHDecision_Dec, &b_Kminus_Hlt2B2HHDecision_Dec);
   fChain->SetBranchAddress("Kminus_Hlt2B2HHDecision_TIS", &Kminus_Hlt2B2HHDecision_TIS, &b_Kminus_Hlt2B2HHDecision_TIS);
   fChain->SetBranchAddress("Kminus_Hlt2B2HHDecision_TOS", &Kminus_Hlt2B2HHDecision_TOS, &b_Kminus_Hlt2B2HHDecision_TOS);
   fChain->SetBranchAddress("Kminus_TRACK_Type", &Kminus_TRACK_Type, &b_Kminus_TRACK_Type);
   fChain->SetBranchAddress("Kminus_TRACK_Key", &Kminus_TRACK_Key, &b_Kminus_TRACK_Key);
   fChain->SetBranchAddress("Kminus_TRACK_CHI2NDOF", &Kminus_TRACK_CHI2NDOF, &b_Kminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kminus_TRACK_PCHI2", &Kminus_TRACK_PCHI2, &b_Kminus_TRACK_PCHI2);
   fChain->SetBranchAddress("Kminus_TRACK_MatchCHI2", &Kminus_TRACK_MatchCHI2, &b_Kminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Kminus_TRACK_GhostProb", &Kminus_TRACK_GhostProb, &b_Kminus_TRACK_GhostProb);
   fChain->SetBranchAddress("Kminus_TRACK_CloneDist", &Kminus_TRACK_CloneDist, &b_Kminus_TRACK_CloneDist);
   fChain->SetBranchAddress("Kminus_TRACK_Likelihood", &Kminus_TRACK_Likelihood, &b_Kminus_TRACK_Likelihood);
   fChain->SetBranchAddress("Kminus_NOPARTWITHINDCHI2WDW", &Kminus_NOPARTWITHINDCHI2WDW, &b_Kminus_NOPARTWITHINDCHI2WDW);
   fChain->SetBranchAddress("Kminus_NOPARTWITHINCHI2WDW", &Kminus_NOPARTWITHINCHI2WDW, &b_Kminus_NOPARTWITHINCHI2WDW);
   fChain->SetBranchAddress("Kminus_SMALLESTCHI2", &Kminus_SMALLESTCHI2, &b_Kminus_SMALLESTCHI2);
   fChain->SetBranchAddress("Kminus_SMALLESTDELTACHI2", &Kminus_SMALLESTDELTACHI2, &b_Kminus_SMALLESTDELTACHI2);
   fChain->SetBranchAddress("Kst_CosTheta", &Kst_CosTheta, &b_Kst_CosTheta);
   fChain->SetBranchAddress("Kst_ENDVERTEX_X", &Kst_ENDVERTEX_X, &b_Kst_ENDVERTEX_X);
   fChain->SetBranchAddress("Kst_ENDVERTEX_Y", &Kst_ENDVERTEX_Y, &b_Kst_ENDVERTEX_Y);
   fChain->SetBranchAddress("Kst_ENDVERTEX_Z", &Kst_ENDVERTEX_Z, &b_Kst_ENDVERTEX_Z);
   fChain->SetBranchAddress("Kst_ENDVERTEX_XERR", &Kst_ENDVERTEX_XERR, &b_Kst_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Kst_ENDVERTEX_YERR", &Kst_ENDVERTEX_YERR, &b_Kst_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Kst_ENDVERTEX_ZERR", &Kst_ENDVERTEX_ZERR, &b_Kst_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Kst_ENDVERTEX_CHI2", &Kst_ENDVERTEX_CHI2, &b_Kst_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Kst_ENDVERTEX_NDOF", &Kst_ENDVERTEX_NDOF, &b_Kst_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Kst_ENDVERTEX_COV_", Kst_ENDVERTEX_COV_, &b_Kst_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Kst_OWNPV_X", &Kst_OWNPV_X, &b_Kst_OWNPV_X);
   fChain->SetBranchAddress("Kst_OWNPV_Y", &Kst_OWNPV_Y, &b_Kst_OWNPV_Y);
   fChain->SetBranchAddress("Kst_OWNPV_Z", &Kst_OWNPV_Z, &b_Kst_OWNPV_Z);
   fChain->SetBranchAddress("Kst_OWNPV_XERR", &Kst_OWNPV_XERR, &b_Kst_OWNPV_XERR);
   fChain->SetBranchAddress("Kst_OWNPV_YERR", &Kst_OWNPV_YERR, &b_Kst_OWNPV_YERR);
   fChain->SetBranchAddress("Kst_OWNPV_ZERR", &Kst_OWNPV_ZERR, &b_Kst_OWNPV_ZERR);
   fChain->SetBranchAddress("Kst_OWNPV_CHI2", &Kst_OWNPV_CHI2, &b_Kst_OWNPV_CHI2);
   fChain->SetBranchAddress("Kst_OWNPV_NDOF", &Kst_OWNPV_NDOF, &b_Kst_OWNPV_NDOF);
   fChain->SetBranchAddress("Kst_OWNPV_COV_", Kst_OWNPV_COV_, &b_Kst_OWNPV_COV_);
   fChain->SetBranchAddress("Kst_IP_OWNPV", &Kst_IP_OWNPV, &b_Kst_IP_OWNPV);
   fChain->SetBranchAddress("Kst_IPCHI2_OWNPV", &Kst_IPCHI2_OWNPV, &b_Kst_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kst_FD_OWNPV", &Kst_FD_OWNPV, &b_Kst_FD_OWNPV);
   fChain->SetBranchAddress("Kst_FDCHI2_OWNPV", &Kst_FDCHI2_OWNPV, &b_Kst_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Kst_DIRA_OWNPV", &Kst_DIRA_OWNPV, &b_Kst_DIRA_OWNPV);
   fChain->SetBranchAddress("Kst_ORIVX_X", &Kst_ORIVX_X, &b_Kst_ORIVX_X);
   fChain->SetBranchAddress("Kst_ORIVX_Y", &Kst_ORIVX_Y, &b_Kst_ORIVX_Y);
   fChain->SetBranchAddress("Kst_ORIVX_Z", &Kst_ORIVX_Z, &b_Kst_ORIVX_Z);
   fChain->SetBranchAddress("Kst_ORIVX_XERR", &Kst_ORIVX_XERR, &b_Kst_ORIVX_XERR);
   fChain->SetBranchAddress("Kst_ORIVX_YERR", &Kst_ORIVX_YERR, &b_Kst_ORIVX_YERR);
   fChain->SetBranchAddress("Kst_ORIVX_ZERR", &Kst_ORIVX_ZERR, &b_Kst_ORIVX_ZERR);
   fChain->SetBranchAddress("Kst_ORIVX_CHI2", &Kst_ORIVX_CHI2, &b_Kst_ORIVX_CHI2);
   fChain->SetBranchAddress("Kst_ORIVX_NDOF", &Kst_ORIVX_NDOF, &b_Kst_ORIVX_NDOF);
   fChain->SetBranchAddress("Kst_ORIVX_COV_", Kst_ORIVX_COV_, &b_Kst_ORIVX_COV_);
   fChain->SetBranchAddress("Kst_FD_ORIVX", &Kst_FD_ORIVX, &b_Kst_FD_ORIVX);
   fChain->SetBranchAddress("Kst_FDCHI2_ORIVX", &Kst_FDCHI2_ORIVX, &b_Kst_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Kst_DIRA_ORIVX", &Kst_DIRA_ORIVX, &b_Kst_DIRA_ORIVX);
   fChain->SetBranchAddress("Kst_P", &Kst_P, &b_Kst_P);
   fChain->SetBranchAddress("Kst_PT", &Kst_PT, &b_Kst_PT);
   fChain->SetBranchAddress("Kst_PE", &Kst_PE, &b_Kst_PE);
   fChain->SetBranchAddress("Kst_PX", &Kst_PX, &b_Kst_PX);
   fChain->SetBranchAddress("Kst_PY", &Kst_PY, &b_Kst_PY);
   fChain->SetBranchAddress("Kst_PZ", &Kst_PZ, &b_Kst_PZ);
   fChain->SetBranchAddress("Kst_MM", &Kst_MM, &b_Kst_MM);
   fChain->SetBranchAddress("Kst_MMERR", &Kst_MMERR, &b_Kst_MMERR);
   fChain->SetBranchAddress("Kst_M", &Kst_M, &b_Kst_M);
   fChain->SetBranchAddress("Kst_BKGCAT", &Kst_BKGCAT, &b_Kst_BKGCAT);
   fChain->SetBranchAddress("Kst_TRUEID", &Kst_TRUEID, &b_Kst_TRUEID);
   fChain->SetBranchAddress("Kst_MC_MOTHER_ID", &Kst_MC_MOTHER_ID, &b_Kst_MC_MOTHER_ID);
   fChain->SetBranchAddress("Kst_MC_MOTHER_KEY", &Kst_MC_MOTHER_KEY, &b_Kst_MC_MOTHER_KEY);
   fChain->SetBranchAddress("Kst_MC_GD_MOTHER_ID", &Kst_MC_GD_MOTHER_ID, &b_Kst_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kst_MC_GD_MOTHER_KEY", &Kst_MC_GD_MOTHER_KEY, &b_Kst_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kst_MC_GD_GD_MOTHER_ID", &Kst_MC_GD_GD_MOTHER_ID, &b_Kst_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kst_MC_GD_GD_MOTHER_KEY", &Kst_MC_GD_GD_MOTHER_KEY, &b_Kst_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kst_TRUEP_E", &Kst_TRUEP_E, &b_Kst_TRUEP_E);
   fChain->SetBranchAddress("Kst_TRUEP_X", &Kst_TRUEP_X, &b_Kst_TRUEP_X);
   fChain->SetBranchAddress("Kst_TRUEP_Y", &Kst_TRUEP_Y, &b_Kst_TRUEP_Y);
   fChain->SetBranchAddress("Kst_TRUEP_Z", &Kst_TRUEP_Z, &b_Kst_TRUEP_Z);
   fChain->SetBranchAddress("Kst_TRUEPT", &Kst_TRUEPT, &b_Kst_TRUEPT);
   fChain->SetBranchAddress("Kst_TRUEORIGINVERTEX_X", &Kst_TRUEORIGINVERTEX_X, &b_Kst_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("Kst_TRUEORIGINVERTEX_Y", &Kst_TRUEORIGINVERTEX_Y, &b_Kst_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("Kst_TRUEORIGINVERTEX_Z", &Kst_TRUEORIGINVERTEX_Z, &b_Kst_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("Kst_TRUEENDVERTEX_X", &Kst_TRUEENDVERTEX_X, &b_Kst_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("Kst_TRUEENDVERTEX_Y", &Kst_TRUEENDVERTEX_Y, &b_Kst_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("Kst_TRUEENDVERTEX_Z", &Kst_TRUEENDVERTEX_Z, &b_Kst_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("Kst_TRUEISSTABLE", &Kst_TRUEISSTABLE, &b_Kst_TRUEISSTABLE);
   fChain->SetBranchAddress("Kst_TRUETAU", &Kst_TRUETAU, &b_Kst_TRUETAU);
   fChain->SetBranchAddress("Kst_ThetaL", &Kst_ThetaL, &b_Kst_ThetaL);
   fChain->SetBranchAddress("Kst_ThetaK", &Kst_ThetaK, &b_Kst_ThetaK);
   fChain->SetBranchAddress("Kst_Phi", &Kst_Phi, &b_Kst_Phi);
   fChain->SetBranchAddress("Kst_ThetaTr", &Kst_ThetaTr, &b_Kst_ThetaTr);
   fChain->SetBranchAddress("Kst_PhiTr", &Kst_PhiTr, &b_Kst_PhiTr);
   fChain->SetBranchAddress("Kst_ThetaVtr", &Kst_ThetaVtr, &b_Kst_ThetaVtr);
   fChain->SetBranchAddress("Kst_ID", &Kst_ID, &b_Kst_ID);
   fChain->SetBranchAddress("Kst_TAU", &Kst_TAU, &b_Kst_TAU);
   fChain->SetBranchAddress("Kst_TAUERR", &Kst_TAUERR, &b_Kst_TAUERR);
   fChain->SetBranchAddress("Kst_TAUCHI2", &Kst_TAUCHI2, &b_Kst_TAUCHI2);
   fChain->SetBranchAddress("Kst_L0Global_Dec", &Kst_L0Global_Dec, &b_Kst_L0Global_Dec);
   fChain->SetBranchAddress("Kst_L0Global_TIS", &Kst_L0Global_TIS, &b_Kst_L0Global_TIS);
   fChain->SetBranchAddress("Kst_L0Global_TOS", &Kst_L0Global_TOS, &b_Kst_L0Global_TOS);
   fChain->SetBranchAddress("Kst_Hlt1Global_Dec", &Kst_Hlt1Global_Dec, &b_Kst_Hlt1Global_Dec);
   fChain->SetBranchAddress("Kst_Hlt1Global_TIS", &Kst_Hlt1Global_TIS, &b_Kst_Hlt1Global_TIS);
   fChain->SetBranchAddress("Kst_Hlt1Global_TOS", &Kst_Hlt1Global_TOS, &b_Kst_Hlt1Global_TOS);
   fChain->SetBranchAddress("Kst_Hlt1Phys_Dec", &Kst_Hlt1Phys_Dec, &b_Kst_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Kst_Hlt1Phys_TIS", &Kst_Hlt1Phys_TIS, &b_Kst_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Kst_Hlt1Phys_TOS", &Kst_Hlt1Phys_TOS, &b_Kst_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Kst_Hlt2Global_Dec", &Kst_Hlt2Global_Dec, &b_Kst_Hlt2Global_Dec);
   fChain->SetBranchAddress("Kst_Hlt2Global_TIS", &Kst_Hlt2Global_TIS, &b_Kst_Hlt2Global_TIS);
   fChain->SetBranchAddress("Kst_Hlt2Global_TOS", &Kst_Hlt2Global_TOS, &b_Kst_Hlt2Global_TOS);
   fChain->SetBranchAddress("Kst_Hlt2Phys_Dec", &Kst_Hlt2Phys_Dec, &b_Kst_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Kst_Hlt2Phys_TIS", &Kst_Hlt2Phys_TIS, &b_Kst_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Kst_Hlt2Phys_TOS", &Kst_Hlt2Phys_TOS, &b_Kst_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Kst_StrippingGlobal_Dec", &Kst_StrippingGlobal_Dec, &b_Kst_StrippingGlobal_Dec);
   fChain->SetBranchAddress("Kst_StrippingGlobal_TIS", &Kst_StrippingGlobal_TIS, &b_Kst_StrippingGlobal_TIS);
   fChain->SetBranchAddress("Kst_StrippingGlobal_TOS", &Kst_StrippingGlobal_TOS, &b_Kst_StrippingGlobal_TOS);
   fChain->SetBranchAddress("Kst_L0HadronDecision_Dec", &Kst_L0HadronDecision_Dec, &b_Kst_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Kst_L0HadronDecision_TIS", &Kst_L0HadronDecision_TIS, &b_Kst_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Kst_L0HadronDecision_TOS", &Kst_L0HadronDecision_TOS, &b_Kst_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Kst_L0MuonDecision_Dec", &Kst_L0MuonDecision_Dec, &b_Kst_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Kst_L0MuonDecision_TIS", &Kst_L0MuonDecision_TIS, &b_Kst_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Kst_L0MuonDecision_TOS", &Kst_L0MuonDecision_TOS, &b_Kst_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Kst_L0DiMuonDecision_Dec", &Kst_L0DiMuonDecision_Dec, &b_Kst_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Kst_L0DiMuonDecision_TIS", &Kst_L0DiMuonDecision_TIS, &b_Kst_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Kst_L0DiMuonDecision_TOS", &Kst_L0DiMuonDecision_TOS, &b_Kst_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Kst_L0ElectronDecision_Dec", &Kst_L0ElectronDecision_Dec, &b_Kst_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("Kst_L0ElectronDecision_TIS", &Kst_L0ElectronDecision_TIS, &b_Kst_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("Kst_L0ElectronDecision_TOS", &Kst_L0ElectronDecision_TOS, &b_Kst_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("Kst_L0PhotonDecision_Dec", &Kst_L0PhotonDecision_Dec, &b_Kst_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("Kst_L0PhotonDecision_TIS", &Kst_L0PhotonDecision_TIS, &b_Kst_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("Kst_L0PhotonDecision_TOS", &Kst_L0PhotonDecision_TOS, &b_Kst_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt1SingleHadronDecision_Dec", &Kst_Hlt1SingleHadronDecision_Dec, &b_Kst_Hlt1SingleHadronDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt1SingleHadronDecision_TIS", &Kst_Hlt1SingleHadronDecision_TIS, &b_Kst_Hlt1SingleHadronDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt1SingleHadronDecision_TOS", &Kst_Hlt1SingleHadronDecision_TOS, &b_Kst_Hlt1SingleHadronDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt1MBNoBiasDecision_Dec", &Kst_Hlt1MBNoBiasDecision_Dec, &b_Kst_Hlt1MBNoBiasDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt1MBNoBiasDecision_TIS", &Kst_Hlt1MBNoBiasDecision_TIS, &b_Kst_Hlt1MBNoBiasDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt1MBNoBiasDecision_TOS", &Kst_Hlt1MBNoBiasDecision_TOS, &b_Kst_Hlt1MBNoBiasDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt1DiHadronDecision_Dec", &Kst_Hlt1DiHadronDecision_Dec, &b_Kst_Hlt1DiHadronDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt1DiHadronDecision_TIS", &Kst_Hlt1DiHadronDecision_TIS, &b_Kst_Hlt1DiHadronDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt1DiHadronDecision_TOS", &Kst_Hlt1DiHadronDecision_TOS, &b_Kst_Hlt1DiHadronDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt1L0AnyDecision_Dec", &Kst_Hlt1L0AnyDecision_Dec, &b_Kst_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt1L0AnyDecision_TIS", &Kst_Hlt1L0AnyDecision_TIS, &b_Kst_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt1L0AnyDecision_TOS", &Kst_Hlt1L0AnyDecision_TOS, &b_Kst_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt1TrackAllL0Decision_Dec", &Kst_Hlt1TrackAllL0Decision_Dec, &b_Kst_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Kst_Hlt1TrackAllL0Decision_TIS", &Kst_Hlt1TrackAllL0Decision_TIS, &b_Kst_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Kst_Hlt1TrackAllL0Decision_TOS", &Kst_Hlt1TrackAllL0Decision_TOS, &b_Kst_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2TopoOSTF4BodyDecision_Dec", &Kst_Hlt2TopoOSTF4BodyDecision_Dec, &b_Kst_Hlt2TopoOSTF4BodyDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2TopoOSTF4BodyDecision_TIS", &Kst_Hlt2TopoOSTF4BodyDecision_TIS, &b_Kst_Hlt2TopoOSTF4BodyDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2TopoOSTF4BodyDecision_TOS", &Kst_Hlt2TopoOSTF4BodyDecision_TOS, &b_Kst_Hlt2TopoOSTF4BodyDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2IncPhiDecision_Dec", &Kst_Hlt2IncPhiDecision_Dec, &b_Kst_Hlt2IncPhiDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2IncPhiDecision_TIS", &Kst_Hlt2IncPhiDecision_TIS, &b_Kst_Hlt2IncPhiDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2IncPhiDecision_TOS", &Kst_Hlt2IncPhiDecision_TOS, &b_Kst_Hlt2IncPhiDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2Topo4BodySimpleDecision_Dec", &Kst_Hlt2Topo4BodySimpleDecision_Dec, &b_Kst_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2Topo4BodySimpleDecision_TIS", &Kst_Hlt2Topo4BodySimpleDecision_TIS, &b_Kst_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2Topo4BodySimpleDecision_TOS", &Kst_Hlt2Topo4BodySimpleDecision_TOS, &b_Kst_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2Topo3BodySimpleDecision_Dec", &Kst_Hlt2Topo3BodySimpleDecision_Dec, &b_Kst_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2Topo3BodySimpleDecision_TIS", &Kst_Hlt2Topo3BodySimpleDecision_TIS, &b_Kst_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2Topo3BodySimpleDecision_TOS", &Kst_Hlt2Topo3BodySimpleDecision_TOS, &b_Kst_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2Topo3BodyBBDTDecision_Dec", &Kst_Hlt2Topo3BodyBBDTDecision_Dec, &b_Kst_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2Topo3BodyBBDTDecision_TIS", &Kst_Hlt2Topo3BodyBBDTDecision_TIS, &b_Kst_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2Topo3BodyBBDTDecision_TOS", &Kst_Hlt2Topo3BodyBBDTDecision_TOS, &b_Kst_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2Topo2BodySimpleDecision_Dec", &Kst_Hlt2Topo2BodySimpleDecision_Dec, &b_Kst_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2Topo2BodySimpleDecision_TIS", &Kst_Hlt2Topo2BodySimpleDecision_TIS, &b_Kst_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2Topo2BodySimpleDecision_TOS", &Kst_Hlt2Topo2BodySimpleDecision_TOS, &b_Kst_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2Topo2BodyBBDTDecision_Dec", &Kst_Hlt2Topo2BodyBBDTDecision_Dec, &b_Kst_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2Topo2BodyBBDTDecision_TIS", &Kst_Hlt2Topo2BodyBBDTDecision_TIS, &b_Kst_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2Topo2BodyBBDTDecision_TOS", &Kst_Hlt2Topo2BodyBBDTDecision_TOS, &b_Kst_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2Topo4BodyBBDTDecision_Dec", &Kst_Hlt2Topo4BodyBBDTDecision_Dec, &b_Kst_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2Topo4BodyBBDTDecision_TIS", &Kst_Hlt2Topo4BodyBBDTDecision_TIS, &b_Kst_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2Topo4BodyBBDTDecision_TOS", &Kst_Hlt2Topo4BodyBBDTDecision_TOS, &b_Kst_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2TopoMu4BodyBBDTDecision_Dec", &Kst_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_Kst_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2TopoMu4BodyBBDTDecision_TIS", &Kst_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_Kst_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2TopoMu4BodyBBDTDecision_TOS", &Kst_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_Kst_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2IncPhiSidebandsDecision_Dec", &Kst_Hlt2IncPhiSidebandsDecision_Dec, &b_Kst_Hlt2IncPhiSidebandsDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2IncPhiSidebandsDecision_TIS", &Kst_Hlt2IncPhiSidebandsDecision_TIS, &b_Kst_Hlt2IncPhiSidebandsDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2IncPhiSidebandsDecision_TOS", &Kst_Hlt2IncPhiSidebandsDecision_TOS, &b_Kst_Hlt2IncPhiSidebandsDecision_TOS);
   fChain->SetBranchAddress("Kst_Hlt2B2HHDecision_Dec", &Kst_Hlt2B2HHDecision_Dec, &b_Kst_Hlt2B2HHDecision_Dec);
   fChain->SetBranchAddress("Kst_Hlt2B2HHDecision_TIS", &Kst_Hlt2B2HHDecision_TIS, &b_Kst_Hlt2B2HHDecision_TIS);
   fChain->SetBranchAddress("Kst_Hlt2B2HHDecision_TOS", &Kst_Hlt2B2HHDecision_TOS, &b_Kst_Hlt2B2HHDecision_TOS);
   fChain->SetBranchAddress("Kst_NOPARTWITHINDCHI2WDW", &Kst_NOPARTWITHINDCHI2WDW, &b_Kst_NOPARTWITHINDCHI2WDW);
   fChain->SetBranchAddress("Kst_NOPARTWITHINCHI2WDW", &Kst_NOPARTWITHINCHI2WDW, &b_Kst_NOPARTWITHINCHI2WDW);
   fChain->SetBranchAddress("Kst_SMALLESTCHI2", &Kst_SMALLESTCHI2, &b_Kst_SMALLESTCHI2);
   fChain->SetBranchAddress("Kst_SMALLESTDELTACHI2", &Kst_SMALLESTDELTACHI2, &b_Kst_SMALLESTDELTACHI2);
   fChain->SetBranchAddress("Piminus_CosTheta", &Piminus_CosTheta, &b_Piminus_CosTheta);
   fChain->SetBranchAddress("Piminus_OWNPV_X", &Piminus_OWNPV_X, &b_Piminus_OWNPV_X);
   fChain->SetBranchAddress("Piminus_OWNPV_Y", &Piminus_OWNPV_Y, &b_Piminus_OWNPV_Y);
   fChain->SetBranchAddress("Piminus_OWNPV_Z", &Piminus_OWNPV_Z, &b_Piminus_OWNPV_Z);
   fChain->SetBranchAddress("Piminus_OWNPV_XERR", &Piminus_OWNPV_XERR, &b_Piminus_OWNPV_XERR);
   fChain->SetBranchAddress("Piminus_OWNPV_YERR", &Piminus_OWNPV_YERR, &b_Piminus_OWNPV_YERR);
   fChain->SetBranchAddress("Piminus_OWNPV_ZERR", &Piminus_OWNPV_ZERR, &b_Piminus_OWNPV_ZERR);
   fChain->SetBranchAddress("Piminus_OWNPV_CHI2", &Piminus_OWNPV_CHI2, &b_Piminus_OWNPV_CHI2);
   fChain->SetBranchAddress("Piminus_OWNPV_NDOF", &Piminus_OWNPV_NDOF, &b_Piminus_OWNPV_NDOF);
   fChain->SetBranchAddress("Piminus_OWNPV_COV_", Piminus_OWNPV_COV_, &b_Piminus_OWNPV_COV_);
   fChain->SetBranchAddress("Piminus_IP_OWNPV", &Piminus_IP_OWNPV, &b_Piminus_IP_OWNPV);
   fChain->SetBranchAddress("Piminus_IPCHI2_OWNPV", &Piminus_IPCHI2_OWNPV, &b_Piminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Piminus_ORIVX_X", &Piminus_ORIVX_X, &b_Piminus_ORIVX_X);
   fChain->SetBranchAddress("Piminus_ORIVX_Y", &Piminus_ORIVX_Y, &b_Piminus_ORIVX_Y);
   fChain->SetBranchAddress("Piminus_ORIVX_Z", &Piminus_ORIVX_Z, &b_Piminus_ORIVX_Z);
   fChain->SetBranchAddress("Piminus_ORIVX_XERR", &Piminus_ORIVX_XERR, &b_Piminus_ORIVX_XERR);
   fChain->SetBranchAddress("Piminus_ORIVX_YERR", &Piminus_ORIVX_YERR, &b_Piminus_ORIVX_YERR);
   fChain->SetBranchAddress("Piminus_ORIVX_ZERR", &Piminus_ORIVX_ZERR, &b_Piminus_ORIVX_ZERR);
   fChain->SetBranchAddress("Piminus_ORIVX_CHI2", &Piminus_ORIVX_CHI2, &b_Piminus_ORIVX_CHI2);
   fChain->SetBranchAddress("Piminus_ORIVX_NDOF", &Piminus_ORIVX_NDOF, &b_Piminus_ORIVX_NDOF);
   fChain->SetBranchAddress("Piminus_ORIVX_COV_", Piminus_ORIVX_COV_, &b_Piminus_ORIVX_COV_);
   fChain->SetBranchAddress("Piminus_P", &Piminus_P, &b_Piminus_P);
   fChain->SetBranchAddress("Piminus_PT", &Piminus_PT, &b_Piminus_PT);
   fChain->SetBranchAddress("Piminus_PE", &Piminus_PE, &b_Piminus_PE);
   fChain->SetBranchAddress("Piminus_PX", &Piminus_PX, &b_Piminus_PX);
   fChain->SetBranchAddress("Piminus_PY", &Piminus_PY, &b_Piminus_PY);
   fChain->SetBranchAddress("Piminus_PZ", &Piminus_PZ, &b_Piminus_PZ);
   fChain->SetBranchAddress("Piminus_M", &Piminus_M, &b_Piminus_M);
   fChain->SetBranchAddress("Piminus_L0Calo_HCAL_realET", &Piminus_L0Calo_HCAL_realET, &b_Piminus_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("Piminus_L0Calo_HCAL_xProjection", &Piminus_L0Calo_HCAL_xProjection, &b_Piminus_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("Piminus_L0Calo_HCAL_yProjection", &Piminus_L0Calo_HCAL_yProjection, &b_Piminus_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("Piminus_L0Calo_HCAL_region", &Piminus_L0Calo_HCAL_region, &b_Piminus_L0Calo_HCAL_region);
   fChain->SetBranchAddress("Piminus_TRUEID", &Piminus_TRUEID, &b_Piminus_TRUEID);
   fChain->SetBranchAddress("Piminus_MC_MOTHER_ID", &Piminus_MC_MOTHER_ID, &b_Piminus_MC_MOTHER_ID);
   fChain->SetBranchAddress("Piminus_MC_MOTHER_KEY", &Piminus_MC_MOTHER_KEY, &b_Piminus_MC_MOTHER_KEY);
   fChain->SetBranchAddress("Piminus_MC_GD_MOTHER_ID", &Piminus_MC_GD_MOTHER_ID, &b_Piminus_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("Piminus_MC_GD_MOTHER_KEY", &Piminus_MC_GD_MOTHER_KEY, &b_Piminus_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Piminus_MC_GD_GD_MOTHER_ID", &Piminus_MC_GD_GD_MOTHER_ID, &b_Piminus_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("Piminus_MC_GD_GD_MOTHER_KEY", &Piminus_MC_GD_GD_MOTHER_KEY, &b_Piminus_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Piminus_TRUEP_E", &Piminus_TRUEP_E, &b_Piminus_TRUEP_E);
   fChain->SetBranchAddress("Piminus_TRUEP_X", &Piminus_TRUEP_X, &b_Piminus_TRUEP_X);
   fChain->SetBranchAddress("Piminus_TRUEP_Y", &Piminus_TRUEP_Y, &b_Piminus_TRUEP_Y);
   fChain->SetBranchAddress("Piminus_TRUEP_Z", &Piminus_TRUEP_Z, &b_Piminus_TRUEP_Z);
   fChain->SetBranchAddress("Piminus_TRUEPT", &Piminus_TRUEPT, &b_Piminus_TRUEPT);
   fChain->SetBranchAddress("Piminus_TRUEORIGINVERTEX_X", &Piminus_TRUEORIGINVERTEX_X, &b_Piminus_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("Piminus_TRUEORIGINVERTEX_Y", &Piminus_TRUEORIGINVERTEX_Y, &b_Piminus_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("Piminus_TRUEORIGINVERTEX_Z", &Piminus_TRUEORIGINVERTEX_Z, &b_Piminus_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("Piminus_TRUEENDVERTEX_X", &Piminus_TRUEENDVERTEX_X, &b_Piminus_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("Piminus_TRUEENDVERTEX_Y", &Piminus_TRUEENDVERTEX_Y, &b_Piminus_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("Piminus_TRUEENDVERTEX_Z", &Piminus_TRUEENDVERTEX_Z, &b_Piminus_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("Piminus_TRUEISSTABLE", &Piminus_TRUEISSTABLE, &b_Piminus_TRUEISSTABLE);
   fChain->SetBranchAddress("Piminus_TRUETAU", &Piminus_TRUETAU, &b_Piminus_TRUETAU);
   fChain->SetBranchAddress("Piminus_ThetaL", &Piminus_ThetaL, &b_Piminus_ThetaL);
   fChain->SetBranchAddress("Piminus_ThetaK", &Piminus_ThetaK, &b_Piminus_ThetaK);
   fChain->SetBranchAddress("Piminus_Phi", &Piminus_Phi, &b_Piminus_Phi);
   fChain->SetBranchAddress("Piminus_ThetaTr", &Piminus_ThetaTr, &b_Piminus_ThetaTr);
   fChain->SetBranchAddress("Piminus_PhiTr", &Piminus_PhiTr, &b_Piminus_PhiTr);
   fChain->SetBranchAddress("Piminus_ThetaVtr", &Piminus_ThetaVtr, &b_Piminus_ThetaVtr);
   fChain->SetBranchAddress("Piminus_ID", &Piminus_ID, &b_Piminus_ID);
   fChain->SetBranchAddress("Piminus_PIDe", &Piminus_PIDe, &b_Piminus_PIDe);
   fChain->SetBranchAddress("Piminus_PIDmu", &Piminus_PIDmu, &b_Piminus_PIDmu);
   fChain->SetBranchAddress("Piminus_PIDK", &Piminus_PIDK, &b_Piminus_PIDK);
   fChain->SetBranchAddress("Piminus_PIDp", &Piminus_PIDp, &b_Piminus_PIDp);
   fChain->SetBranchAddress("Piminus_ProbNNe", &Piminus_ProbNNe, &b_Piminus_ProbNNe);
   fChain->SetBranchAddress("Piminus_ProbNNk", &Piminus_ProbNNk, &b_Piminus_ProbNNk);
   fChain->SetBranchAddress("Piminus_ProbNNp", &Piminus_ProbNNp, &b_Piminus_ProbNNp);
   fChain->SetBranchAddress("Piminus_ProbNNpi", &Piminus_ProbNNpi, &b_Piminus_ProbNNpi);
   fChain->SetBranchAddress("Piminus_ProbNNmu", &Piminus_ProbNNmu, &b_Piminus_ProbNNmu);
   fChain->SetBranchAddress("Piminus_ProbNNghost", &Piminus_ProbNNghost, &b_Piminus_ProbNNghost);
   fChain->SetBranchAddress("Piminus_hasMuon", &Piminus_hasMuon, &b_Piminus_hasMuon);
   fChain->SetBranchAddress("Piminus_isMuon", &Piminus_isMuon, &b_Piminus_isMuon);
   fChain->SetBranchAddress("Piminus_hasRich", &Piminus_hasRich, &b_Piminus_hasRich);
   fChain->SetBranchAddress("Piminus_hasCalo", &Piminus_hasCalo, &b_Piminus_hasCalo);
   fChain->SetBranchAddress("Piminus_L0Global_Dec", &Piminus_L0Global_Dec, &b_Piminus_L0Global_Dec);
   fChain->SetBranchAddress("Piminus_L0Global_TIS", &Piminus_L0Global_TIS, &b_Piminus_L0Global_TIS);
   fChain->SetBranchAddress("Piminus_L0Global_TOS", &Piminus_L0Global_TOS, &b_Piminus_L0Global_TOS);
   fChain->SetBranchAddress("Piminus_Hlt1Global_Dec", &Piminus_Hlt1Global_Dec, &b_Piminus_Hlt1Global_Dec);
   fChain->SetBranchAddress("Piminus_Hlt1Global_TIS", &Piminus_Hlt1Global_TIS, &b_Piminus_Hlt1Global_TIS);
   fChain->SetBranchAddress("Piminus_Hlt1Global_TOS", &Piminus_Hlt1Global_TOS, &b_Piminus_Hlt1Global_TOS);
   fChain->SetBranchAddress("Piminus_Hlt1Phys_Dec", &Piminus_Hlt1Phys_Dec, &b_Piminus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Piminus_Hlt1Phys_TIS", &Piminus_Hlt1Phys_TIS, &b_Piminus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Piminus_Hlt1Phys_TOS", &Piminus_Hlt1Phys_TOS, &b_Piminus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2Global_Dec", &Piminus_Hlt2Global_Dec, &b_Piminus_Hlt2Global_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2Global_TIS", &Piminus_Hlt2Global_TIS, &b_Piminus_Hlt2Global_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2Global_TOS", &Piminus_Hlt2Global_TOS, &b_Piminus_Hlt2Global_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2Phys_Dec", &Piminus_Hlt2Phys_Dec, &b_Piminus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2Phys_TIS", &Piminus_Hlt2Phys_TIS, &b_Piminus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2Phys_TOS", &Piminus_Hlt2Phys_TOS, &b_Piminus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Piminus_StrippingGlobal_Dec", &Piminus_StrippingGlobal_Dec, &b_Piminus_StrippingGlobal_Dec);
   fChain->SetBranchAddress("Piminus_StrippingGlobal_TIS", &Piminus_StrippingGlobal_TIS, &b_Piminus_StrippingGlobal_TIS);
   fChain->SetBranchAddress("Piminus_StrippingGlobal_TOS", &Piminus_StrippingGlobal_TOS, &b_Piminus_StrippingGlobal_TOS);
   fChain->SetBranchAddress("Piminus_L0HadronDecision_Dec", &Piminus_L0HadronDecision_Dec, &b_Piminus_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Piminus_L0HadronDecision_TIS", &Piminus_L0HadronDecision_TIS, &b_Piminus_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Piminus_L0HadronDecision_TOS", &Piminus_L0HadronDecision_TOS, &b_Piminus_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Piminus_L0MuonDecision_Dec", &Piminus_L0MuonDecision_Dec, &b_Piminus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Piminus_L0MuonDecision_TIS", &Piminus_L0MuonDecision_TIS, &b_Piminus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Piminus_L0MuonDecision_TOS", &Piminus_L0MuonDecision_TOS, &b_Piminus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Piminus_L0DiMuonDecision_Dec", &Piminus_L0DiMuonDecision_Dec, &b_Piminus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Piminus_L0DiMuonDecision_TIS", &Piminus_L0DiMuonDecision_TIS, &b_Piminus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Piminus_L0DiMuonDecision_TOS", &Piminus_L0DiMuonDecision_TOS, &b_Piminus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Piminus_L0ElectronDecision_Dec", &Piminus_L0ElectronDecision_Dec, &b_Piminus_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("Piminus_L0ElectronDecision_TIS", &Piminus_L0ElectronDecision_TIS, &b_Piminus_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("Piminus_L0ElectronDecision_TOS", &Piminus_L0ElectronDecision_TOS, &b_Piminus_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("Piminus_L0PhotonDecision_Dec", &Piminus_L0PhotonDecision_Dec, &b_Piminus_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("Piminus_L0PhotonDecision_TIS", &Piminus_L0PhotonDecision_TIS, &b_Piminus_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("Piminus_L0PhotonDecision_TOS", &Piminus_L0PhotonDecision_TOS, &b_Piminus_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt1SingleHadronDecision_Dec", &Piminus_Hlt1SingleHadronDecision_Dec, &b_Piminus_Hlt1SingleHadronDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt1SingleHadronDecision_TIS", &Piminus_Hlt1SingleHadronDecision_TIS, &b_Piminus_Hlt1SingleHadronDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt1SingleHadronDecision_TOS", &Piminus_Hlt1SingleHadronDecision_TOS, &b_Piminus_Hlt1SingleHadronDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt1MBNoBiasDecision_Dec", &Piminus_Hlt1MBNoBiasDecision_Dec, &b_Piminus_Hlt1MBNoBiasDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt1MBNoBiasDecision_TIS", &Piminus_Hlt1MBNoBiasDecision_TIS, &b_Piminus_Hlt1MBNoBiasDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt1MBNoBiasDecision_TOS", &Piminus_Hlt1MBNoBiasDecision_TOS, &b_Piminus_Hlt1MBNoBiasDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt1DiHadronDecision_Dec", &Piminus_Hlt1DiHadronDecision_Dec, &b_Piminus_Hlt1DiHadronDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt1DiHadronDecision_TIS", &Piminus_Hlt1DiHadronDecision_TIS, &b_Piminus_Hlt1DiHadronDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt1DiHadronDecision_TOS", &Piminus_Hlt1DiHadronDecision_TOS, &b_Piminus_Hlt1DiHadronDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt1L0AnyDecision_Dec", &Piminus_Hlt1L0AnyDecision_Dec, &b_Piminus_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt1L0AnyDecision_TIS", &Piminus_Hlt1L0AnyDecision_TIS, &b_Piminus_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt1L0AnyDecision_TOS", &Piminus_Hlt1L0AnyDecision_TOS, &b_Piminus_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt1TrackAllL0Decision_Dec", &Piminus_Hlt1TrackAllL0Decision_Dec, &b_Piminus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt1TrackAllL0Decision_TIS", &Piminus_Hlt1TrackAllL0Decision_TIS, &b_Piminus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt1TrackAllL0Decision_TOS", &Piminus_Hlt1TrackAllL0Decision_TOS, &b_Piminus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2TopoOSTF4BodyDecision_Dec", &Piminus_Hlt2TopoOSTF4BodyDecision_Dec, &b_Piminus_Hlt2TopoOSTF4BodyDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2TopoOSTF4BodyDecision_TIS", &Piminus_Hlt2TopoOSTF4BodyDecision_TIS, &b_Piminus_Hlt2TopoOSTF4BodyDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2TopoOSTF4BodyDecision_TOS", &Piminus_Hlt2TopoOSTF4BodyDecision_TOS, &b_Piminus_Hlt2TopoOSTF4BodyDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2IncPhiDecision_Dec", &Piminus_Hlt2IncPhiDecision_Dec, &b_Piminus_Hlt2IncPhiDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2IncPhiDecision_TIS", &Piminus_Hlt2IncPhiDecision_TIS, &b_Piminus_Hlt2IncPhiDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2IncPhiDecision_TOS", &Piminus_Hlt2IncPhiDecision_TOS, &b_Piminus_Hlt2IncPhiDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo4BodySimpleDecision_Dec", &Piminus_Hlt2Topo4BodySimpleDecision_Dec, &b_Piminus_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2Topo4BodySimpleDecision_TIS", &Piminus_Hlt2Topo4BodySimpleDecision_TIS, &b_Piminus_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo4BodySimpleDecision_TOS", &Piminus_Hlt2Topo4BodySimpleDecision_TOS, &b_Piminus_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo3BodySimpleDecision_Dec", &Piminus_Hlt2Topo3BodySimpleDecision_Dec, &b_Piminus_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2Topo3BodySimpleDecision_TIS", &Piminus_Hlt2Topo3BodySimpleDecision_TIS, &b_Piminus_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo3BodySimpleDecision_TOS", &Piminus_Hlt2Topo3BodySimpleDecision_TOS, &b_Piminus_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo3BodyBBDTDecision_Dec", &Piminus_Hlt2Topo3BodyBBDTDecision_Dec, &b_Piminus_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2Topo3BodyBBDTDecision_TIS", &Piminus_Hlt2Topo3BodyBBDTDecision_TIS, &b_Piminus_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo3BodyBBDTDecision_TOS", &Piminus_Hlt2Topo3BodyBBDTDecision_TOS, &b_Piminus_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo2BodySimpleDecision_Dec", &Piminus_Hlt2Topo2BodySimpleDecision_Dec, &b_Piminus_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2Topo2BodySimpleDecision_TIS", &Piminus_Hlt2Topo2BodySimpleDecision_TIS, &b_Piminus_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo2BodySimpleDecision_TOS", &Piminus_Hlt2Topo2BodySimpleDecision_TOS, &b_Piminus_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo2BodyBBDTDecision_Dec", &Piminus_Hlt2Topo2BodyBBDTDecision_Dec, &b_Piminus_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2Topo2BodyBBDTDecision_TIS", &Piminus_Hlt2Topo2BodyBBDTDecision_TIS, &b_Piminus_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo2BodyBBDTDecision_TOS", &Piminus_Hlt2Topo2BodyBBDTDecision_TOS, &b_Piminus_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo4BodyBBDTDecision_Dec", &Piminus_Hlt2Topo4BodyBBDTDecision_Dec, &b_Piminus_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2Topo4BodyBBDTDecision_TIS", &Piminus_Hlt2Topo4BodyBBDTDecision_TIS, &b_Piminus_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2Topo4BodyBBDTDecision_TOS", &Piminus_Hlt2Topo4BodyBBDTDecision_TOS, &b_Piminus_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2TopoMu4BodyBBDTDecision_Dec", &Piminus_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_Piminus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2TopoMu4BodyBBDTDecision_TIS", &Piminus_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_Piminus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2TopoMu4BodyBBDTDecision_TOS", &Piminus_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_Piminus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2IncPhiSidebandsDecision_Dec", &Piminus_Hlt2IncPhiSidebandsDecision_Dec, &b_Piminus_Hlt2IncPhiSidebandsDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2IncPhiSidebandsDecision_TIS", &Piminus_Hlt2IncPhiSidebandsDecision_TIS, &b_Piminus_Hlt2IncPhiSidebandsDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2IncPhiSidebandsDecision_TOS", &Piminus_Hlt2IncPhiSidebandsDecision_TOS, &b_Piminus_Hlt2IncPhiSidebandsDecision_TOS);
   fChain->SetBranchAddress("Piminus_Hlt2B2HHDecision_Dec", &Piminus_Hlt2B2HHDecision_Dec, &b_Piminus_Hlt2B2HHDecision_Dec);
   fChain->SetBranchAddress("Piminus_Hlt2B2HHDecision_TIS", &Piminus_Hlt2B2HHDecision_TIS, &b_Piminus_Hlt2B2HHDecision_TIS);
   fChain->SetBranchAddress("Piminus_Hlt2B2HHDecision_TOS", &Piminus_Hlt2B2HHDecision_TOS, &b_Piminus_Hlt2B2HHDecision_TOS);
   fChain->SetBranchAddress("Piminus_TRACK_Type", &Piminus_TRACK_Type, &b_Piminus_TRACK_Type);
   fChain->SetBranchAddress("Piminus_TRACK_Key", &Piminus_TRACK_Key, &b_Piminus_TRACK_Key);
   fChain->SetBranchAddress("Piminus_TRACK_CHI2NDOF", &Piminus_TRACK_CHI2NDOF, &b_Piminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Piminus_TRACK_PCHI2", &Piminus_TRACK_PCHI2, &b_Piminus_TRACK_PCHI2);
   fChain->SetBranchAddress("Piminus_TRACK_MatchCHI2", &Piminus_TRACK_MatchCHI2, &b_Piminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Piminus_TRACK_GhostProb", &Piminus_TRACK_GhostProb, &b_Piminus_TRACK_GhostProb);
   fChain->SetBranchAddress("Piminus_TRACK_CloneDist", &Piminus_TRACK_CloneDist, &b_Piminus_TRACK_CloneDist);
   fChain->SetBranchAddress("Piminus_TRACK_Likelihood", &Piminus_TRACK_Likelihood, &b_Piminus_TRACK_Likelihood);
   fChain->SetBranchAddress("Piminus_NOPARTWITHINDCHI2WDW", &Piminus_NOPARTWITHINDCHI2WDW, &b_Piminus_NOPARTWITHINDCHI2WDW);
   fChain->SetBranchAddress("Piminus_NOPARTWITHINCHI2WDW", &Piminus_NOPARTWITHINCHI2WDW, &b_Piminus_NOPARTWITHINCHI2WDW);
   fChain->SetBranchAddress("Piminus_SMALLESTCHI2", &Piminus_SMALLESTCHI2, &b_Piminus_SMALLESTCHI2);
   fChain->SetBranchAddress("Piminus_SMALLESTDELTACHI2", &Piminus_SMALLESTDELTACHI2, &b_Piminus_SMALLESTDELTACHI2);
   fChain->SetBranchAddress("Kplus_CosTheta", &Kplus_CosTheta, &b_Kplus_CosTheta);
   fChain->SetBranchAddress("Kplus_OWNPV_X", &Kplus_OWNPV_X, &b_Kplus_OWNPV_X);
   fChain->SetBranchAddress("Kplus_OWNPV_Y", &Kplus_OWNPV_Y, &b_Kplus_OWNPV_Y);
   fChain->SetBranchAddress("Kplus_OWNPV_Z", &Kplus_OWNPV_Z, &b_Kplus_OWNPV_Z);
   fChain->SetBranchAddress("Kplus_OWNPV_XERR", &Kplus_OWNPV_XERR, &b_Kplus_OWNPV_XERR);
   fChain->SetBranchAddress("Kplus_OWNPV_YERR", &Kplus_OWNPV_YERR, &b_Kplus_OWNPV_YERR);
   fChain->SetBranchAddress("Kplus_OWNPV_ZERR", &Kplus_OWNPV_ZERR, &b_Kplus_OWNPV_ZERR);
   fChain->SetBranchAddress("Kplus_OWNPV_CHI2", &Kplus_OWNPV_CHI2, &b_Kplus_OWNPV_CHI2);
   fChain->SetBranchAddress("Kplus_OWNPV_NDOF", &Kplus_OWNPV_NDOF, &b_Kplus_OWNPV_NDOF);
   fChain->SetBranchAddress("Kplus_OWNPV_COV_", Kplus_OWNPV_COV_, &b_Kplus_OWNPV_COV_);
   fChain->SetBranchAddress("Kplus_IP_OWNPV", &Kplus_IP_OWNPV, &b_Kplus_IP_OWNPV);
   fChain->SetBranchAddress("Kplus_IPCHI2_OWNPV", &Kplus_IPCHI2_OWNPV, &b_Kplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kplus_ORIVX_X", &Kplus_ORIVX_X, &b_Kplus_ORIVX_X);
   fChain->SetBranchAddress("Kplus_ORIVX_Y", &Kplus_ORIVX_Y, &b_Kplus_ORIVX_Y);
   fChain->SetBranchAddress("Kplus_ORIVX_Z", &Kplus_ORIVX_Z, &b_Kplus_ORIVX_Z);
   fChain->SetBranchAddress("Kplus_ORIVX_XERR", &Kplus_ORIVX_XERR, &b_Kplus_ORIVX_XERR);
   fChain->SetBranchAddress("Kplus_ORIVX_YERR", &Kplus_ORIVX_YERR, &b_Kplus_ORIVX_YERR);
   fChain->SetBranchAddress("Kplus_ORIVX_ZERR", &Kplus_ORIVX_ZERR, &b_Kplus_ORIVX_ZERR);
   fChain->SetBranchAddress("Kplus_ORIVX_CHI2", &Kplus_ORIVX_CHI2, &b_Kplus_ORIVX_CHI2);
   fChain->SetBranchAddress("Kplus_ORIVX_NDOF", &Kplus_ORIVX_NDOF, &b_Kplus_ORIVX_NDOF);
   fChain->SetBranchAddress("Kplus_ORIVX_COV_", Kplus_ORIVX_COV_, &b_Kplus_ORIVX_COV_);
   fChain->SetBranchAddress("Kplus_P", &Kplus_P, &b_Kplus_P);
   fChain->SetBranchAddress("Kplus_PT", &Kplus_PT, &b_Kplus_PT);
   fChain->SetBranchAddress("Kplus_PE", &Kplus_PE, &b_Kplus_PE);
   fChain->SetBranchAddress("Kplus_PX", &Kplus_PX, &b_Kplus_PX);
   fChain->SetBranchAddress("Kplus_PY", &Kplus_PY, &b_Kplus_PY);
   fChain->SetBranchAddress("Kplus_PZ", &Kplus_PZ, &b_Kplus_PZ);
   fChain->SetBranchAddress("Kplus_M", &Kplus_M, &b_Kplus_M);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_realET", &Kplus_L0Calo_HCAL_realET, &b_Kplus_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_xProjection", &Kplus_L0Calo_HCAL_xProjection, &b_Kplus_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_yProjection", &Kplus_L0Calo_HCAL_yProjection, &b_Kplus_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("Kplus_L0Calo_HCAL_region", &Kplus_L0Calo_HCAL_region, &b_Kplus_L0Calo_HCAL_region);
   fChain->SetBranchAddress("Kplus_TRUEID", &Kplus_TRUEID, &b_Kplus_TRUEID);
   fChain->SetBranchAddress("Kplus_MC_MOTHER_ID", &Kplus_MC_MOTHER_ID, &b_Kplus_MC_MOTHER_ID);
   fChain->SetBranchAddress("Kplus_MC_MOTHER_KEY", &Kplus_MC_MOTHER_KEY, &b_Kplus_MC_MOTHER_KEY);
   fChain->SetBranchAddress("Kplus_MC_GD_MOTHER_ID", &Kplus_MC_GD_MOTHER_ID, &b_Kplus_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kplus_MC_GD_MOTHER_KEY", &Kplus_MC_GD_MOTHER_KEY, &b_Kplus_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kplus_MC_GD_GD_MOTHER_ID", &Kplus_MC_GD_GD_MOTHER_ID, &b_Kplus_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("Kplus_MC_GD_GD_MOTHER_KEY", &Kplus_MC_GD_GD_MOTHER_KEY, &b_Kplus_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("Kplus_TRUEP_E", &Kplus_TRUEP_E, &b_Kplus_TRUEP_E);
   fChain->SetBranchAddress("Kplus_TRUEP_X", &Kplus_TRUEP_X, &b_Kplus_TRUEP_X);
   fChain->SetBranchAddress("Kplus_TRUEP_Y", &Kplus_TRUEP_Y, &b_Kplus_TRUEP_Y);
   fChain->SetBranchAddress("Kplus_TRUEP_Z", &Kplus_TRUEP_Z, &b_Kplus_TRUEP_Z);
   fChain->SetBranchAddress("Kplus_TRUEPT", &Kplus_TRUEPT, &b_Kplus_TRUEPT);
   fChain->SetBranchAddress("Kplus_TRUEORIGINVERTEX_X", &Kplus_TRUEORIGINVERTEX_X, &b_Kplus_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("Kplus_TRUEORIGINVERTEX_Y", &Kplus_TRUEORIGINVERTEX_Y, &b_Kplus_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("Kplus_TRUEORIGINVERTEX_Z", &Kplus_TRUEORIGINVERTEX_Z, &b_Kplus_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("Kplus_TRUEENDVERTEX_X", &Kplus_TRUEENDVERTEX_X, &b_Kplus_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("Kplus_TRUEENDVERTEX_Y", &Kplus_TRUEENDVERTEX_Y, &b_Kplus_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("Kplus_TRUEENDVERTEX_Z", &Kplus_TRUEENDVERTEX_Z, &b_Kplus_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("Kplus_TRUEISSTABLE", &Kplus_TRUEISSTABLE, &b_Kplus_TRUEISSTABLE);
   fChain->SetBranchAddress("Kplus_TRUETAU", &Kplus_TRUETAU, &b_Kplus_TRUETAU);
   fChain->SetBranchAddress("Kplus_ThetaL", &Kplus_ThetaL, &b_Kplus_ThetaL);
   fChain->SetBranchAddress("Kplus_ThetaK", &Kplus_ThetaK, &b_Kplus_ThetaK);
   fChain->SetBranchAddress("Kplus_Phi", &Kplus_Phi, &b_Kplus_Phi);
   fChain->SetBranchAddress("Kplus_ThetaTr", &Kplus_ThetaTr, &b_Kplus_ThetaTr);
   fChain->SetBranchAddress("Kplus_PhiTr", &Kplus_PhiTr, &b_Kplus_PhiTr);
   fChain->SetBranchAddress("Kplus_ThetaVtr", &Kplus_ThetaVtr, &b_Kplus_ThetaVtr);
   fChain->SetBranchAddress("Kplus_ID", &Kplus_ID, &b_Kplus_ID);
   fChain->SetBranchAddress("Kplus_PIDe", &Kplus_PIDe, &b_Kplus_PIDe);
   fChain->SetBranchAddress("Kplus_PIDmu", &Kplus_PIDmu, &b_Kplus_PIDmu);
   fChain->SetBranchAddress("Kplus_PIDK", &Kplus_PIDK, &b_Kplus_PIDK);
   fChain->SetBranchAddress("Kplus_PIDp", &Kplus_PIDp, &b_Kplus_PIDp);
   fChain->SetBranchAddress("Kplus_ProbNNe", &Kplus_ProbNNe, &b_Kplus_ProbNNe);
   fChain->SetBranchAddress("Kplus_ProbNNk", &Kplus_ProbNNk, &b_Kplus_ProbNNk);
   fChain->SetBranchAddress("Kplus_ProbNNp", &Kplus_ProbNNp, &b_Kplus_ProbNNp);
   fChain->SetBranchAddress("Kplus_ProbNNpi", &Kplus_ProbNNpi, &b_Kplus_ProbNNpi);
   fChain->SetBranchAddress("Kplus_ProbNNmu", &Kplus_ProbNNmu, &b_Kplus_ProbNNmu);
   fChain->SetBranchAddress("Kplus_ProbNNghost", &Kplus_ProbNNghost, &b_Kplus_ProbNNghost);
   fChain->SetBranchAddress("Kplus_hasMuon", &Kplus_hasMuon, &b_Kplus_hasMuon);
   fChain->SetBranchAddress("Kplus_isMuon", &Kplus_isMuon, &b_Kplus_isMuon);
   fChain->SetBranchAddress("Kplus_hasRich", &Kplus_hasRich, &b_Kplus_hasRich);
   fChain->SetBranchAddress("Kplus_hasCalo", &Kplus_hasCalo, &b_Kplus_hasCalo);
   fChain->SetBranchAddress("Kplus_L0Global_Dec", &Kplus_L0Global_Dec, &b_Kplus_L0Global_Dec);
   fChain->SetBranchAddress("Kplus_L0Global_TIS", &Kplus_L0Global_TIS, &b_Kplus_L0Global_TIS);
   fChain->SetBranchAddress("Kplus_L0Global_TOS", &Kplus_L0Global_TOS, &b_Kplus_L0Global_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1Global_Dec", &Kplus_Hlt1Global_Dec, &b_Kplus_Hlt1Global_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1Global_TIS", &Kplus_Hlt1Global_TIS, &b_Kplus_Hlt1Global_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1Global_TOS", &Kplus_Hlt1Global_TOS, &b_Kplus_Hlt1Global_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1Phys_Dec", &Kplus_Hlt1Phys_Dec, &b_Kplus_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1Phys_TIS", &Kplus_Hlt1Phys_TIS, &b_Kplus_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1Phys_TOS", &Kplus_Hlt1Phys_TOS, &b_Kplus_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Global_Dec", &Kplus_Hlt2Global_Dec, &b_Kplus_Hlt2Global_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Global_TIS", &Kplus_Hlt2Global_TIS, &b_Kplus_Hlt2Global_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Global_TOS", &Kplus_Hlt2Global_TOS, &b_Kplus_Hlt2Global_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Phys_Dec", &Kplus_Hlt2Phys_Dec, &b_Kplus_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Phys_TIS", &Kplus_Hlt2Phys_TIS, &b_Kplus_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Phys_TOS", &Kplus_Hlt2Phys_TOS, &b_Kplus_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Kplus_StrippingGlobal_Dec", &Kplus_StrippingGlobal_Dec, &b_Kplus_StrippingGlobal_Dec);
   fChain->SetBranchAddress("Kplus_StrippingGlobal_TIS", &Kplus_StrippingGlobal_TIS, &b_Kplus_StrippingGlobal_TIS);
   fChain->SetBranchAddress("Kplus_StrippingGlobal_TOS", &Kplus_StrippingGlobal_TOS, &b_Kplus_StrippingGlobal_TOS);
   fChain->SetBranchAddress("Kplus_L0HadronDecision_Dec", &Kplus_L0HadronDecision_Dec, &b_Kplus_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0HadronDecision_TIS", &Kplus_L0HadronDecision_TIS, &b_Kplus_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0HadronDecision_TOS", &Kplus_L0HadronDecision_TOS, &b_Kplus_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Kplus_L0MuonDecision_Dec", &Kplus_L0MuonDecision_Dec, &b_Kplus_L0MuonDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0MuonDecision_TIS", &Kplus_L0MuonDecision_TIS, &b_Kplus_L0MuonDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0MuonDecision_TOS", &Kplus_L0MuonDecision_TOS, &b_Kplus_L0MuonDecision_TOS);
   fChain->SetBranchAddress("Kplus_L0DiMuonDecision_Dec", &Kplus_L0DiMuonDecision_Dec, &b_Kplus_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0DiMuonDecision_TIS", &Kplus_L0DiMuonDecision_TIS, &b_Kplus_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0DiMuonDecision_TOS", &Kplus_L0DiMuonDecision_TOS, &b_Kplus_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("Kplus_L0ElectronDecision_Dec", &Kplus_L0ElectronDecision_Dec, &b_Kplus_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0ElectronDecision_TIS", &Kplus_L0ElectronDecision_TIS, &b_Kplus_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0ElectronDecision_TOS", &Kplus_L0ElectronDecision_TOS, &b_Kplus_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("Kplus_L0PhotonDecision_Dec", &Kplus_L0PhotonDecision_Dec, &b_Kplus_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("Kplus_L0PhotonDecision_TIS", &Kplus_L0PhotonDecision_TIS, &b_Kplus_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("Kplus_L0PhotonDecision_TOS", &Kplus_L0PhotonDecision_TOS, &b_Kplus_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1SingleHadronDecision_Dec", &Kplus_Hlt1SingleHadronDecision_Dec, &b_Kplus_Hlt1SingleHadronDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1SingleHadronDecision_TIS", &Kplus_Hlt1SingleHadronDecision_TIS, &b_Kplus_Hlt1SingleHadronDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1SingleHadronDecision_TOS", &Kplus_Hlt1SingleHadronDecision_TOS, &b_Kplus_Hlt1SingleHadronDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1MBNoBiasDecision_Dec", &Kplus_Hlt1MBNoBiasDecision_Dec, &b_Kplus_Hlt1MBNoBiasDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1MBNoBiasDecision_TIS", &Kplus_Hlt1MBNoBiasDecision_TIS, &b_Kplus_Hlt1MBNoBiasDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1MBNoBiasDecision_TOS", &Kplus_Hlt1MBNoBiasDecision_TOS, &b_Kplus_Hlt1MBNoBiasDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1DiHadronDecision_Dec", &Kplus_Hlt1DiHadronDecision_Dec, &b_Kplus_Hlt1DiHadronDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1DiHadronDecision_TIS", &Kplus_Hlt1DiHadronDecision_TIS, &b_Kplus_Hlt1DiHadronDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1DiHadronDecision_TOS", &Kplus_Hlt1DiHadronDecision_TOS, &b_Kplus_Hlt1DiHadronDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1L0AnyDecision_Dec", &Kplus_Hlt1L0AnyDecision_Dec, &b_Kplus_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1L0AnyDecision_TIS", &Kplus_Hlt1L0AnyDecision_TIS, &b_Kplus_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1L0AnyDecision_TOS", &Kplus_Hlt1L0AnyDecision_TOS, &b_Kplus_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt1TrackAllL0Decision_Dec", &Kplus_Hlt1TrackAllL0Decision_Dec, &b_Kplus_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt1TrackAllL0Decision_TIS", &Kplus_Hlt1TrackAllL0Decision_TIS, &b_Kplus_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt1TrackAllL0Decision_TOS", &Kplus_Hlt1TrackAllL0Decision_TOS, &b_Kplus_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoOSTF4BodyDecision_Dec", &Kplus_Hlt2TopoOSTF4BodyDecision_Dec, &b_Kplus_Hlt2TopoOSTF4BodyDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2TopoOSTF4BodyDecision_TIS", &Kplus_Hlt2TopoOSTF4BodyDecision_TIS, &b_Kplus_Hlt2TopoOSTF4BodyDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoOSTF4BodyDecision_TOS", &Kplus_Hlt2TopoOSTF4BodyDecision_TOS, &b_Kplus_Hlt2TopoOSTF4BodyDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2IncPhiDecision_Dec", &Kplus_Hlt2IncPhiDecision_Dec, &b_Kplus_Hlt2IncPhiDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2IncPhiDecision_TIS", &Kplus_Hlt2IncPhiDecision_TIS, &b_Kplus_Hlt2IncPhiDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2IncPhiDecision_TOS", &Kplus_Hlt2IncPhiDecision_TOS, &b_Kplus_Hlt2IncPhiDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodySimpleDecision_Dec", &Kplus_Hlt2Topo4BodySimpleDecision_Dec, &b_Kplus_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodySimpleDecision_TIS", &Kplus_Hlt2Topo4BodySimpleDecision_TIS, &b_Kplus_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodySimpleDecision_TOS", &Kplus_Hlt2Topo4BodySimpleDecision_TOS, &b_Kplus_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodySimpleDecision_Dec", &Kplus_Hlt2Topo3BodySimpleDecision_Dec, &b_Kplus_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodySimpleDecision_TIS", &Kplus_Hlt2Topo3BodySimpleDecision_TIS, &b_Kplus_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodySimpleDecision_TOS", &Kplus_Hlt2Topo3BodySimpleDecision_TOS, &b_Kplus_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodyBBDTDecision_Dec", &Kplus_Hlt2Topo3BodyBBDTDecision_Dec, &b_Kplus_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodyBBDTDecision_TIS", &Kplus_Hlt2Topo3BodyBBDTDecision_TIS, &b_Kplus_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo3BodyBBDTDecision_TOS", &Kplus_Hlt2Topo3BodyBBDTDecision_TOS, &b_Kplus_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodySimpleDecision_Dec", &Kplus_Hlt2Topo2BodySimpleDecision_Dec, &b_Kplus_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodySimpleDecision_TIS", &Kplus_Hlt2Topo2BodySimpleDecision_TIS, &b_Kplus_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodySimpleDecision_TOS", &Kplus_Hlt2Topo2BodySimpleDecision_TOS, &b_Kplus_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodyBBDTDecision_Dec", &Kplus_Hlt2Topo2BodyBBDTDecision_Dec, &b_Kplus_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodyBBDTDecision_TIS", &Kplus_Hlt2Topo2BodyBBDTDecision_TIS, &b_Kplus_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo2BodyBBDTDecision_TOS", &Kplus_Hlt2Topo2BodyBBDTDecision_TOS, &b_Kplus_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodyBBDTDecision_Dec", &Kplus_Hlt2Topo4BodyBBDTDecision_Dec, &b_Kplus_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodyBBDTDecision_TIS", &Kplus_Hlt2Topo4BodyBBDTDecision_TIS, &b_Kplus_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2Topo4BodyBBDTDecision_TOS", &Kplus_Hlt2Topo4BodyBBDTDecision_TOS, &b_Kplus_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec", &Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS", &Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS", &Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2IncPhiSidebandsDecision_Dec", &Kplus_Hlt2IncPhiSidebandsDecision_Dec, &b_Kplus_Hlt2IncPhiSidebandsDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2IncPhiSidebandsDecision_TIS", &Kplus_Hlt2IncPhiSidebandsDecision_TIS, &b_Kplus_Hlt2IncPhiSidebandsDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2IncPhiSidebandsDecision_TOS", &Kplus_Hlt2IncPhiSidebandsDecision_TOS, &b_Kplus_Hlt2IncPhiSidebandsDecision_TOS);
   fChain->SetBranchAddress("Kplus_Hlt2B2HHDecision_Dec", &Kplus_Hlt2B2HHDecision_Dec, &b_Kplus_Hlt2B2HHDecision_Dec);
   fChain->SetBranchAddress("Kplus_Hlt2B2HHDecision_TIS", &Kplus_Hlt2B2HHDecision_TIS, &b_Kplus_Hlt2B2HHDecision_TIS);
   fChain->SetBranchAddress("Kplus_Hlt2B2HHDecision_TOS", &Kplus_Hlt2B2HHDecision_TOS, &b_Kplus_Hlt2B2HHDecision_TOS);
   fChain->SetBranchAddress("Kplus_TRACK_Type", &Kplus_TRACK_Type, &b_Kplus_TRACK_Type);
   fChain->SetBranchAddress("Kplus_TRACK_Key", &Kplus_TRACK_Key, &b_Kplus_TRACK_Key);
   fChain->SetBranchAddress("Kplus_TRACK_CHI2NDOF", &Kplus_TRACK_CHI2NDOF, &b_Kplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_PCHI2", &Kplus_TRACK_PCHI2, &b_Kplus_TRACK_PCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_MatchCHI2", &Kplus_TRACK_MatchCHI2, &b_Kplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_GhostProb", &Kplus_TRACK_GhostProb, &b_Kplus_TRACK_GhostProb);
   fChain->SetBranchAddress("Kplus_TRACK_CloneDist", &Kplus_TRACK_CloneDist, &b_Kplus_TRACK_CloneDist);
   fChain->SetBranchAddress("Kplus_TRACK_Likelihood", &Kplus_TRACK_Likelihood, &b_Kplus_TRACK_Likelihood);
   fChain->SetBranchAddress("Kplus_NOPARTWITHINDCHI2WDW", &Kplus_NOPARTWITHINDCHI2WDW, &b_Kplus_NOPARTWITHINDCHI2WDW);
   fChain->SetBranchAddress("Kplus_NOPARTWITHINCHI2WDW", &Kplus_NOPARTWITHINCHI2WDW, &b_Kplus_NOPARTWITHINCHI2WDW);
   fChain->SetBranchAddress("Kplus_SMALLESTCHI2", &Kplus_SMALLESTCHI2, &b_Kplus_SMALLESTCHI2);
   fChain->SetBranchAddress("Kplus_SMALLESTDELTACHI2", &Kplus_SMALLESTDELTACHI2, &b_Kplus_SMALLESTDELTACHI2);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLTTCK", &HLTTCK, &b_HLTTCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("PVX", PVX, &b_PVX);
   fChain->SetBranchAddress("PVY", PVY, &b_PVY);
   fChain->SetBranchAddress("PVZ", PVZ, &b_PVZ);
   fChain->SetBranchAddress("PVXERR", PVXERR, &b_PVXERR);
   fChain->SetBranchAddress("PVYERR", PVYERR, &b_PVYERR);
   fChain->SetBranchAddress("PVZERR", PVZERR, &b_PVZERR);
   fChain->SetBranchAddress("PVCHI2", PVCHI2, &b_PVCHI2);
   fChain->SetBranchAddress("PVNDOF", PVNDOF, &b_PVNDOF);
   fChain->SetBranchAddress("PVNTRACKS", PVNTRACKS, &b_PVNTRACKS);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nLongTracks", &nLongTracks, &b_nLongTracks);
   fChain->SetBranchAddress("nDownstreamTracks", &nDownstreamTracks, &b_nDownstreamTracks);
   fChain->SetBranchAddress("nUpstreamTracks", &nUpstreamTracks, &b_nUpstreamTracks);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTTracks", &nTTracks, &b_nTTracks);
   fChain->SetBranchAddress("nBackTracks", &nBackTracks, &b_nBackTracks);
   fChain->SetBranchAddress("nRich1Hits", &nRich1Hits, &b_nRich1Hits);
   fChain->SetBranchAddress("nRich2Hits", &nRich2Hits, &b_nRich2Hits);
   fChain->SetBranchAddress("nVeloClusters", &nVeloClusters, &b_nVeloClusters);
   fChain->SetBranchAddress("nITClusters", &nITClusters, &b_nITClusters);
   fChain->SetBranchAddress("nTTClusters", &nTTClusters, &b_nTTClusters);
   fChain->SetBranchAddress("nOTClusters", &nOTClusters, &b_nOTClusters);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("nMuonCoordsS0", &nMuonCoordsS0, &b_nMuonCoordsS0);
   fChain->SetBranchAddress("nMuonCoordsS1", &nMuonCoordsS1, &b_nMuonCoordsS1);
   fChain->SetBranchAddress("nMuonCoordsS2", &nMuonCoordsS2, &b_nMuonCoordsS2);
   fChain->SetBranchAddress("nMuonCoordsS3", &nMuonCoordsS3, &b_nMuonCoordsS3);
   fChain->SetBranchAddress("nMuonCoordsS4", &nMuonCoordsS4, &b_nMuonCoordsS4);
   fChain->SetBranchAddress("nMuonTracks", &nMuonTracks, &b_nMuonTracks);
   fChain->SetBranchAddress("L0Global", &L0Global, &b_L0Global);
   fChain->SetBranchAddress("Hlt1Global", &Hlt1Global, &b_Hlt1Global);
   fChain->SetBranchAddress("Hlt2Global", &Hlt2Global, &b_Hlt2Global);
   fChain->SetBranchAddress("L0HadronDecision", &L0HadronDecision, &b_L0HadronDecision);
   fChain->SetBranchAddress("L0MuonDecision", &L0MuonDecision, &b_L0MuonDecision);
   fChain->SetBranchAddress("L0DiMuonDecision", &L0DiMuonDecision, &b_L0DiMuonDecision);
   fChain->SetBranchAddress("L0ElectronDecision", &L0ElectronDecision, &b_L0ElectronDecision);
   fChain->SetBranchAddress("L0PhotonDecision", &L0PhotonDecision, &b_L0PhotonDecision);
   fChain->SetBranchAddress("L0nSelections", &L0nSelections, &b_L0nSelections);
   fChain->SetBranchAddress("Hlt1SingleHadronDecision", &Hlt1SingleHadronDecision, &b_Hlt1SingleHadronDecision);
   fChain->SetBranchAddress("Hlt1MBNoBiasDecision", &Hlt1MBNoBiasDecision, &b_Hlt1MBNoBiasDecision);
   fChain->SetBranchAddress("Hlt1DiHadronDecision", &Hlt1DiHadronDecision, &b_Hlt1DiHadronDecision);
   fChain->SetBranchAddress("Hlt1L0AnyDecision", &Hlt1L0AnyDecision, &b_Hlt1L0AnyDecision);
   fChain->SetBranchAddress("Hlt1TrackAllL0Decision", &Hlt1TrackAllL0Decision, &b_Hlt1TrackAllL0Decision);
   fChain->SetBranchAddress("Hlt1nSelections", &Hlt1nSelections, &b_Hlt1nSelections);
   fChain->SetBranchAddress("Hlt2TopoOSTF4BodyDecision", &Hlt2TopoOSTF4BodyDecision, &b_Hlt2TopoOSTF4BodyDecision);
   fChain->SetBranchAddress("Hlt2IncPhiDecision", &Hlt2IncPhiDecision, &b_Hlt2IncPhiDecision);
   fChain->SetBranchAddress("Hlt2Topo4BodySimpleDecision", &Hlt2Topo4BodySimpleDecision, &b_Hlt2Topo4BodySimpleDecision);
   fChain->SetBranchAddress("Hlt2Topo3BodySimpleDecision", &Hlt2Topo3BodySimpleDecision, &b_Hlt2Topo3BodySimpleDecision);
   fChain->SetBranchAddress("Hlt2Topo3BodyBBDTDecision", &Hlt2Topo3BodyBBDTDecision, &b_Hlt2Topo3BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2Topo2BodySimpleDecision", &Hlt2Topo2BodySimpleDecision, &b_Hlt2Topo2BodySimpleDecision);
   fChain->SetBranchAddress("Hlt2Topo2BodyBBDTDecision", &Hlt2Topo2BodyBBDTDecision, &b_Hlt2Topo2BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2Topo4BodyBBDTDecision", &Hlt2Topo4BodyBBDTDecision, &b_Hlt2Topo4BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2TopoMu4BodyBBDTDecision", &Hlt2TopoMu4BodyBBDTDecision, &b_Hlt2TopoMu4BodyBBDTDecision);
   fChain->SetBranchAddress("Hlt2IncPhiSidebandsDecision", &Hlt2IncPhiSidebandsDecision, &b_Hlt2IncPhiSidebandsDecision);
   fChain->SetBranchAddress("Hlt2B2HHDecision", &Hlt2B2HHDecision, &b_Hlt2B2HHDecision);
   fChain->SetBranchAddress("Hlt2nSelections", &Hlt2nSelections, &b_Hlt2nSelections);
   fChain->SetBranchAddress("MaxRoutingBits", &MaxRoutingBits, &b_MaxRoutingBits);
   fChain->SetBranchAddress("RoutingBits", RoutingBits, &b_RoutingBits);
   Notify();

   outTree->Branch("B_s0_ENDVERTEX_X", &B_s0_ENDVERTEX_X);
   outTree->Branch("B_s0_ENDVERTEX_Y", &B_s0_ENDVERTEX_Y);
   outTree->Branch("B_s0_ENDVERTEX_Z", &B_s0_ENDVERTEX_Z);
   outTree->Branch("B_s0_ENDVERTEX_XERR", &B_s0_ENDVERTEX_XERR);
   outTree->Branch("B_s0_ENDVERTEX_YERR", &B_s0_ENDVERTEX_YERR);
   outTree->Branch("B_s0_ENDVERTEX_ZERR", &B_s0_ENDVERTEX_ZERR);
   outTree->Branch("B_s0_ENDVERTEX_CHI2", &B_s0_ENDVERTEX_CHI2);
   outTree->Branch("B_s0_ENDVERTEX_NDOF", &B_s0_ENDVERTEX_NDOF);
   //outTree->Branch("B_s0_ENDVERTEX_COV_", B_s0_ENDVERTEX_COV_);
   outTree->Branch("B_s0_OWNPV_X", &B_s0_OWNPV_X);
   outTree->Branch("B_s0_OWNPV_Y", &B_s0_OWNPV_Y);
   outTree->Branch("B_s0_OWNPV_Z", &B_s0_OWNPV_Z);
   outTree->Branch("B_s0_OWNPV_XERR", &B_s0_OWNPV_XERR);
   outTree->Branch("B_s0_OWNPV_YERR", &B_s0_OWNPV_YERR);
   outTree->Branch("B_s0_OWNPV_ZERR", &B_s0_OWNPV_ZERR);
   outTree->Branch("B_s0_OWNPV_CHI2", &B_s0_OWNPV_CHI2);
   outTree->Branch("B_s0_OWNPV_NDOF", &B_s0_OWNPV_NDOF);
   //outTree->Branch("B_s0_OWNPV_COV_", B_s0_OWNPV_COV_);
   outTree->Branch("B_s0_IP_OWNPV", &B_s0_IP_OWNPV);
   outTree->Branch("B_s0_IPCHI2_OWNPV", &B_s0_IPCHI2_OWNPV);
   outTree->Branch("B_s0_FD_OWNPV", &B_s0_FD_OWNPV);
   outTree->Branch("B_s0_FDCHI2_OWNPV", &B_s0_FDCHI2_OWNPV);
   outTree->Branch("B_s0_DIRA_OWNPV", &B_s0_DIRA_OWNPV);
   outTree->Branch("B_s0_P", &B_s0_P);
   outTree->Branch("B_s0_PT", &B_s0_PT);
   outTree->Branch("B_s0_PE", &B_s0_PE);
   outTree->Branch("B_s0_PX", &B_s0_PX);
   outTree->Branch("B_s0_PY", &B_s0_PY);
   outTree->Branch("B_s0_PZ", &B_s0_PZ);
   outTree->Branch("B_s0_MM", &B_s0_MM);
   outTree->Branch("B_s0_MMERR", &B_s0_MMERR);
   outTree->Branch("B_s0_M", &B_s0_M);
   outTree->Branch("B_s0_BKGCAT", &B_s0_BKGCAT);
   outTree->Branch("B_s0_TRUEID", &B_s0_TRUEID);
   outTree->Branch("B_s0_MC_MOTHER_ID", &B_s0_MC_MOTHER_ID);
   outTree->Branch("B_s0_MC_MOTHER_KEY", &B_s0_MC_MOTHER_KEY);
   outTree->Branch("B_s0_MC_GD_MOTHER_ID", &B_s0_MC_GD_MOTHER_ID);
   outTree->Branch("B_s0_MC_GD_MOTHER_KEY", &B_s0_MC_GD_MOTHER_KEY);
   outTree->Branch("B_s0_MC_GD_GD_MOTHER_ID", &B_s0_MC_GD_GD_MOTHER_ID);
   outTree->Branch("B_s0_MC_GD_GD_MOTHER_KEY", &B_s0_MC_GD_GD_MOTHER_KEY);
   outTree->Branch("B_s0_TRUEP_E", &B_s0_TRUEP_E);
   outTree->Branch("B_s0_TRUEP_X", &B_s0_TRUEP_X);
   outTree->Branch("B_s0_TRUEP_Y", &B_s0_TRUEP_Y);
   outTree->Branch("B_s0_TRUEP_Z", &B_s0_TRUEP_Z);
   outTree->Branch("B_s0_TRUEPT", &B_s0_TRUEPT);
   outTree->Branch("B_s0_TRUEORIGINVERTEX_X", &B_s0_TRUEORIGINVERTEX_X);
   outTree->Branch("B_s0_TRUEORIGINVERTEX_Y", &B_s0_TRUEORIGINVERTEX_Y);
   outTree->Branch("B_s0_TRUEORIGINVERTEX_Z", &B_s0_TRUEORIGINVERTEX_Z);
   outTree->Branch("B_s0_TRUEENDVERTEX_X", &B_s0_TRUEENDVERTEX_X);
   outTree->Branch("B_s0_TRUEENDVERTEX_Y", &B_s0_TRUEENDVERTEX_Y);
   outTree->Branch("B_s0_TRUEENDVERTEX_Z", &B_s0_TRUEENDVERTEX_Z);
   outTree->Branch("B_s0_TRUEISSTABLE", &B_s0_TRUEISSTABLE);
   outTree->Branch("B_s0_TRUETAU", &B_s0_TRUETAU);
   outTree->Branch("B_s0_ThetaL", &B_s0_ThetaL);
   outTree->Branch("B_s0_ThetaK", &B_s0_ThetaK);
   outTree->Branch("B_s0_Phi", &B_s0_Phi);
   outTree->Branch("B_s0_ThetaTr", &B_s0_ThetaTr);
   outTree->Branch("B_s0_PhiTr", &B_s0_PhiTr);
   outTree->Branch("B_s0_ThetaVtr", &B_s0_ThetaVtr);
   outTree->Branch("B_s0_ID", &B_s0_ID);
   outTree->Branch("B_s0_TAU", &B_s0_TAU);
   outTree->Branch("B_s0_TAUERR", &B_s0_TAUERR);
   outTree->Branch("B_s0_TAUCHI2", &B_s0_TAUCHI2);
   outTree->Branch("B_s0_L0Global_Dec", &B_s0_L0Global_Dec);
   outTree->Branch("B_s0_L0Global_TIS", &B_s0_L0Global_TIS);
   outTree->Branch("B_s0_L0Global_TOS", &B_s0_L0Global_TOS);
   outTree->Branch("B_s0_Hlt1Global_Dec", &B_s0_Hlt1Global_Dec);
   outTree->Branch("B_s0_Hlt1Global_TIS", &B_s0_Hlt1Global_TIS);
   outTree->Branch("B_s0_Hlt1Global_TOS", &B_s0_Hlt1Global_TOS);
   outTree->Branch("B_s0_Hlt1Phys_Dec", &B_s0_Hlt1Phys_Dec);
   outTree->Branch("B_s0_Hlt1Phys_TIS", &B_s0_Hlt1Phys_TIS);
   outTree->Branch("B_s0_Hlt1Phys_TOS", &B_s0_Hlt1Phys_TOS);
   outTree->Branch("B_s0_Hlt2Global_Dec", &B_s0_Hlt2Global_Dec);
   outTree->Branch("B_s0_Hlt2Global_TIS", &B_s0_Hlt2Global_TIS);
   outTree->Branch("B_s0_Hlt2Global_TOS", &B_s0_Hlt2Global_TOS);
   outTree->Branch("B_s0_Hlt2Phys_Dec", &B_s0_Hlt2Phys_Dec);
   outTree->Branch("B_s0_Hlt2Phys_TIS", &B_s0_Hlt2Phys_TIS);
   outTree->Branch("B_s0_Hlt2Phys_TOS", &B_s0_Hlt2Phys_TOS);
   outTree->Branch("B_s0_StrippingGlobal_Dec", &B_s0_StrippingGlobal_Dec);
   outTree->Branch("B_s0_StrippingGlobal_TIS", &B_s0_StrippingGlobal_TIS);
   outTree->Branch("B_s0_StrippingGlobal_TOS", &B_s0_StrippingGlobal_TOS);
   outTree->Branch("B_s0_L0HadronDecision_Dec", &B_s0_L0HadronDecision_Dec);
   outTree->Branch("B_s0_L0HadronDecision_TIS", &B_s0_L0HadronDecision_TIS);
   outTree->Branch("B_s0_L0HadronDecision_TOS", &B_s0_L0HadronDecision_TOS);
   outTree->Branch("B_s0_L0MuonDecision_Dec", &B_s0_L0MuonDecision_Dec);
   outTree->Branch("B_s0_L0MuonDecision_TIS", &B_s0_L0MuonDecision_TIS);
   outTree->Branch("B_s0_L0MuonDecision_TOS", &B_s0_L0MuonDecision_TOS);
   outTree->Branch("B_s0_L0DiMuonDecision_Dec", &B_s0_L0DiMuonDecision_Dec);
   outTree->Branch("B_s0_L0DiMuonDecision_TIS", &B_s0_L0DiMuonDecision_TIS);
   outTree->Branch("B_s0_L0DiMuonDecision_TOS", &B_s0_L0DiMuonDecision_TOS);
   outTree->Branch("B_s0_L0ElectronDecision_Dec", &B_s0_L0ElectronDecision_Dec);
   outTree->Branch("B_s0_L0ElectronDecision_TIS", &B_s0_L0ElectronDecision_TIS);
   outTree->Branch("B_s0_L0ElectronDecision_TOS", &B_s0_L0ElectronDecision_TOS);
   outTree->Branch("B_s0_L0PhotonDecision_Dec", &B_s0_L0PhotonDecision_Dec);
   outTree->Branch("B_s0_L0PhotonDecision_TIS", &B_s0_L0PhotonDecision_TIS);
   outTree->Branch("B_s0_L0PhotonDecision_TOS", &B_s0_L0PhotonDecision_TOS);
   outTree->Branch("B_s0_Hlt1SingleHadronDecision_Dec", &B_s0_Hlt1SingleHadronDecision_Dec);
   outTree->Branch("B_s0_Hlt1SingleHadronDecision_TIS", &B_s0_Hlt1SingleHadronDecision_TIS);
   outTree->Branch("B_s0_Hlt1SingleHadronDecision_TOS", &B_s0_Hlt1SingleHadronDecision_TOS);
   outTree->Branch("B_s0_Hlt1MBNoBiasDecision_Dec", &B_s0_Hlt1MBNoBiasDecision_Dec);
   outTree->Branch("B_s0_Hlt1MBNoBiasDecision_TIS", &B_s0_Hlt1MBNoBiasDecision_TIS);
   outTree->Branch("B_s0_Hlt1MBNoBiasDecision_TOS", &B_s0_Hlt1MBNoBiasDecision_TOS);
   outTree->Branch("B_s0_Hlt1DiHadronDecision_Dec", &B_s0_Hlt1DiHadronDecision_Dec);
   outTree->Branch("B_s0_Hlt1DiHadronDecision_TIS", &B_s0_Hlt1DiHadronDecision_TIS);
   outTree->Branch("B_s0_Hlt1DiHadronDecision_TOS", &B_s0_Hlt1DiHadronDecision_TOS);
   outTree->Branch("B_s0_Hlt1L0AnyDecision_Dec", &B_s0_Hlt1L0AnyDecision_Dec);
   outTree->Branch("B_s0_Hlt1L0AnyDecision_TIS", &B_s0_Hlt1L0AnyDecision_TIS);
   outTree->Branch("B_s0_Hlt1L0AnyDecision_TOS", &B_s0_Hlt1L0AnyDecision_TOS);
   outTree->Branch("B_s0_Hlt1TrackAllL0Decision_Dec", &B_s0_Hlt1TrackAllL0Decision_Dec);
   outTree->Branch("B_s0_Hlt1TrackAllL0Decision_TIS", &B_s0_Hlt1TrackAllL0Decision_TIS);
   outTree->Branch("B_s0_Hlt1TrackAllL0Decision_TOS", &B_s0_Hlt1TrackAllL0Decision_TOS);
   outTree->Branch("B_s0_Hlt2TopoOSTF4BodyDecision_Dec", &B_s0_Hlt2TopoOSTF4BodyDecision_Dec);
   outTree->Branch("B_s0_Hlt2TopoOSTF4BodyDecision_TIS", &B_s0_Hlt2TopoOSTF4BodyDecision_TIS);
   outTree->Branch("B_s0_Hlt2TopoOSTF4BodyDecision_TOS", &B_s0_Hlt2TopoOSTF4BodyDecision_TOS);
   outTree->Branch("B_s0_Hlt2IncPhiDecision_Dec", &B_s0_Hlt2IncPhiDecision_Dec);
   outTree->Branch("B_s0_Hlt2IncPhiDecision_TIS", &B_s0_Hlt2IncPhiDecision_TIS);
   outTree->Branch("B_s0_Hlt2IncPhiDecision_TOS", &B_s0_Hlt2IncPhiDecision_TOS);
   outTree->Branch("B_s0_Hlt2Topo4BodySimpleDecision_Dec", &B_s0_Hlt2Topo4BodySimpleDecision_Dec);
   outTree->Branch("B_s0_Hlt2Topo4BodySimpleDecision_TIS", &B_s0_Hlt2Topo4BodySimpleDecision_TIS);
   outTree->Branch("B_s0_Hlt2Topo4BodySimpleDecision_TOS", &B_s0_Hlt2Topo4BodySimpleDecision_TOS);
   outTree->Branch("B_s0_Hlt2Topo3BodySimpleDecision_Dec", &B_s0_Hlt2Topo3BodySimpleDecision_Dec);
   outTree->Branch("B_s0_Hlt2Topo3BodySimpleDecision_TIS", &B_s0_Hlt2Topo3BodySimpleDecision_TIS);
   outTree->Branch("B_s0_Hlt2Topo3BodySimpleDecision_TOS", &B_s0_Hlt2Topo3BodySimpleDecision_TOS);
   outTree->Branch("B_s0_Hlt2Topo3BodyBBDTDecision_Dec", &B_s0_Hlt2Topo3BodyBBDTDecision_Dec);
   outTree->Branch("B_s0_Hlt2Topo3BodyBBDTDecision_TIS", &B_s0_Hlt2Topo3BodyBBDTDecision_TIS);
   outTree->Branch("B_s0_Hlt2Topo3BodyBBDTDecision_TOS", &B_s0_Hlt2Topo3BodyBBDTDecision_TOS);
   outTree->Branch("B_s0_Hlt2Topo2BodySimpleDecision_Dec", &B_s0_Hlt2Topo2BodySimpleDecision_Dec);
   outTree->Branch("B_s0_Hlt2Topo2BodySimpleDecision_TIS", &B_s0_Hlt2Topo2BodySimpleDecision_TIS);
   outTree->Branch("B_s0_Hlt2Topo2BodySimpleDecision_TOS", &B_s0_Hlt2Topo2BodySimpleDecision_TOS);
   outTree->Branch("B_s0_Hlt2Topo2BodyBBDTDecision_Dec", &B_s0_Hlt2Topo2BodyBBDTDecision_Dec);
   outTree->Branch("B_s0_Hlt2Topo2BodyBBDTDecision_TIS", &B_s0_Hlt2Topo2BodyBBDTDecision_TIS);
   outTree->Branch("B_s0_Hlt2Topo2BodyBBDTDecision_TOS", &B_s0_Hlt2Topo2BodyBBDTDecision_TOS);
   outTree->Branch("B_s0_Hlt2Topo4BodyBBDTDecision_Dec", &B_s0_Hlt2Topo4BodyBBDTDecision_Dec);
   outTree->Branch("B_s0_Hlt2Topo4BodyBBDTDecision_TIS", &B_s0_Hlt2Topo4BodyBBDTDecision_TIS);
   outTree->Branch("B_s0_Hlt2Topo4BodyBBDTDecision_TOS", &B_s0_Hlt2Topo4BodyBBDTDecision_TOS);
   outTree->Branch("B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec", &B_s0_Hlt2TopoMu4BodyBBDTDecision_Dec);
   outTree->Branch("B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS", &B_s0_Hlt2TopoMu4BodyBBDTDecision_TIS);
   outTree->Branch("B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS", &B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS);
   outTree->Branch("B_s0_Hlt2IncPhiSidebandsDecision_Dec", &B_s0_Hlt2IncPhiSidebandsDecision_Dec);
   outTree->Branch("B_s0_Hlt2IncPhiSidebandsDecision_TIS", &B_s0_Hlt2IncPhiSidebandsDecision_TIS);
   outTree->Branch("B_s0_Hlt2IncPhiSidebandsDecision_TOS", &B_s0_Hlt2IncPhiSidebandsDecision_TOS);
   outTree->Branch("B_s0_Hlt2B2HHDecision_Dec", &B_s0_Hlt2B2HHDecision_Dec);
   outTree->Branch("B_s0_Hlt2B2HHDecision_TIS", &B_s0_Hlt2B2HHDecision_TIS);
   outTree->Branch("B_s0_Hlt2B2HHDecision_TOS", &B_s0_Hlt2B2HHDecision_TOS);
   outTree->Branch("B_s0_TAGDECISION", &B_s0_TAGDECISION);
   outTree->Branch("B_s0_TAGCAT", &B_s0_TAGCAT);
   outTree->Branch("B_s0_TAGOMEGA", &B_s0_TAGOMEGA);
   outTree->Branch("B_s0_TAGDECISION_OS", &B_s0_TAGDECISION_OS);
   outTree->Branch("B_s0_TAGCAT_OS", &B_s0_TAGCAT_OS);
   outTree->Branch("B_s0_TAGOMEGA_OS", &B_s0_TAGOMEGA_OS);
   outTree->Branch("B_s0_TAGGER", &B_s0_TAGGER);
   outTree->Branch("B_s0_NOPARTWITHINDCHI2WDW", &B_s0_NOPARTWITHINDCHI2WDW);
   outTree->Branch("B_s0_NOPARTWITHINCHI2WDW", &B_s0_NOPARTWITHINCHI2WDW);
   outTree->Branch("B_s0_SMALLESTCHI2", &B_s0_SMALLESTCHI2);
   outTree->Branch("B_s0_SMALLESTDELTACHI2", &B_s0_SMALLESTDELTACHI2);
   outTree->Branch("Kstb_CosTheta", &Kstb_CosTheta);
   outTree->Branch("Kstb_ENDVERTEX_X", &Kstb_ENDVERTEX_X);
   outTree->Branch("Kstb_ENDVERTEX_Y", &Kstb_ENDVERTEX_Y);
   outTree->Branch("Kstb_ENDVERTEX_Z", &Kstb_ENDVERTEX_Z);
   outTree->Branch("Kstb_ENDVERTEX_XERR", &Kstb_ENDVERTEX_XERR);
   outTree->Branch("Kstb_ENDVERTEX_YERR", &Kstb_ENDVERTEX_YERR);
   outTree->Branch("Kstb_ENDVERTEX_ZERR", &Kstb_ENDVERTEX_ZERR);
   outTree->Branch("Kstb_ENDVERTEX_CHI2", &Kstb_ENDVERTEX_CHI2);
   outTree->Branch("Kstb_ENDVERTEX_NDOF", &Kstb_ENDVERTEX_NDOF);
   //outTree->Branch("Kstb_ENDVERTEX_COV_", Kstb_ENDVERTEX_COV_);
   outTree->Branch("Kstb_OWNPV_X", &Kstb_OWNPV_X);
   outTree->Branch("Kstb_OWNPV_Y", &Kstb_OWNPV_Y);
   outTree->Branch("Kstb_OWNPV_Z", &Kstb_OWNPV_Z);
   outTree->Branch("Kstb_OWNPV_XERR", &Kstb_OWNPV_XERR);
   outTree->Branch("Kstb_OWNPV_YERR", &Kstb_OWNPV_YERR);
   outTree->Branch("Kstb_OWNPV_ZERR", &Kstb_OWNPV_ZERR);
   outTree->Branch("Kstb_OWNPV_CHI2", &Kstb_OWNPV_CHI2);
   outTree->Branch("Kstb_OWNPV_NDOF", &Kstb_OWNPV_NDOF);
   //outTree->Branch("Kstb_OWNPV_COV_", Kstb_OWNPV_COV_);
   outTree->Branch("Kstb_IP_OWNPV", &Kstb_IP_OWNPV);
   outTree->Branch("Kstb_IPCHI2_OWNPV", &Kstb_IPCHI2_OWNPV);
   outTree->Branch("Kstb_FD_OWNPV", &Kstb_FD_OWNPV);
   outTree->Branch("Kstb_FDCHI2_OWNPV", &Kstb_FDCHI2_OWNPV);
   outTree->Branch("Kstb_DIRA_OWNPV", &Kstb_DIRA_OWNPV);
   outTree->Branch("Kstb_ORIVX_X", &Kstb_ORIVX_X);
   outTree->Branch("Kstb_ORIVX_Y", &Kstb_ORIVX_Y);
   outTree->Branch("Kstb_ORIVX_Z", &Kstb_ORIVX_Z);
   outTree->Branch("Kstb_ORIVX_XERR", &Kstb_ORIVX_XERR);
   outTree->Branch("Kstb_ORIVX_YERR", &Kstb_ORIVX_YERR);
   outTree->Branch("Kstb_ORIVX_ZERR", &Kstb_ORIVX_ZERR);
   outTree->Branch("Kstb_ORIVX_CHI2", &Kstb_ORIVX_CHI2);
   outTree->Branch("Kstb_ORIVX_NDOF", &Kstb_ORIVX_NDOF);
   //outTree->Branch("Kstb_ORIVX_COV_", Kstb_ORIVX_COV_);
   outTree->Branch("Kstb_FD_ORIVX", &Kstb_FD_ORIVX);
   outTree->Branch("Kstb_FDCHI2_ORIVX", &Kstb_FDCHI2_ORIVX);
   outTree->Branch("Kstb_DIRA_ORIVX", &Kstb_DIRA_ORIVX);
   outTree->Branch("Kstb_P", &Kstb_P);
   outTree->Branch("Kstb_PT", &Kstb_PT);
   outTree->Branch("Kstb_PE", &Kstb_PE);
   outTree->Branch("Kstb_PX", &Kstb_PX);
   outTree->Branch("Kstb_PY", &Kstb_PY);
   outTree->Branch("Kstb_PZ", &Kstb_PZ);
   outTree->Branch("Kstb_MM", &Kstb_MM);
   outTree->Branch("Kstb_MMERR", &Kstb_MMERR);
   outTree->Branch("Kstb_M", &Kstb_M);
   outTree->Branch("Kstb_BKGCAT", &Kstb_BKGCAT);
   outTree->Branch("Kstb_TRUEID", &Kstb_TRUEID);
   outTree->Branch("Kstb_MC_MOTHER_ID", &Kstb_MC_MOTHER_ID);
   outTree->Branch("Kstb_MC_MOTHER_KEY", &Kstb_MC_MOTHER_KEY);
   outTree->Branch("Kstb_MC_GD_MOTHER_ID", &Kstb_MC_GD_MOTHER_ID);
   outTree->Branch("Kstb_MC_GD_MOTHER_KEY", &Kstb_MC_GD_MOTHER_KEY);
   outTree->Branch("Kstb_MC_GD_GD_MOTHER_ID", &Kstb_MC_GD_GD_MOTHER_ID);
   outTree->Branch("Kstb_MC_GD_GD_MOTHER_KEY", &Kstb_MC_GD_GD_MOTHER_KEY);
   outTree->Branch("Kstb_TRUEP_E", &Kstb_TRUEP_E);
   outTree->Branch("Kstb_TRUEP_X", &Kstb_TRUEP_X);
   outTree->Branch("Kstb_TRUEP_Y", &Kstb_TRUEP_Y);
   outTree->Branch("Kstb_TRUEP_Z", &Kstb_TRUEP_Z);
   outTree->Branch("Kstb_TRUEPT", &Kstb_TRUEPT);
   outTree->Branch("Kstb_TRUEORIGINVERTEX_X", &Kstb_TRUEORIGINVERTEX_X);
   outTree->Branch("Kstb_TRUEORIGINVERTEX_Y", &Kstb_TRUEORIGINVERTEX_Y);
   outTree->Branch("Kstb_TRUEORIGINVERTEX_Z", &Kstb_TRUEORIGINVERTEX_Z);
   outTree->Branch("Kstb_TRUEENDVERTEX_X", &Kstb_TRUEENDVERTEX_X);
   outTree->Branch("Kstb_TRUEENDVERTEX_Y", &Kstb_TRUEENDVERTEX_Y);
   outTree->Branch("Kstb_TRUEENDVERTEX_Z", &Kstb_TRUEENDVERTEX_Z);
   outTree->Branch("Kstb_TRUEISSTABLE", &Kstb_TRUEISSTABLE);
   outTree->Branch("Kstb_TRUETAU", &Kstb_TRUETAU);
   outTree->Branch("Kstb_ThetaL", &Kstb_ThetaL);
   outTree->Branch("Kstb_ThetaK", &Kstb_ThetaK);
   outTree->Branch("Kstb_Phi", &Kstb_Phi);
   outTree->Branch("Kstb_ThetaTr", &Kstb_ThetaTr);
   outTree->Branch("Kstb_PhiTr", &Kstb_PhiTr);
   outTree->Branch("Kstb_ThetaVtr", &Kstb_ThetaVtr);
   outTree->Branch("Kstb_ID", &Kstb_ID);
   outTree->Branch("Kstb_TAU", &Kstb_TAU);
   outTree->Branch("Kstb_TAUERR", &Kstb_TAUERR);
   outTree->Branch("Kstb_TAUCHI2", &Kstb_TAUCHI2);
   outTree->Branch("Kstb_L0Global_Dec", &Kstb_L0Global_Dec);
   outTree->Branch("Kstb_L0Global_TIS", &Kstb_L0Global_TIS);
   outTree->Branch("Kstb_L0Global_TOS", &Kstb_L0Global_TOS);
   outTree->Branch("Kstb_Hlt1Global_Dec", &Kstb_Hlt1Global_Dec);
   outTree->Branch("Kstb_Hlt1Global_TIS", &Kstb_Hlt1Global_TIS);
   outTree->Branch("Kstb_Hlt1Global_TOS", &Kstb_Hlt1Global_TOS);
   outTree->Branch("Kstb_Hlt1Phys_Dec", &Kstb_Hlt1Phys_Dec);
   outTree->Branch("Kstb_Hlt1Phys_TIS", &Kstb_Hlt1Phys_TIS);
   outTree->Branch("Kstb_Hlt1Phys_TOS", &Kstb_Hlt1Phys_TOS);
   outTree->Branch("Kstb_Hlt2Global_Dec", &Kstb_Hlt2Global_Dec);
   outTree->Branch("Kstb_Hlt2Global_TIS", &Kstb_Hlt2Global_TIS);
   outTree->Branch("Kstb_Hlt2Global_TOS", &Kstb_Hlt2Global_TOS);
   outTree->Branch("Kstb_Hlt2Phys_Dec", &Kstb_Hlt2Phys_Dec);
   outTree->Branch("Kstb_Hlt2Phys_TIS", &Kstb_Hlt2Phys_TIS);
   outTree->Branch("Kstb_Hlt2Phys_TOS", &Kstb_Hlt2Phys_TOS);
   outTree->Branch("Kstb_StrippingGlobal_Dec", &Kstb_StrippingGlobal_Dec);
   outTree->Branch("Kstb_StrippingGlobal_TIS", &Kstb_StrippingGlobal_TIS);
   outTree->Branch("Kstb_StrippingGlobal_TOS", &Kstb_StrippingGlobal_TOS);
   outTree->Branch("Kstb_L0HadronDecision_Dec", &Kstb_L0HadronDecision_Dec);
   outTree->Branch("Kstb_L0HadronDecision_TIS", &Kstb_L0HadronDecision_TIS);
   outTree->Branch("Kstb_L0HadronDecision_TOS", &Kstb_L0HadronDecision_TOS);
   outTree->Branch("Kstb_L0MuonDecision_Dec", &Kstb_L0MuonDecision_Dec);
   outTree->Branch("Kstb_L0MuonDecision_TIS", &Kstb_L0MuonDecision_TIS);
   outTree->Branch("Kstb_L0MuonDecision_TOS", &Kstb_L0MuonDecision_TOS);
   outTree->Branch("Kstb_L0DiMuonDecision_Dec", &Kstb_L0DiMuonDecision_Dec);
   outTree->Branch("Kstb_L0DiMuonDecision_TIS", &Kstb_L0DiMuonDecision_TIS);
   outTree->Branch("Kstb_L0DiMuonDecision_TOS", &Kstb_L0DiMuonDecision_TOS);
   outTree->Branch("Kstb_L0ElectronDecision_Dec", &Kstb_L0ElectronDecision_Dec);
   outTree->Branch("Kstb_L0ElectronDecision_TIS", &Kstb_L0ElectronDecision_TIS);
   outTree->Branch("Kstb_L0ElectronDecision_TOS", &Kstb_L0ElectronDecision_TOS);
   outTree->Branch("Kstb_L0PhotonDecision_Dec", &Kstb_L0PhotonDecision_Dec);
   outTree->Branch("Kstb_L0PhotonDecision_TIS", &Kstb_L0PhotonDecision_TIS);
   outTree->Branch("Kstb_L0PhotonDecision_TOS", &Kstb_L0PhotonDecision_TOS);
   outTree->Branch("Kstb_Hlt1SingleHadronDecision_Dec", &Kstb_Hlt1SingleHadronDecision_Dec);
   outTree->Branch("Kstb_Hlt1SingleHadronDecision_TIS", &Kstb_Hlt1SingleHadronDecision_TIS);
   outTree->Branch("Kstb_Hlt1SingleHadronDecision_TOS", &Kstb_Hlt1SingleHadronDecision_TOS);
   outTree->Branch("Kstb_Hlt1MBNoBiasDecision_Dec", &Kstb_Hlt1MBNoBiasDecision_Dec);
   outTree->Branch("Kstb_Hlt1MBNoBiasDecision_TIS", &Kstb_Hlt1MBNoBiasDecision_TIS);
   outTree->Branch("Kstb_Hlt1MBNoBiasDecision_TOS", &Kstb_Hlt1MBNoBiasDecision_TOS);
   outTree->Branch("Kstb_Hlt1DiHadronDecision_Dec", &Kstb_Hlt1DiHadronDecision_Dec);
   outTree->Branch("Kstb_Hlt1DiHadronDecision_TIS", &Kstb_Hlt1DiHadronDecision_TIS);
   outTree->Branch("Kstb_Hlt1DiHadronDecision_TOS", &Kstb_Hlt1DiHadronDecision_TOS);
   outTree->Branch("Kstb_Hlt1L0AnyDecision_Dec", &Kstb_Hlt1L0AnyDecision_Dec);
   outTree->Branch("Kstb_Hlt1L0AnyDecision_TIS", &Kstb_Hlt1L0AnyDecision_TIS);
   outTree->Branch("Kstb_Hlt1L0AnyDecision_TOS", &Kstb_Hlt1L0AnyDecision_TOS);
   outTree->Branch("Kstb_Hlt1TrackAllL0Decision_Dec", &Kstb_Hlt1TrackAllL0Decision_Dec);
   outTree->Branch("Kstb_Hlt1TrackAllL0Decision_TIS", &Kstb_Hlt1TrackAllL0Decision_TIS);
   outTree->Branch("Kstb_Hlt1TrackAllL0Decision_TOS", &Kstb_Hlt1TrackAllL0Decision_TOS);
   outTree->Branch("Kstb_Hlt2TopoOSTF4BodyDecision_Dec", &Kstb_Hlt2TopoOSTF4BodyDecision_Dec);
   outTree->Branch("Kstb_Hlt2TopoOSTF4BodyDecision_TIS", &Kstb_Hlt2TopoOSTF4BodyDecision_TIS);
   outTree->Branch("Kstb_Hlt2TopoOSTF4BodyDecision_TOS", &Kstb_Hlt2TopoOSTF4BodyDecision_TOS);
   outTree->Branch("Kstb_Hlt2IncPhiDecision_Dec", &Kstb_Hlt2IncPhiDecision_Dec);
   outTree->Branch("Kstb_Hlt2IncPhiDecision_TIS", &Kstb_Hlt2IncPhiDecision_TIS);
   outTree->Branch("Kstb_Hlt2IncPhiDecision_TOS", &Kstb_Hlt2IncPhiDecision_TOS);
   outTree->Branch("Kstb_Hlt2Topo4BodySimpleDecision_Dec", &Kstb_Hlt2Topo4BodySimpleDecision_Dec);
   outTree->Branch("Kstb_Hlt2Topo4BodySimpleDecision_TIS", &Kstb_Hlt2Topo4BodySimpleDecision_TIS);
   outTree->Branch("Kstb_Hlt2Topo4BodySimpleDecision_TOS", &Kstb_Hlt2Topo4BodySimpleDecision_TOS);
   outTree->Branch("Kstb_Hlt2Topo3BodySimpleDecision_Dec", &Kstb_Hlt2Topo3BodySimpleDecision_Dec);
   outTree->Branch("Kstb_Hlt2Topo3BodySimpleDecision_TIS", &Kstb_Hlt2Topo3BodySimpleDecision_TIS);
   outTree->Branch("Kstb_Hlt2Topo3BodySimpleDecision_TOS", &Kstb_Hlt2Topo3BodySimpleDecision_TOS);
   outTree->Branch("Kstb_Hlt2Topo3BodyBBDTDecision_Dec", &Kstb_Hlt2Topo3BodyBBDTDecision_Dec);
   outTree->Branch("Kstb_Hlt2Topo3BodyBBDTDecision_TIS", &Kstb_Hlt2Topo3BodyBBDTDecision_TIS);
   outTree->Branch("Kstb_Hlt2Topo3BodyBBDTDecision_TOS", &Kstb_Hlt2Topo3BodyBBDTDecision_TOS);
   outTree->Branch("Kstb_Hlt2Topo2BodySimpleDecision_Dec", &Kstb_Hlt2Topo2BodySimpleDecision_Dec);
   outTree->Branch("Kstb_Hlt2Topo2BodySimpleDecision_TIS", &Kstb_Hlt2Topo2BodySimpleDecision_TIS);
   outTree->Branch("Kstb_Hlt2Topo2BodySimpleDecision_TOS", &Kstb_Hlt2Topo2BodySimpleDecision_TOS);
   outTree->Branch("Kstb_Hlt2Topo2BodyBBDTDecision_Dec", &Kstb_Hlt2Topo2BodyBBDTDecision_Dec);
   outTree->Branch("Kstb_Hlt2Topo2BodyBBDTDecision_TIS", &Kstb_Hlt2Topo2BodyBBDTDecision_TIS);
   outTree->Branch("Kstb_Hlt2Topo2BodyBBDTDecision_TOS", &Kstb_Hlt2Topo2BodyBBDTDecision_TOS);
   outTree->Branch("Kstb_Hlt2Topo4BodyBBDTDecision_Dec", &Kstb_Hlt2Topo4BodyBBDTDecision_Dec);
   outTree->Branch("Kstb_Hlt2Topo4BodyBBDTDecision_TIS", &Kstb_Hlt2Topo4BodyBBDTDecision_TIS);
   outTree->Branch("Kstb_Hlt2Topo4BodyBBDTDecision_TOS", &Kstb_Hlt2Topo4BodyBBDTDecision_TOS);
   outTree->Branch("Kstb_Hlt2TopoMu4BodyBBDTDecision_Dec", &Kstb_Hlt2TopoMu4BodyBBDTDecision_Dec);
   outTree->Branch("Kstb_Hlt2TopoMu4BodyBBDTDecision_TIS", &Kstb_Hlt2TopoMu4BodyBBDTDecision_TIS);
   outTree->Branch("Kstb_Hlt2TopoMu4BodyBBDTDecision_TOS", &Kstb_Hlt2TopoMu4BodyBBDTDecision_TOS);
   outTree->Branch("Kstb_Hlt2IncPhiSidebandsDecision_Dec", &Kstb_Hlt2IncPhiSidebandsDecision_Dec);
   outTree->Branch("Kstb_Hlt2IncPhiSidebandsDecision_TIS", &Kstb_Hlt2IncPhiSidebandsDecision_TIS);
   outTree->Branch("Kstb_Hlt2IncPhiSidebandsDecision_TOS", &Kstb_Hlt2IncPhiSidebandsDecision_TOS);
   outTree->Branch("Kstb_Hlt2B2HHDecision_Dec", &Kstb_Hlt2B2HHDecision_Dec);
   outTree->Branch("Kstb_Hlt2B2HHDecision_TIS", &Kstb_Hlt2B2HHDecision_TIS);
   outTree->Branch("Kstb_Hlt2B2HHDecision_TOS", &Kstb_Hlt2B2HHDecision_TOS);
   outTree->Branch("Kstb_NOPARTWITHINDCHI2WDW", &Kstb_NOPARTWITHINDCHI2WDW);
   outTree->Branch("Kstb_NOPARTWITHINCHI2WDW", &Kstb_NOPARTWITHINCHI2WDW);
   outTree->Branch("Kstb_SMALLESTCHI2", &Kstb_SMALLESTCHI2);
   outTree->Branch("Kstb_SMALLESTDELTACHI2", &Kstb_SMALLESTDELTACHI2);
   outTree->Branch("Piplus_CosTheta", &Piplus_CosTheta);
   outTree->Branch("Piplus_OWNPV_X", &Piplus_OWNPV_X);
   outTree->Branch("Piplus_OWNPV_Y", &Piplus_OWNPV_Y);
   outTree->Branch("Piplus_OWNPV_Z", &Piplus_OWNPV_Z);
   outTree->Branch("Piplus_OWNPV_XERR", &Piplus_OWNPV_XERR);
   outTree->Branch("Piplus_OWNPV_YERR", &Piplus_OWNPV_YERR);
   outTree->Branch("Piplus_OWNPV_ZERR", &Piplus_OWNPV_ZERR);
   outTree->Branch("Piplus_OWNPV_CHI2", &Piplus_OWNPV_CHI2);
   outTree->Branch("Piplus_OWNPV_NDOF", &Piplus_OWNPV_NDOF);
   //outTree->Branch("Piplus_OWNPV_COV_", Piplus_OWNPV_COV_);
   outTree->Branch("Piplus_IP_OWNPV", &Piplus_IP_OWNPV);
   outTree->Branch("Piplus_IPCHI2_OWNPV", &Piplus_IPCHI2_OWNPV);
   outTree->Branch("Piplus_ORIVX_X", &Piplus_ORIVX_X);
   outTree->Branch("Piplus_ORIVX_Y", &Piplus_ORIVX_Y);
   outTree->Branch("Piplus_ORIVX_Z", &Piplus_ORIVX_Z);
   outTree->Branch("Piplus_ORIVX_XERR", &Piplus_ORIVX_XERR);
   outTree->Branch("Piplus_ORIVX_YERR", &Piplus_ORIVX_YERR);
   outTree->Branch("Piplus_ORIVX_ZERR", &Piplus_ORIVX_ZERR);
   outTree->Branch("Piplus_ORIVX_CHI2", &Piplus_ORIVX_CHI2);
   outTree->Branch("Piplus_ORIVX_NDOF", &Piplus_ORIVX_NDOF);
   //outTree->Branch("Piplus_ORIVX_COV_", Piplus_ORIVX_COV_);
   outTree->Branch("Piplus_P", &Piplus_P);
   outTree->Branch("Piplus_PT", &Piplus_PT);
   outTree->Branch("Piplus_PE", &Piplus_PE);
   outTree->Branch("Piplus_PX", &Piplus_PX);
   outTree->Branch("Piplus_PY", &Piplus_PY);
   outTree->Branch("Piplus_PZ", &Piplus_PZ);
   outTree->Branch("Piplus_M", &Piplus_M);
   outTree->Branch("Piplus_L0Calo_HCAL_realET", &Piplus_L0Calo_HCAL_realET);
   outTree->Branch("Piplus_L0Calo_HCAL_xProjection", &Piplus_L0Calo_HCAL_xProjection);
   outTree->Branch("Piplus_L0Calo_HCAL_yProjection", &Piplus_L0Calo_HCAL_yProjection);
   outTree->Branch("Piplus_L0Calo_HCAL_region", &Piplus_L0Calo_HCAL_region);
   outTree->Branch("Piplus_TRUEID", &Piplus_TRUEID);
   outTree->Branch("Piplus_MC_MOTHER_ID", &Piplus_MC_MOTHER_ID);
   outTree->Branch("Piplus_MC_MOTHER_KEY", &Piplus_MC_MOTHER_KEY);
   outTree->Branch("Piplus_MC_GD_MOTHER_ID", &Piplus_MC_GD_MOTHER_ID);
   outTree->Branch("Piplus_MC_GD_MOTHER_KEY", &Piplus_MC_GD_MOTHER_KEY);
   outTree->Branch("Piplus_MC_GD_GD_MOTHER_ID", &Piplus_MC_GD_GD_MOTHER_ID);
   outTree->Branch("Piplus_MC_GD_GD_MOTHER_KEY", &Piplus_MC_GD_GD_MOTHER_KEY);
   outTree->Branch("Piplus_TRUEP_E", &Piplus_TRUEP_E);
   outTree->Branch("Piplus_TRUEP_X", &Piplus_TRUEP_X);
   outTree->Branch("Piplus_TRUEP_Y", &Piplus_TRUEP_Y);
   outTree->Branch("Piplus_TRUEP_Z", &Piplus_TRUEP_Z);
   outTree->Branch("Piplus_TRUEPT", &Piplus_TRUEPT);
   outTree->Branch("Piplus_TRUEORIGINVERTEX_X", &Piplus_TRUEORIGINVERTEX_X);
   outTree->Branch("Piplus_TRUEORIGINVERTEX_Y", &Piplus_TRUEORIGINVERTEX_Y);
   outTree->Branch("Piplus_TRUEORIGINVERTEX_Z", &Piplus_TRUEORIGINVERTEX_Z);
   outTree->Branch("Piplus_TRUEENDVERTEX_X", &Piplus_TRUEENDVERTEX_X);
   outTree->Branch("Piplus_TRUEENDVERTEX_Y", &Piplus_TRUEENDVERTEX_Y);
   outTree->Branch("Piplus_TRUEENDVERTEX_Z", &Piplus_TRUEENDVERTEX_Z);
   outTree->Branch("Piplus_TRUEISSTABLE", &Piplus_TRUEISSTABLE);
   outTree->Branch("Piplus_TRUETAU", &Piplus_TRUETAU);
   outTree->Branch("Piplus_ThetaL", &Piplus_ThetaL);
   outTree->Branch("Piplus_ThetaK", &Piplus_ThetaK);
   outTree->Branch("Piplus_Phi", &Piplus_Phi);
   outTree->Branch("Piplus_ThetaTr", &Piplus_ThetaTr);
   outTree->Branch("Piplus_PhiTr", &Piplus_PhiTr);
   outTree->Branch("Piplus_ThetaVtr", &Piplus_ThetaVtr);
   outTree->Branch("Piplus_ID", &Piplus_ID);
   outTree->Branch("Piplus_PIDe", &Piplus_PIDe);
   outTree->Branch("Piplus_PIDmu", &Piplus_PIDmu);
   outTree->Branch("Piplus_PIDK", &Piplus_PIDK);
   outTree->Branch("Piplus_PIDp", &Piplus_PIDp);
   outTree->Branch("Piplus_ProbNNe", &Piplus_ProbNNe);
   outTree->Branch("Piplus_ProbNNk", &Piplus_ProbNNk);
   outTree->Branch("Piplus_ProbNNkcorr", &Piplus_ProbNNkcorr);
   outTree->Branch("Piplus_ProbNNp", &Piplus_ProbNNp);
   outTree->Branch("Piplus_ProbNNpi", &Piplus_ProbNNpi);
   outTree->Branch("Piplus_ProbNNpicorr", &Piplus_ProbNNpicorr);
   outTree->Branch("Piplus_ProbNNmu", &Piplus_ProbNNmu);
   outTree->Branch("Piplus_ProbNNghost", &Piplus_ProbNNghost);
   outTree->Branch("Piplus_hasMuon", &Piplus_hasMuon);
   outTree->Branch("Piplus_isMuon", &Piplus_isMuon);
   outTree->Branch("Piplus_hasRich", &Piplus_hasRich);
   outTree->Branch("Piplus_hasCalo", &Piplus_hasCalo);
   outTree->Branch("Piplus_L0Global_Dec", &Piplus_L0Global_Dec);
   outTree->Branch("Piplus_L0Global_TIS", &Piplus_L0Global_TIS);
   outTree->Branch("Piplus_L0Global_TOS", &Piplus_L0Global_TOS);
   outTree->Branch("Piplus_Hlt1Global_Dec", &Piplus_Hlt1Global_Dec);
   outTree->Branch("Piplus_Hlt1Global_TIS", &Piplus_Hlt1Global_TIS);
   outTree->Branch("Piplus_Hlt1Global_TOS", &Piplus_Hlt1Global_TOS);
   outTree->Branch("Piplus_Hlt1Phys_Dec", &Piplus_Hlt1Phys_Dec);
   outTree->Branch("Piplus_Hlt1Phys_TIS", &Piplus_Hlt1Phys_TIS);
   outTree->Branch("Piplus_Hlt1Phys_TOS", &Piplus_Hlt1Phys_TOS);
   outTree->Branch("Piplus_Hlt2Global_Dec", &Piplus_Hlt2Global_Dec);
   outTree->Branch("Piplus_Hlt2Global_TIS", &Piplus_Hlt2Global_TIS);
   outTree->Branch("Piplus_Hlt2Global_TOS", &Piplus_Hlt2Global_TOS);
   outTree->Branch("Piplus_Hlt2Phys_Dec", &Piplus_Hlt2Phys_Dec);
   outTree->Branch("Piplus_Hlt2Phys_TIS", &Piplus_Hlt2Phys_TIS);
   outTree->Branch("Piplus_Hlt2Phys_TOS", &Piplus_Hlt2Phys_TOS);
   outTree->Branch("Piplus_StrippingGlobal_Dec", &Piplus_StrippingGlobal_Dec);
   outTree->Branch("Piplus_StrippingGlobal_TIS", &Piplus_StrippingGlobal_TIS);
   outTree->Branch("Piplus_StrippingGlobal_TOS", &Piplus_StrippingGlobal_TOS);
   outTree->Branch("Piplus_L0HadronDecision_Dec", &Piplus_L0HadronDecision_Dec);
   outTree->Branch("Piplus_L0HadronDecision_TIS", &Piplus_L0HadronDecision_TIS);
   outTree->Branch("Piplus_L0HadronDecision_TOS", &Piplus_L0HadronDecision_TOS);
   outTree->Branch("Piplus_L0MuonDecision_Dec", &Piplus_L0MuonDecision_Dec);
   outTree->Branch("Piplus_L0MuonDecision_TIS", &Piplus_L0MuonDecision_TIS);
   outTree->Branch("Piplus_L0MuonDecision_TOS", &Piplus_L0MuonDecision_TOS);
   outTree->Branch("Piplus_L0DiMuonDecision_Dec", &Piplus_L0DiMuonDecision_Dec);
   outTree->Branch("Piplus_L0DiMuonDecision_TIS", &Piplus_L0DiMuonDecision_TIS);
   outTree->Branch("Piplus_L0DiMuonDecision_TOS", &Piplus_L0DiMuonDecision_TOS);
   outTree->Branch("Piplus_L0ElectronDecision_Dec", &Piplus_L0ElectronDecision_Dec);
   outTree->Branch("Piplus_L0ElectronDecision_TIS", &Piplus_L0ElectronDecision_TIS);
   outTree->Branch("Piplus_L0ElectronDecision_TOS", &Piplus_L0ElectronDecision_TOS);
   outTree->Branch("Piplus_L0PhotonDecision_Dec", &Piplus_L0PhotonDecision_Dec);
   outTree->Branch("Piplus_L0PhotonDecision_TIS", &Piplus_L0PhotonDecision_TIS);
   outTree->Branch("Piplus_L0PhotonDecision_TOS", &Piplus_L0PhotonDecision_TOS);
   outTree->Branch("Piplus_Hlt1SingleHadronDecision_Dec", &Piplus_Hlt1SingleHadronDecision_Dec);
   outTree->Branch("Piplus_Hlt1SingleHadronDecision_TIS", &Piplus_Hlt1SingleHadronDecision_TIS);
   outTree->Branch("Piplus_Hlt1SingleHadronDecision_TOS", &Piplus_Hlt1SingleHadronDecision_TOS);
   outTree->Branch("Piplus_Hlt1MBNoBiasDecision_Dec", &Piplus_Hlt1MBNoBiasDecision_Dec);
   outTree->Branch("Piplus_Hlt1MBNoBiasDecision_TIS", &Piplus_Hlt1MBNoBiasDecision_TIS);
   outTree->Branch("Piplus_Hlt1MBNoBiasDecision_TOS", &Piplus_Hlt1MBNoBiasDecision_TOS);
   outTree->Branch("Piplus_Hlt1DiHadronDecision_Dec", &Piplus_Hlt1DiHadronDecision_Dec);
   outTree->Branch("Piplus_Hlt1DiHadronDecision_TIS", &Piplus_Hlt1DiHadronDecision_TIS);
   outTree->Branch("Piplus_Hlt1DiHadronDecision_TOS", &Piplus_Hlt1DiHadronDecision_TOS);
   outTree->Branch("Piplus_Hlt1L0AnyDecision_Dec", &Piplus_Hlt1L0AnyDecision_Dec);
   outTree->Branch("Piplus_Hlt1L0AnyDecision_TIS", &Piplus_Hlt1L0AnyDecision_TIS);
   outTree->Branch("Piplus_Hlt1L0AnyDecision_TOS", &Piplus_Hlt1L0AnyDecision_TOS);
   outTree->Branch("Piplus_Hlt1TrackAllL0Decision_Dec", &Piplus_Hlt1TrackAllL0Decision_Dec);
   outTree->Branch("Piplus_Hlt1TrackAllL0Decision_TIS", &Piplus_Hlt1TrackAllL0Decision_TIS);
   outTree->Branch("Piplus_Hlt1TrackAllL0Decision_TOS", &Piplus_Hlt1TrackAllL0Decision_TOS);
   outTree->Branch("Piplus_Hlt2TopoOSTF4BodyDecision_Dec", &Piplus_Hlt2TopoOSTF4BodyDecision_Dec);
   outTree->Branch("Piplus_Hlt2TopoOSTF4BodyDecision_TIS", &Piplus_Hlt2TopoOSTF4BodyDecision_TIS);
   outTree->Branch("Piplus_Hlt2TopoOSTF4BodyDecision_TOS", &Piplus_Hlt2TopoOSTF4BodyDecision_TOS);
   outTree->Branch("Piplus_Hlt2IncPhiDecision_Dec", &Piplus_Hlt2IncPhiDecision_Dec);
   outTree->Branch("Piplus_Hlt2IncPhiDecision_TIS", &Piplus_Hlt2IncPhiDecision_TIS);
   outTree->Branch("Piplus_Hlt2IncPhiDecision_TOS", &Piplus_Hlt2IncPhiDecision_TOS);
   outTree->Branch("Piplus_Hlt2Topo4BodySimpleDecision_Dec", &Piplus_Hlt2Topo4BodySimpleDecision_Dec);
   outTree->Branch("Piplus_Hlt2Topo4BodySimpleDecision_TIS", &Piplus_Hlt2Topo4BodySimpleDecision_TIS);
   outTree->Branch("Piplus_Hlt2Topo4BodySimpleDecision_TOS", &Piplus_Hlt2Topo4BodySimpleDecision_TOS);
   outTree->Branch("Piplus_Hlt2Topo3BodySimpleDecision_Dec", &Piplus_Hlt2Topo3BodySimpleDecision_Dec);
   outTree->Branch("Piplus_Hlt2Topo3BodySimpleDecision_TIS", &Piplus_Hlt2Topo3BodySimpleDecision_TIS);
   outTree->Branch("Piplus_Hlt2Topo3BodySimpleDecision_TOS", &Piplus_Hlt2Topo3BodySimpleDecision_TOS);
   outTree->Branch("Piplus_Hlt2Topo3BodyBBDTDecision_Dec", &Piplus_Hlt2Topo3BodyBBDTDecision_Dec);
   outTree->Branch("Piplus_Hlt2Topo3BodyBBDTDecision_TIS", &Piplus_Hlt2Topo3BodyBBDTDecision_TIS);
   outTree->Branch("Piplus_Hlt2Topo3BodyBBDTDecision_TOS", &Piplus_Hlt2Topo3BodyBBDTDecision_TOS);
   outTree->Branch("Piplus_Hlt2Topo2BodySimpleDecision_Dec", &Piplus_Hlt2Topo2BodySimpleDecision_Dec);
   outTree->Branch("Piplus_Hlt2Topo2BodySimpleDecision_TIS", &Piplus_Hlt2Topo2BodySimpleDecision_TIS);
   outTree->Branch("Piplus_Hlt2Topo2BodySimpleDecision_TOS", &Piplus_Hlt2Topo2BodySimpleDecision_TOS);
   outTree->Branch("Piplus_Hlt2Topo2BodyBBDTDecision_Dec", &Piplus_Hlt2Topo2BodyBBDTDecision_Dec);
   outTree->Branch("Piplus_Hlt2Topo2BodyBBDTDecision_TIS", &Piplus_Hlt2Topo2BodyBBDTDecision_TIS);
   outTree->Branch("Piplus_Hlt2Topo2BodyBBDTDecision_TOS", &Piplus_Hlt2Topo2BodyBBDTDecision_TOS);
   outTree->Branch("Piplus_Hlt2Topo4BodyBBDTDecision_Dec", &Piplus_Hlt2Topo4BodyBBDTDecision_Dec);
   outTree->Branch("Piplus_Hlt2Topo4BodyBBDTDecision_TIS", &Piplus_Hlt2Topo4BodyBBDTDecision_TIS);
   outTree->Branch("Piplus_Hlt2Topo4BodyBBDTDecision_TOS", &Piplus_Hlt2Topo4BodyBBDTDecision_TOS);
   outTree->Branch("Piplus_Hlt2TopoMu4BodyBBDTDecision_Dec", &Piplus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   outTree->Branch("Piplus_Hlt2TopoMu4BodyBBDTDecision_TIS", &Piplus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   outTree->Branch("Piplus_Hlt2TopoMu4BodyBBDTDecision_TOS", &Piplus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   outTree->Branch("Piplus_Hlt2IncPhiSidebandsDecision_Dec", &Piplus_Hlt2IncPhiSidebandsDecision_Dec);
   outTree->Branch("Piplus_Hlt2IncPhiSidebandsDecision_TIS", &Piplus_Hlt2IncPhiSidebandsDecision_TIS);
   outTree->Branch("Piplus_Hlt2IncPhiSidebandsDecision_TOS", &Piplus_Hlt2IncPhiSidebandsDecision_TOS);
   outTree->Branch("Piplus_Hlt2B2HHDecision_Dec", &Piplus_Hlt2B2HHDecision_Dec);
   outTree->Branch("Piplus_Hlt2B2HHDecision_TIS", &Piplus_Hlt2B2HHDecision_TIS);
   outTree->Branch("Piplus_Hlt2B2HHDecision_TOS", &Piplus_Hlt2B2HHDecision_TOS);
   outTree->Branch("Piplus_TRACK_Type", &Piplus_TRACK_Type);
   outTree->Branch("Piplus_TRACK_Key", &Piplus_TRACK_Key);
   outTree->Branch("Piplus_TRACK_CHI2NDOF", &Piplus_TRACK_CHI2NDOF);
   outTree->Branch("Piplus_TRACK_PCHI2", &Piplus_TRACK_PCHI2);
   outTree->Branch("Piplus_TRACK_MatchCHI2", &Piplus_TRACK_MatchCHI2);
   outTree->Branch("Piplus_TRACK_GhostProb", &Piplus_TRACK_GhostProb);
   outTree->Branch("Piplus_TRACK_CloneDist", &Piplus_TRACK_CloneDist);
   outTree->Branch("Piplus_TRACK_Likelihood", &Piplus_TRACK_Likelihood);
   outTree->Branch("Piplus_NOPARTWITHINDCHI2WDW", &Piplus_NOPARTWITHINDCHI2WDW);
   outTree->Branch("Piplus_NOPARTWITHINCHI2WDW", &Piplus_NOPARTWITHINCHI2WDW);
   outTree->Branch("Piplus_SMALLESTCHI2", &Piplus_SMALLESTCHI2);
   outTree->Branch("Piplus_SMALLESTDELTACHI2", &Piplus_SMALLESTDELTACHI2);
   outTree->Branch("Kminus_CosTheta", &Kminus_CosTheta);
   outTree->Branch("Kminus_OWNPV_X", &Kminus_OWNPV_X);
   outTree->Branch("Kminus_OWNPV_Y", &Kminus_OWNPV_Y);
   outTree->Branch("Kminus_OWNPV_Z", &Kminus_OWNPV_Z);
   outTree->Branch("Kminus_OWNPV_XERR", &Kminus_OWNPV_XERR);
   outTree->Branch("Kminus_OWNPV_YERR", &Kminus_OWNPV_YERR);
   outTree->Branch("Kminus_OWNPV_ZERR", &Kminus_OWNPV_ZERR);
   outTree->Branch("Kminus_OWNPV_CHI2", &Kminus_OWNPV_CHI2);
   outTree->Branch("Kminus_OWNPV_NDOF", &Kminus_OWNPV_NDOF);
   //outTree->Branch("Kminus_OWNPV_COV_", Kminus_OWNPV_COV_);
   outTree->Branch("Kminus_IP_OWNPV", &Kminus_IP_OWNPV);
   outTree->Branch("Kminus_IPCHI2_OWNPV", &Kminus_IPCHI2_OWNPV);
   outTree->Branch("Kminus_ORIVX_X", &Kminus_ORIVX_X);
   outTree->Branch("Kminus_ORIVX_Y", &Kminus_ORIVX_Y);
   outTree->Branch("Kminus_ORIVX_Z", &Kminus_ORIVX_Z);
   outTree->Branch("Kminus_ORIVX_XERR", &Kminus_ORIVX_XERR);
   outTree->Branch("Kminus_ORIVX_YERR", &Kminus_ORIVX_YERR);
   outTree->Branch("Kminus_ORIVX_ZERR", &Kminus_ORIVX_ZERR);
   outTree->Branch("Kminus_ORIVX_CHI2", &Kminus_ORIVX_CHI2);
   outTree->Branch("Kminus_ORIVX_NDOF", &Kminus_ORIVX_NDOF);
   //outTree->Branch("Kminus_ORIVX_COV_", Kminus_ORIVX_COV_);
   outTree->Branch("Kminus_P", &Kminus_P);
   outTree->Branch("Kminus_PT", &Kminus_PT);
   outTree->Branch("Kminus_PE", &Kminus_PE);
   outTree->Branch("Kminus_PX", &Kminus_PX);
   outTree->Branch("Kminus_PY", &Kminus_PY);
   outTree->Branch("Kminus_PZ", &Kminus_PZ);
   outTree->Branch("Kminus_M", &Kminus_M);
   outTree->Branch("Kminus_L0Calo_HCAL_realET", &Kminus_L0Calo_HCAL_realET);
   outTree->Branch("Kminus_L0Calo_HCAL_xProjection", &Kminus_L0Calo_HCAL_xProjection);
   outTree->Branch("Kminus_L0Calo_HCAL_yProjection", &Kminus_L0Calo_HCAL_yProjection);
   outTree->Branch("Kminus_L0Calo_HCAL_region", &Kminus_L0Calo_HCAL_region);
   outTree->Branch("Kminus_TRUEID", &Kminus_TRUEID);
   outTree->Branch("Kminus_MC_MOTHER_ID", &Kminus_MC_MOTHER_ID);
   outTree->Branch("Kminus_MC_MOTHER_KEY", &Kminus_MC_MOTHER_KEY);
   outTree->Branch("Kminus_MC_GD_MOTHER_ID", &Kminus_MC_GD_MOTHER_ID);
   outTree->Branch("Kminus_MC_GD_MOTHER_KEY", &Kminus_MC_GD_MOTHER_KEY);
   outTree->Branch("Kminus_MC_GD_GD_MOTHER_ID", &Kminus_MC_GD_GD_MOTHER_ID);
   outTree->Branch("Kminus_MC_GD_GD_MOTHER_KEY", &Kminus_MC_GD_GD_MOTHER_KEY);
   outTree->Branch("Kminus_TRUEP_E", &Kminus_TRUEP_E);
   outTree->Branch("Kminus_TRUEP_X", &Kminus_TRUEP_X);
   outTree->Branch("Kminus_TRUEP_Y", &Kminus_TRUEP_Y);
   outTree->Branch("Kminus_TRUEP_Z", &Kminus_TRUEP_Z);
   outTree->Branch("Kminus_TRUEPT", &Kminus_TRUEPT);
   outTree->Branch("Kminus_TRUEORIGINVERTEX_X", &Kminus_TRUEORIGINVERTEX_X);
   outTree->Branch("Kminus_TRUEORIGINVERTEX_Y", &Kminus_TRUEORIGINVERTEX_Y);
   outTree->Branch("Kminus_TRUEORIGINVERTEX_Z", &Kminus_TRUEORIGINVERTEX_Z);
   outTree->Branch("Kminus_TRUEENDVERTEX_X", &Kminus_TRUEENDVERTEX_X);
   outTree->Branch("Kminus_TRUEENDVERTEX_Y", &Kminus_TRUEENDVERTEX_Y);
   outTree->Branch("Kminus_TRUEENDVERTEX_Z", &Kminus_TRUEENDVERTEX_Z);
   outTree->Branch("Kminus_TRUEISSTABLE", &Kminus_TRUEISSTABLE);
   outTree->Branch("Kminus_TRUETAU", &Kminus_TRUETAU);
   outTree->Branch("Kminus_ThetaL", &Kminus_ThetaL);
   outTree->Branch("Kminus_ThetaK", &Kminus_ThetaK);
   outTree->Branch("Kminus_Phi", &Kminus_Phi);
   outTree->Branch("Kminus_ThetaTr", &Kminus_ThetaTr);
   outTree->Branch("Kminus_PhiTr", &Kminus_PhiTr);
   outTree->Branch("Kminus_ThetaVtr", &Kminus_ThetaVtr);
   outTree->Branch("Kminus_ID", &Kminus_ID);
   outTree->Branch("Kminus_PIDe", &Kminus_PIDe);
   outTree->Branch("Kminus_PIDmu", &Kminus_PIDmu);
   outTree->Branch("Kminus_PIDK", &Kminus_PIDK);
   outTree->Branch("Kminus_PIDp", &Kminus_PIDp);
   outTree->Branch("Kminus_ProbNNe", &Kminus_ProbNNe);
   outTree->Branch("Kminus_ProbNNk", &Kminus_ProbNNk);
   outTree->Branch("Kminus_ProbNNkcorr", &Kminus_ProbNNkcorr);
   outTree->Branch("Kminus_ProbNNp", &Kminus_ProbNNp);
   outTree->Branch("Kminus_ProbNNpi", &Kminus_ProbNNpi);
   outTree->Branch("Kminus_ProbNNpicorr", &Kminus_ProbNNpicorr);
   outTree->Branch("Kminus_ProbNNmu", &Kminus_ProbNNmu);
   outTree->Branch("Kminus_ProbNNghost", &Kminus_ProbNNghost);
   outTree->Branch("Kminus_hasMuon", &Kminus_hasMuon);
   outTree->Branch("Kminus_isMuon", &Kminus_isMuon);
   outTree->Branch("Kminus_hasRich", &Kminus_hasRich);
   outTree->Branch("Kminus_hasCalo", &Kminus_hasCalo);
   outTree->Branch("Kminus_L0Global_Dec", &Kminus_L0Global_Dec);
   outTree->Branch("Kminus_L0Global_TIS", &Kminus_L0Global_TIS);
   outTree->Branch("Kminus_L0Global_TOS", &Kminus_L0Global_TOS);
   outTree->Branch("Kminus_Hlt1Global_Dec", &Kminus_Hlt1Global_Dec);
   outTree->Branch("Kminus_Hlt1Global_TIS", &Kminus_Hlt1Global_TIS);
   outTree->Branch("Kminus_Hlt1Global_TOS", &Kminus_Hlt1Global_TOS);
   outTree->Branch("Kminus_Hlt1Phys_Dec", &Kminus_Hlt1Phys_Dec);
   outTree->Branch("Kminus_Hlt1Phys_TIS", &Kminus_Hlt1Phys_TIS);
   outTree->Branch("Kminus_Hlt1Phys_TOS", &Kminus_Hlt1Phys_TOS);
   outTree->Branch("Kminus_Hlt2Global_Dec", &Kminus_Hlt2Global_Dec);
   outTree->Branch("Kminus_Hlt2Global_TIS", &Kminus_Hlt2Global_TIS);
   outTree->Branch("Kminus_Hlt2Global_TOS", &Kminus_Hlt2Global_TOS);
   outTree->Branch("Kminus_Hlt2Phys_Dec", &Kminus_Hlt2Phys_Dec);
   outTree->Branch("Kminus_Hlt2Phys_TIS", &Kminus_Hlt2Phys_TIS);
   outTree->Branch("Kminus_Hlt2Phys_TOS", &Kminus_Hlt2Phys_TOS);
   outTree->Branch("Kminus_StrippingGlobal_Dec", &Kminus_StrippingGlobal_Dec);
   outTree->Branch("Kminus_StrippingGlobal_TIS", &Kminus_StrippingGlobal_TIS);
   outTree->Branch("Kminus_StrippingGlobal_TOS", &Kminus_StrippingGlobal_TOS);
   outTree->Branch("Kminus_L0HadronDecision_Dec", &Kminus_L0HadronDecision_Dec);
   outTree->Branch("Kminus_L0HadronDecision_TIS", &Kminus_L0HadronDecision_TIS);
   outTree->Branch("Kminus_L0HadronDecision_TOS", &Kminus_L0HadronDecision_TOS);
   outTree->Branch("Kminus_L0MuonDecision_Dec", &Kminus_L0MuonDecision_Dec);
   outTree->Branch("Kminus_L0MuonDecision_TIS", &Kminus_L0MuonDecision_TIS);
   outTree->Branch("Kminus_L0MuonDecision_TOS", &Kminus_L0MuonDecision_TOS);
   outTree->Branch("Kminus_L0DiMuonDecision_Dec", &Kminus_L0DiMuonDecision_Dec);
   outTree->Branch("Kminus_L0DiMuonDecision_TIS", &Kminus_L0DiMuonDecision_TIS);
   outTree->Branch("Kminus_L0DiMuonDecision_TOS", &Kminus_L0DiMuonDecision_TOS);
   outTree->Branch("Kminus_L0ElectronDecision_Dec", &Kminus_L0ElectronDecision_Dec);
   outTree->Branch("Kminus_L0ElectronDecision_TIS", &Kminus_L0ElectronDecision_TIS);
   outTree->Branch("Kminus_L0ElectronDecision_TOS", &Kminus_L0ElectronDecision_TOS);
   outTree->Branch("Kminus_L0PhotonDecision_Dec", &Kminus_L0PhotonDecision_Dec);
   outTree->Branch("Kminus_L0PhotonDecision_TIS", &Kminus_L0PhotonDecision_TIS);
   outTree->Branch("Kminus_L0PhotonDecision_TOS", &Kminus_L0PhotonDecision_TOS);
   outTree->Branch("Kminus_Hlt1SingleHadronDecision_Dec", &Kminus_Hlt1SingleHadronDecision_Dec);
   outTree->Branch("Kminus_Hlt1SingleHadronDecision_TIS", &Kminus_Hlt1SingleHadronDecision_TIS);
   outTree->Branch("Kminus_Hlt1SingleHadronDecision_TOS", &Kminus_Hlt1SingleHadronDecision_TOS);
   outTree->Branch("Kminus_Hlt1MBNoBiasDecision_Dec", &Kminus_Hlt1MBNoBiasDecision_Dec);
   outTree->Branch("Kminus_Hlt1MBNoBiasDecision_TIS", &Kminus_Hlt1MBNoBiasDecision_TIS);
   outTree->Branch("Kminus_Hlt1MBNoBiasDecision_TOS", &Kminus_Hlt1MBNoBiasDecision_TOS);
   outTree->Branch("Kminus_Hlt1DiHadronDecision_Dec", &Kminus_Hlt1DiHadronDecision_Dec);
   outTree->Branch("Kminus_Hlt1DiHadronDecision_TIS", &Kminus_Hlt1DiHadronDecision_TIS);
   outTree->Branch("Kminus_Hlt1DiHadronDecision_TOS", &Kminus_Hlt1DiHadronDecision_TOS);
   outTree->Branch("Kminus_Hlt1L0AnyDecision_Dec", &Kminus_Hlt1L0AnyDecision_Dec);
   outTree->Branch("Kminus_Hlt1L0AnyDecision_TIS", &Kminus_Hlt1L0AnyDecision_TIS);
   outTree->Branch("Kminus_Hlt1L0AnyDecision_TOS", &Kminus_Hlt1L0AnyDecision_TOS);
   outTree->Branch("Kminus_Hlt1TrackAllL0Decision_Dec", &Kminus_Hlt1TrackAllL0Decision_Dec);
   outTree->Branch("Kminus_Hlt1TrackAllL0Decision_TIS", &Kminus_Hlt1TrackAllL0Decision_TIS);
   outTree->Branch("Kminus_Hlt1TrackAllL0Decision_TOS", &Kminus_Hlt1TrackAllL0Decision_TOS);
   outTree->Branch("Kminus_Hlt2TopoOSTF4BodyDecision_Dec", &Kminus_Hlt2TopoOSTF4BodyDecision_Dec);
   outTree->Branch("Kminus_Hlt2TopoOSTF4BodyDecision_TIS", &Kminus_Hlt2TopoOSTF4BodyDecision_TIS);
   outTree->Branch("Kminus_Hlt2TopoOSTF4BodyDecision_TOS", &Kminus_Hlt2TopoOSTF4BodyDecision_TOS);
   outTree->Branch("Kminus_Hlt2IncPhiDecision_Dec", &Kminus_Hlt2IncPhiDecision_Dec);
   outTree->Branch("Kminus_Hlt2IncPhiDecision_TIS", &Kminus_Hlt2IncPhiDecision_TIS);
   outTree->Branch("Kminus_Hlt2IncPhiDecision_TOS", &Kminus_Hlt2IncPhiDecision_TOS);
   outTree->Branch("Kminus_Hlt2Topo4BodySimpleDecision_Dec", &Kminus_Hlt2Topo4BodySimpleDecision_Dec);
   outTree->Branch("Kminus_Hlt2Topo4BodySimpleDecision_TIS", &Kminus_Hlt2Topo4BodySimpleDecision_TIS);
   outTree->Branch("Kminus_Hlt2Topo4BodySimpleDecision_TOS", &Kminus_Hlt2Topo4BodySimpleDecision_TOS);
   outTree->Branch("Kminus_Hlt2Topo3BodySimpleDecision_Dec", &Kminus_Hlt2Topo3BodySimpleDecision_Dec);
   outTree->Branch("Kminus_Hlt2Topo3BodySimpleDecision_TIS", &Kminus_Hlt2Topo3BodySimpleDecision_TIS);
   outTree->Branch("Kminus_Hlt2Topo3BodySimpleDecision_TOS", &Kminus_Hlt2Topo3BodySimpleDecision_TOS);
   outTree->Branch("Kminus_Hlt2Topo3BodyBBDTDecision_Dec", &Kminus_Hlt2Topo3BodyBBDTDecision_Dec);
   outTree->Branch("Kminus_Hlt2Topo3BodyBBDTDecision_TIS", &Kminus_Hlt2Topo3BodyBBDTDecision_TIS);
   outTree->Branch("Kminus_Hlt2Topo3BodyBBDTDecision_TOS", &Kminus_Hlt2Topo3BodyBBDTDecision_TOS);
   outTree->Branch("Kminus_Hlt2Topo2BodySimpleDecision_Dec", &Kminus_Hlt2Topo2BodySimpleDecision_Dec);
   outTree->Branch("Kminus_Hlt2Topo2BodySimpleDecision_TIS", &Kminus_Hlt2Topo2BodySimpleDecision_TIS);
   outTree->Branch("Kminus_Hlt2Topo2BodySimpleDecision_TOS", &Kminus_Hlt2Topo2BodySimpleDecision_TOS);
   outTree->Branch("Kminus_Hlt2Topo2BodyBBDTDecision_Dec", &Kminus_Hlt2Topo2BodyBBDTDecision_Dec);
   outTree->Branch("Kminus_Hlt2Topo2BodyBBDTDecision_TIS", &Kminus_Hlt2Topo2BodyBBDTDecision_TIS);
   outTree->Branch("Kminus_Hlt2Topo2BodyBBDTDecision_TOS", &Kminus_Hlt2Topo2BodyBBDTDecision_TOS);
   outTree->Branch("Kminus_Hlt2Topo4BodyBBDTDecision_Dec", &Kminus_Hlt2Topo4BodyBBDTDecision_Dec);
   outTree->Branch("Kminus_Hlt2Topo4BodyBBDTDecision_TIS", &Kminus_Hlt2Topo4BodyBBDTDecision_TIS);
   outTree->Branch("Kminus_Hlt2Topo4BodyBBDTDecision_TOS", &Kminus_Hlt2Topo4BodyBBDTDecision_TOS);
   outTree->Branch("Kminus_Hlt2TopoMu4BodyBBDTDecision_Dec", &Kminus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   outTree->Branch("Kminus_Hlt2TopoMu4BodyBBDTDecision_TIS", &Kminus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   outTree->Branch("Kminus_Hlt2TopoMu4BodyBBDTDecision_TOS", &Kminus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   outTree->Branch("Kminus_Hlt2IncPhiSidebandsDecision_Dec", &Kminus_Hlt2IncPhiSidebandsDecision_Dec);
   outTree->Branch("Kminus_Hlt2IncPhiSidebandsDecision_TIS", &Kminus_Hlt2IncPhiSidebandsDecision_TIS);
   outTree->Branch("Kminus_Hlt2IncPhiSidebandsDecision_TOS", &Kminus_Hlt2IncPhiSidebandsDecision_TOS);
   outTree->Branch("Kminus_Hlt2B2HHDecision_Dec", &Kminus_Hlt2B2HHDecision_Dec);
   outTree->Branch("Kminus_Hlt2B2HHDecision_TIS", &Kminus_Hlt2B2HHDecision_TIS);
   outTree->Branch("Kminus_Hlt2B2HHDecision_TOS", &Kminus_Hlt2B2HHDecision_TOS);
   outTree->Branch("Kminus_TRACK_Type", &Kminus_TRACK_Type);
   outTree->Branch("Kminus_TRACK_Key", &Kminus_TRACK_Key);
   outTree->Branch("Kminus_TRACK_CHI2NDOF", &Kminus_TRACK_CHI2NDOF);
   outTree->Branch("Kminus_TRACK_PCHI2", &Kminus_TRACK_PCHI2);
   outTree->Branch("Kminus_TRACK_MatchCHI2", &Kminus_TRACK_MatchCHI2);
   outTree->Branch("Kminus_TRACK_GhostProb", &Kminus_TRACK_GhostProb);
   outTree->Branch("Kminus_TRACK_CloneDist", &Kminus_TRACK_CloneDist);
   outTree->Branch("Kminus_TRACK_Likelihood", &Kminus_TRACK_Likelihood);
   outTree->Branch("Kminus_NOPARTWITHINDCHI2WDW", &Kminus_NOPARTWITHINDCHI2WDW);
   outTree->Branch("Kminus_NOPARTWITHINCHI2WDW", &Kminus_NOPARTWITHINCHI2WDW);
   outTree->Branch("Kminus_SMALLESTCHI2", &Kminus_SMALLESTCHI2);
   outTree->Branch("Kminus_SMALLESTDELTACHI2", &Kminus_SMALLESTDELTACHI2);
   outTree->Branch("Kst_CosTheta", &Kst_CosTheta);
   outTree->Branch("Kst_ENDVERTEX_X", &Kst_ENDVERTEX_X);
   outTree->Branch("Kst_ENDVERTEX_Y", &Kst_ENDVERTEX_Y);
   outTree->Branch("Kst_ENDVERTEX_Z", &Kst_ENDVERTEX_Z);
   outTree->Branch("Kst_ENDVERTEX_XERR", &Kst_ENDVERTEX_XERR);
   outTree->Branch("Kst_ENDVERTEX_YERR", &Kst_ENDVERTEX_YERR);
   outTree->Branch("Kst_ENDVERTEX_ZERR", &Kst_ENDVERTEX_ZERR);
   outTree->Branch("Kst_ENDVERTEX_CHI2", &Kst_ENDVERTEX_CHI2);
   outTree->Branch("Kst_ENDVERTEX_NDOF", &Kst_ENDVERTEX_NDOF);
   //outTree->Branch("Kst_ENDVERTEX_COV_", Kst_ENDVERTEX_COV_);
   outTree->Branch("Kst_OWNPV_X", &Kst_OWNPV_X);
   outTree->Branch("Kst_OWNPV_Y", &Kst_OWNPV_Y);
   outTree->Branch("Kst_OWNPV_Z", &Kst_OWNPV_Z);
   outTree->Branch("Kst_OWNPV_XERR", &Kst_OWNPV_XERR);
   outTree->Branch("Kst_OWNPV_YERR", &Kst_OWNPV_YERR);
   outTree->Branch("Kst_OWNPV_ZERR", &Kst_OWNPV_ZERR);
   outTree->Branch("Kst_OWNPV_CHI2", &Kst_OWNPV_CHI2);
   outTree->Branch("Kst_OWNPV_NDOF", &Kst_OWNPV_NDOF);
   //outTree->Branch("Kst_OWNPV_COV_", Kst_OWNPV_COV_);
   outTree->Branch("Kst_IP_OWNPV", &Kst_IP_OWNPV);
   outTree->Branch("Kst_IPCHI2_OWNPV", &Kst_IPCHI2_OWNPV);
   outTree->Branch("Kst_FD_OWNPV", &Kst_FD_OWNPV);
   outTree->Branch("Kst_FDCHI2_OWNPV", &Kst_FDCHI2_OWNPV);
   outTree->Branch("Kst_DIRA_OWNPV", &Kst_DIRA_OWNPV);
   outTree->Branch("Kst_ORIVX_X", &Kst_ORIVX_X);
   outTree->Branch("Kst_ORIVX_Y", &Kst_ORIVX_Y);
   outTree->Branch("Kst_ORIVX_Z", &Kst_ORIVX_Z);
   outTree->Branch("Kst_ORIVX_XERR", &Kst_ORIVX_XERR);
   outTree->Branch("Kst_ORIVX_YERR", &Kst_ORIVX_YERR);
   outTree->Branch("Kst_ORIVX_ZERR", &Kst_ORIVX_ZERR);
   outTree->Branch("Kst_ORIVX_CHI2", &Kst_ORIVX_CHI2);
   outTree->Branch("Kst_ORIVX_NDOF", &Kst_ORIVX_NDOF);
   //outTree->Branch("Kst_ORIVX_COV_", Kst_ORIVX_COV_);
   outTree->Branch("Kst_FD_ORIVX", &Kst_FD_ORIVX);
   outTree->Branch("Kst_FDCHI2_ORIVX", &Kst_FDCHI2_ORIVX);
   outTree->Branch("Kst_DIRA_ORIVX", &Kst_DIRA_ORIVX);
   outTree->Branch("Kst_P", &Kst_P);
   outTree->Branch("Kst_PT", &Kst_PT);
   outTree->Branch("Kst_PE", &Kst_PE);
   outTree->Branch("Kst_PX", &Kst_PX);
   outTree->Branch("Kst_PY", &Kst_PY);
   outTree->Branch("Kst_PZ", &Kst_PZ);
   outTree->Branch("Kst_MM", &Kst_MM);
   outTree->Branch("Kst_MMERR", &Kst_MMERR);
   outTree->Branch("Kst_M", &Kst_M);
   outTree->Branch("Kst_BKGCAT", &Kst_BKGCAT);
   outTree->Branch("Kst_TRUEID", &Kst_TRUEID);
   outTree->Branch("Kst_MC_MOTHER_ID", &Kst_MC_MOTHER_ID);
   outTree->Branch("Kst_MC_MOTHER_KEY", &Kst_MC_MOTHER_KEY);
   outTree->Branch("Kst_MC_GD_MOTHER_ID", &Kst_MC_GD_MOTHER_ID);
   outTree->Branch("Kst_MC_GD_MOTHER_KEY", &Kst_MC_GD_MOTHER_KEY);
   outTree->Branch("Kst_MC_GD_GD_MOTHER_ID", &Kst_MC_GD_GD_MOTHER_ID);
   outTree->Branch("Kst_MC_GD_GD_MOTHER_KEY", &Kst_MC_GD_GD_MOTHER_KEY);
   outTree->Branch("Kst_TRUEP_E", &Kst_TRUEP_E);
   outTree->Branch("Kst_TRUEP_X", &Kst_TRUEP_X);
   outTree->Branch("Kst_TRUEP_Y", &Kst_TRUEP_Y);
   outTree->Branch("Kst_TRUEP_Z", &Kst_TRUEP_Z);
   outTree->Branch("Kst_TRUEPT", &Kst_TRUEPT);
   outTree->Branch("Kst_TRUEORIGINVERTEX_X", &Kst_TRUEORIGINVERTEX_X);
   outTree->Branch("Kst_TRUEORIGINVERTEX_Y", &Kst_TRUEORIGINVERTEX_Y);
   outTree->Branch("Kst_TRUEORIGINVERTEX_Z", &Kst_TRUEORIGINVERTEX_Z);
   outTree->Branch("Kst_TRUEENDVERTEX_X", &Kst_TRUEENDVERTEX_X);
   outTree->Branch("Kst_TRUEENDVERTEX_Y", &Kst_TRUEENDVERTEX_Y);
   outTree->Branch("Kst_TRUEENDVERTEX_Z", &Kst_TRUEENDVERTEX_Z);
   outTree->Branch("Kst_TRUEISSTABLE", &Kst_TRUEISSTABLE);
   outTree->Branch("Kst_TRUETAU", &Kst_TRUETAU);
   outTree->Branch("Kst_ThetaL", &Kst_ThetaL);
   outTree->Branch("Kst_ThetaK", &Kst_ThetaK);
   outTree->Branch("Kst_Phi", &Kst_Phi);
   outTree->Branch("Kst_ThetaTr", &Kst_ThetaTr);
   outTree->Branch("Kst_PhiTr", &Kst_PhiTr);
   outTree->Branch("Kst_ThetaVtr", &Kst_ThetaVtr);
   outTree->Branch("Kst_ID", &Kst_ID);
   outTree->Branch("Kst_TAU", &Kst_TAU);
   outTree->Branch("Kst_TAUERR", &Kst_TAUERR);
   outTree->Branch("Kst_TAUCHI2", &Kst_TAUCHI2);
   outTree->Branch("Kst_L0Global_Dec", &Kst_L0Global_Dec);
   outTree->Branch("Kst_L0Global_TIS", &Kst_L0Global_TIS);
   outTree->Branch("Kst_L0Global_TOS", &Kst_L0Global_TOS);
   outTree->Branch("Kst_Hlt1Global_Dec", &Kst_Hlt1Global_Dec);
   outTree->Branch("Kst_Hlt1Global_TIS", &Kst_Hlt1Global_TIS);
   outTree->Branch("Kst_Hlt1Global_TOS", &Kst_Hlt1Global_TOS);
   outTree->Branch("Kst_Hlt1Phys_Dec", &Kst_Hlt1Phys_Dec);
   outTree->Branch("Kst_Hlt1Phys_TIS", &Kst_Hlt1Phys_TIS);
   outTree->Branch("Kst_Hlt1Phys_TOS", &Kst_Hlt1Phys_TOS);
   outTree->Branch("Kst_Hlt2Global_Dec", &Kst_Hlt2Global_Dec);
   outTree->Branch("Kst_Hlt2Global_TIS", &Kst_Hlt2Global_TIS);
   outTree->Branch("Kst_Hlt2Global_TOS", &Kst_Hlt2Global_TOS);
   outTree->Branch("Kst_Hlt2Phys_Dec", &Kst_Hlt2Phys_Dec);
   outTree->Branch("Kst_Hlt2Phys_TIS", &Kst_Hlt2Phys_TIS);
   outTree->Branch("Kst_Hlt2Phys_TOS", &Kst_Hlt2Phys_TOS);
   outTree->Branch("Kst_StrippingGlobal_Dec", &Kst_StrippingGlobal_Dec);
   outTree->Branch("Kst_StrippingGlobal_TIS", &Kst_StrippingGlobal_TIS);
   outTree->Branch("Kst_StrippingGlobal_TOS", &Kst_StrippingGlobal_TOS);
   outTree->Branch("Kst_L0HadronDecision_Dec", &Kst_L0HadronDecision_Dec);
   outTree->Branch("Kst_L0HadronDecision_TIS", &Kst_L0HadronDecision_TIS);
   outTree->Branch("Kst_L0HadronDecision_TOS", &Kst_L0HadronDecision_TOS);
   outTree->Branch("Kst_L0MuonDecision_Dec", &Kst_L0MuonDecision_Dec);
   outTree->Branch("Kst_L0MuonDecision_TIS", &Kst_L0MuonDecision_TIS);
   outTree->Branch("Kst_L0MuonDecision_TOS", &Kst_L0MuonDecision_TOS);
   outTree->Branch("Kst_L0DiMuonDecision_Dec", &Kst_L0DiMuonDecision_Dec);
   outTree->Branch("Kst_L0DiMuonDecision_TIS", &Kst_L0DiMuonDecision_TIS);
   outTree->Branch("Kst_L0DiMuonDecision_TOS", &Kst_L0DiMuonDecision_TOS);
   outTree->Branch("Kst_L0ElectronDecision_Dec", &Kst_L0ElectronDecision_Dec);
   outTree->Branch("Kst_L0ElectronDecision_TIS", &Kst_L0ElectronDecision_TIS);
   outTree->Branch("Kst_L0ElectronDecision_TOS", &Kst_L0ElectronDecision_TOS);
   outTree->Branch("Kst_L0PhotonDecision_Dec", &Kst_L0PhotonDecision_Dec);
   outTree->Branch("Kst_L0PhotonDecision_TIS", &Kst_L0PhotonDecision_TIS);
   outTree->Branch("Kst_L0PhotonDecision_TOS", &Kst_L0PhotonDecision_TOS);
   outTree->Branch("Kst_Hlt1SingleHadronDecision_Dec", &Kst_Hlt1SingleHadronDecision_Dec);
   outTree->Branch("Kst_Hlt1SingleHadronDecision_TIS", &Kst_Hlt1SingleHadronDecision_TIS);
   outTree->Branch("Kst_Hlt1SingleHadronDecision_TOS", &Kst_Hlt1SingleHadronDecision_TOS);
   outTree->Branch("Kst_Hlt1MBNoBiasDecision_Dec", &Kst_Hlt1MBNoBiasDecision_Dec);
   outTree->Branch("Kst_Hlt1MBNoBiasDecision_TIS", &Kst_Hlt1MBNoBiasDecision_TIS);
   outTree->Branch("Kst_Hlt1MBNoBiasDecision_TOS", &Kst_Hlt1MBNoBiasDecision_TOS);
   outTree->Branch("Kst_Hlt1DiHadronDecision_Dec", &Kst_Hlt1DiHadronDecision_Dec);
   outTree->Branch("Kst_Hlt1DiHadronDecision_TIS", &Kst_Hlt1DiHadronDecision_TIS);
   outTree->Branch("Kst_Hlt1DiHadronDecision_TOS", &Kst_Hlt1DiHadronDecision_TOS);
   outTree->Branch("Kst_Hlt1L0AnyDecision_Dec", &Kst_Hlt1L0AnyDecision_Dec);
   outTree->Branch("Kst_Hlt1L0AnyDecision_TIS", &Kst_Hlt1L0AnyDecision_TIS);
   outTree->Branch("Kst_Hlt1L0AnyDecision_TOS", &Kst_Hlt1L0AnyDecision_TOS);
   outTree->Branch("Kst_Hlt1TrackAllL0Decision_Dec", &Kst_Hlt1TrackAllL0Decision_Dec);
   outTree->Branch("Kst_Hlt1TrackAllL0Decision_TIS", &Kst_Hlt1TrackAllL0Decision_TIS);
   outTree->Branch("Kst_Hlt1TrackAllL0Decision_TOS", &Kst_Hlt1TrackAllL0Decision_TOS);
   outTree->Branch("Kst_Hlt2TopoOSTF4BodyDecision_Dec", &Kst_Hlt2TopoOSTF4BodyDecision_Dec);
   outTree->Branch("Kst_Hlt2TopoOSTF4BodyDecision_TIS", &Kst_Hlt2TopoOSTF4BodyDecision_TIS);
   outTree->Branch("Kst_Hlt2TopoOSTF4BodyDecision_TOS", &Kst_Hlt2TopoOSTF4BodyDecision_TOS);
   outTree->Branch("Kst_Hlt2IncPhiDecision_Dec", &Kst_Hlt2IncPhiDecision_Dec);
   outTree->Branch("Kst_Hlt2IncPhiDecision_TIS", &Kst_Hlt2IncPhiDecision_TIS);
   outTree->Branch("Kst_Hlt2IncPhiDecision_TOS", &Kst_Hlt2IncPhiDecision_TOS);
   outTree->Branch("Kst_Hlt2Topo4BodySimpleDecision_Dec", &Kst_Hlt2Topo4BodySimpleDecision_Dec);
   outTree->Branch("Kst_Hlt2Topo4BodySimpleDecision_TIS", &Kst_Hlt2Topo4BodySimpleDecision_TIS);
   outTree->Branch("Kst_Hlt2Topo4BodySimpleDecision_TOS", &Kst_Hlt2Topo4BodySimpleDecision_TOS);
   outTree->Branch("Kst_Hlt2Topo3BodySimpleDecision_Dec", &Kst_Hlt2Topo3BodySimpleDecision_Dec);
   outTree->Branch("Kst_Hlt2Topo3BodySimpleDecision_TIS", &Kst_Hlt2Topo3BodySimpleDecision_TIS);
   outTree->Branch("Kst_Hlt2Topo3BodySimpleDecision_TOS", &Kst_Hlt2Topo3BodySimpleDecision_TOS);
   outTree->Branch("Kst_Hlt2Topo3BodyBBDTDecision_Dec", &Kst_Hlt2Topo3BodyBBDTDecision_Dec);
   outTree->Branch("Kst_Hlt2Topo3BodyBBDTDecision_TIS", &Kst_Hlt2Topo3BodyBBDTDecision_TIS);
   outTree->Branch("Kst_Hlt2Topo3BodyBBDTDecision_TOS", &Kst_Hlt2Topo3BodyBBDTDecision_TOS);
   outTree->Branch("Kst_Hlt2Topo2BodySimpleDecision_Dec", &Kst_Hlt2Topo2BodySimpleDecision_Dec);
   outTree->Branch("Kst_Hlt2Topo2BodySimpleDecision_TIS", &Kst_Hlt2Topo2BodySimpleDecision_TIS);
   outTree->Branch("Kst_Hlt2Topo2BodySimpleDecision_TOS", &Kst_Hlt2Topo2BodySimpleDecision_TOS);
   outTree->Branch("Kst_Hlt2Topo2BodyBBDTDecision_Dec", &Kst_Hlt2Topo2BodyBBDTDecision_Dec);
   outTree->Branch("Kst_Hlt2Topo2BodyBBDTDecision_TIS", &Kst_Hlt2Topo2BodyBBDTDecision_TIS);
   outTree->Branch("Kst_Hlt2Topo2BodyBBDTDecision_TOS", &Kst_Hlt2Topo2BodyBBDTDecision_TOS);
   outTree->Branch("Kst_Hlt2Topo4BodyBBDTDecision_Dec", &Kst_Hlt2Topo4BodyBBDTDecision_Dec);
   outTree->Branch("Kst_Hlt2Topo4BodyBBDTDecision_TIS", &Kst_Hlt2Topo4BodyBBDTDecision_TIS);
   outTree->Branch("Kst_Hlt2Topo4BodyBBDTDecision_TOS", &Kst_Hlt2Topo4BodyBBDTDecision_TOS);
   outTree->Branch("Kst_Hlt2TopoMu4BodyBBDTDecision_Dec", &Kst_Hlt2TopoMu4BodyBBDTDecision_Dec);
   outTree->Branch("Kst_Hlt2TopoMu4BodyBBDTDecision_TIS", &Kst_Hlt2TopoMu4BodyBBDTDecision_TIS);
   outTree->Branch("Kst_Hlt2TopoMu4BodyBBDTDecision_TOS", &Kst_Hlt2TopoMu4BodyBBDTDecision_TOS);
   outTree->Branch("Kst_Hlt2IncPhiSidebandsDecision_Dec", &Kst_Hlt2IncPhiSidebandsDecision_Dec);
   outTree->Branch("Kst_Hlt2IncPhiSidebandsDecision_TIS", &Kst_Hlt2IncPhiSidebandsDecision_TIS);
   outTree->Branch("Kst_Hlt2IncPhiSidebandsDecision_TOS", &Kst_Hlt2IncPhiSidebandsDecision_TOS);
   outTree->Branch("Kst_Hlt2B2HHDecision_Dec", &Kst_Hlt2B2HHDecision_Dec);
   outTree->Branch("Kst_Hlt2B2HHDecision_TIS", &Kst_Hlt2B2HHDecision_TIS);
   outTree->Branch("Kst_Hlt2B2HHDecision_TOS", &Kst_Hlt2B2HHDecision_TOS);
   outTree->Branch("Kst_NOPARTWITHINDCHI2WDW", &Kst_NOPARTWITHINDCHI2WDW);
   outTree->Branch("Kst_NOPARTWITHINCHI2WDW", &Kst_NOPARTWITHINCHI2WDW);
   outTree->Branch("Kst_SMALLESTCHI2", &Kst_SMALLESTCHI2);
   outTree->Branch("Kst_SMALLESTDELTACHI2", &Kst_SMALLESTDELTACHI2);
   outTree->Branch("Piminus_CosTheta", &Piminus_CosTheta);
   outTree->Branch("Piminus_OWNPV_X", &Piminus_OWNPV_X);
   outTree->Branch("Piminus_OWNPV_Y", &Piminus_OWNPV_Y);
   outTree->Branch("Piminus_OWNPV_Z", &Piminus_OWNPV_Z);
   outTree->Branch("Piminus_OWNPV_XERR", &Piminus_OWNPV_XERR);
   outTree->Branch("Piminus_OWNPV_YERR", &Piminus_OWNPV_YERR);
   outTree->Branch("Piminus_OWNPV_ZERR", &Piminus_OWNPV_ZERR);
   outTree->Branch("Piminus_OWNPV_CHI2", &Piminus_OWNPV_CHI2);
   outTree->Branch("Piminus_OWNPV_NDOF", &Piminus_OWNPV_NDOF);
   //outTree->Branch("Piminus_OWNPV_COV_", Piminus_OWNPV_COV_);
   outTree->Branch("Piminus_IP_OWNPV", &Piminus_IP_OWNPV);
   outTree->Branch("Piminus_IPCHI2_OWNPV", &Piminus_IPCHI2_OWNPV);
   outTree->Branch("Piminus_ORIVX_X", &Piminus_ORIVX_X);
   outTree->Branch("Piminus_ORIVX_Y", &Piminus_ORIVX_Y);
   outTree->Branch("Piminus_ORIVX_Z", &Piminus_ORIVX_Z);
   outTree->Branch("Piminus_ORIVX_XERR", &Piminus_ORIVX_XERR);
   outTree->Branch("Piminus_ORIVX_YERR", &Piminus_ORIVX_YERR);
   outTree->Branch("Piminus_ORIVX_ZERR", &Piminus_ORIVX_ZERR);
   outTree->Branch("Piminus_ORIVX_CHI2", &Piminus_ORIVX_CHI2);
   outTree->Branch("Piminus_ORIVX_NDOF", &Piminus_ORIVX_NDOF);
   //outTree->Branch("Piminus_ORIVX_COV_", Piminus_ORIVX_COV_);
   outTree->Branch("Piminus_P", &Piminus_P);
   outTree->Branch("Piminus_PT", &Piminus_PT);
   outTree->Branch("Piminus_PE", &Piminus_PE);
   outTree->Branch("Piminus_PX", &Piminus_PX);
   outTree->Branch("Piminus_PY", &Piminus_PY);
   outTree->Branch("Piminus_PZ", &Piminus_PZ);
   outTree->Branch("Piminus_M", &Piminus_M);
   outTree->Branch("Piminus_L0Calo_HCAL_realET", &Piminus_L0Calo_HCAL_realET);
   outTree->Branch("Piminus_L0Calo_HCAL_xProjection", &Piminus_L0Calo_HCAL_xProjection);
   outTree->Branch("Piminus_L0Calo_HCAL_yProjection", &Piminus_L0Calo_HCAL_yProjection);
   outTree->Branch("Piminus_L0Calo_HCAL_region", &Piminus_L0Calo_HCAL_region);
   outTree->Branch("Piminus_TRUEID", &Piminus_TRUEID);
   outTree->Branch("Piminus_MC_MOTHER_ID", &Piminus_MC_MOTHER_ID);
   outTree->Branch("Piminus_MC_MOTHER_KEY", &Piminus_MC_MOTHER_KEY);
   outTree->Branch("Piminus_MC_GD_MOTHER_ID", &Piminus_MC_GD_MOTHER_ID);
   outTree->Branch("Piminus_MC_GD_MOTHER_KEY", &Piminus_MC_GD_MOTHER_KEY);
   outTree->Branch("Piminus_MC_GD_GD_MOTHER_ID", &Piminus_MC_GD_GD_MOTHER_ID);
   outTree->Branch("Piminus_MC_GD_GD_MOTHER_KEY", &Piminus_MC_GD_GD_MOTHER_KEY);
   outTree->Branch("Piminus_TRUEP_E", &Piminus_TRUEP_E);
   outTree->Branch("Piminus_TRUEP_X", &Piminus_TRUEP_X);
   outTree->Branch("Piminus_TRUEP_Y", &Piminus_TRUEP_Y);
   outTree->Branch("Piminus_TRUEP_Z", &Piminus_TRUEP_Z);
   outTree->Branch("Piminus_TRUEPT", &Piminus_TRUEPT);
   outTree->Branch("Piminus_TRUEORIGINVERTEX_X", &Piminus_TRUEORIGINVERTEX_X);
   outTree->Branch("Piminus_TRUEORIGINVERTEX_Y", &Piminus_TRUEORIGINVERTEX_Y);
   outTree->Branch("Piminus_TRUEORIGINVERTEX_Z", &Piminus_TRUEORIGINVERTEX_Z);
   outTree->Branch("Piminus_TRUEENDVERTEX_X", &Piminus_TRUEENDVERTEX_X);
   outTree->Branch("Piminus_TRUEENDVERTEX_Y", &Piminus_TRUEENDVERTEX_Y);
   outTree->Branch("Piminus_TRUEENDVERTEX_Z", &Piminus_TRUEENDVERTEX_Z);
   outTree->Branch("Piminus_TRUEISSTABLE", &Piminus_TRUEISSTABLE);
   outTree->Branch("Piminus_TRUETAU", &Piminus_TRUETAU);
   outTree->Branch("Piminus_ThetaL", &Piminus_ThetaL);
   outTree->Branch("Piminus_ThetaK", &Piminus_ThetaK);
   outTree->Branch("Piminus_Phi", &Piminus_Phi);
   outTree->Branch("Piminus_ThetaTr", &Piminus_ThetaTr);
   outTree->Branch("Piminus_PhiTr", &Piminus_PhiTr);
   outTree->Branch("Piminus_ThetaVtr", &Piminus_ThetaVtr);
   outTree->Branch("Piminus_ID", &Piminus_ID);
   outTree->Branch("Piminus_PIDe", &Piminus_PIDe);
   outTree->Branch("Piminus_PIDmu", &Piminus_PIDmu);
   outTree->Branch("Piminus_PIDK", &Piminus_PIDK);
   outTree->Branch("Piminus_PIDp", &Piminus_PIDp);
   outTree->Branch("Piminus_ProbNNe", &Piminus_ProbNNe);
   outTree->Branch("Piminus_ProbNNk", &Piminus_ProbNNk);
   outTree->Branch("Piminus_ProbNNkcorr", &Piminus_ProbNNkcorr);
   outTree->Branch("Piminus_ProbNNp", &Piminus_ProbNNp);
   outTree->Branch("Piminus_ProbNNpi", &Piminus_ProbNNpi);
   outTree->Branch("Piminus_ProbNNpicorr", &Piminus_ProbNNpicorr);
   outTree->Branch("Piminus_ProbNNmu", &Piminus_ProbNNmu);
   outTree->Branch("Piminus_ProbNNghost", &Piminus_ProbNNghost);
   outTree->Branch("Piminus_hasMuon", &Piminus_hasMuon);
   outTree->Branch("Piminus_isMuon", &Piminus_isMuon);
   outTree->Branch("Piminus_hasRich", &Piminus_hasRich);
   outTree->Branch("Piminus_hasCalo", &Piminus_hasCalo);
   outTree->Branch("Piminus_L0Global_Dec", &Piminus_L0Global_Dec);
   outTree->Branch("Piminus_L0Global_TIS", &Piminus_L0Global_TIS);
   outTree->Branch("Piminus_L0Global_TOS", &Piminus_L0Global_TOS);
   outTree->Branch("Piminus_Hlt1Global_Dec", &Piminus_Hlt1Global_Dec);
   outTree->Branch("Piminus_Hlt1Global_TIS", &Piminus_Hlt1Global_TIS);
   outTree->Branch("Piminus_Hlt1Global_TOS", &Piminus_Hlt1Global_TOS);
   outTree->Branch("Piminus_Hlt1Phys_Dec", &Piminus_Hlt1Phys_Dec);
   outTree->Branch("Piminus_Hlt1Phys_TIS", &Piminus_Hlt1Phys_TIS);
   outTree->Branch("Piminus_Hlt1Phys_TOS", &Piminus_Hlt1Phys_TOS);
   outTree->Branch("Piminus_Hlt2Global_Dec", &Piminus_Hlt2Global_Dec);
   outTree->Branch("Piminus_Hlt2Global_TIS", &Piminus_Hlt2Global_TIS);
   outTree->Branch("Piminus_Hlt2Global_TOS", &Piminus_Hlt2Global_TOS);
   outTree->Branch("Piminus_Hlt2Phys_Dec", &Piminus_Hlt2Phys_Dec);
   outTree->Branch("Piminus_Hlt2Phys_TIS", &Piminus_Hlt2Phys_TIS);
   outTree->Branch("Piminus_Hlt2Phys_TOS", &Piminus_Hlt2Phys_TOS);
   outTree->Branch("Piminus_StrippingGlobal_Dec", &Piminus_StrippingGlobal_Dec);
   outTree->Branch("Piminus_StrippingGlobal_TIS", &Piminus_StrippingGlobal_TIS);
   outTree->Branch("Piminus_StrippingGlobal_TOS", &Piminus_StrippingGlobal_TOS);
   outTree->Branch("Piminus_L0HadronDecision_Dec", &Piminus_L0HadronDecision_Dec);
   outTree->Branch("Piminus_L0HadronDecision_TIS", &Piminus_L0HadronDecision_TIS);
   outTree->Branch("Piminus_L0HadronDecision_TOS", &Piminus_L0HadronDecision_TOS);
   outTree->Branch("Piminus_L0MuonDecision_Dec", &Piminus_L0MuonDecision_Dec);
   outTree->Branch("Piminus_L0MuonDecision_TIS", &Piminus_L0MuonDecision_TIS);
   outTree->Branch("Piminus_L0MuonDecision_TOS", &Piminus_L0MuonDecision_TOS);
   outTree->Branch("Piminus_L0DiMuonDecision_Dec", &Piminus_L0DiMuonDecision_Dec);
   outTree->Branch("Piminus_L0DiMuonDecision_TIS", &Piminus_L0DiMuonDecision_TIS);
   outTree->Branch("Piminus_L0DiMuonDecision_TOS", &Piminus_L0DiMuonDecision_TOS);
   outTree->Branch("Piminus_L0ElectronDecision_Dec", &Piminus_L0ElectronDecision_Dec);
   outTree->Branch("Piminus_L0ElectronDecision_TIS", &Piminus_L0ElectronDecision_TIS);
   outTree->Branch("Piminus_L0ElectronDecision_TOS", &Piminus_L0ElectronDecision_TOS);
   outTree->Branch("Piminus_L0PhotonDecision_Dec", &Piminus_L0PhotonDecision_Dec);
   outTree->Branch("Piminus_L0PhotonDecision_TIS", &Piminus_L0PhotonDecision_TIS);
   outTree->Branch("Piminus_L0PhotonDecision_TOS", &Piminus_L0PhotonDecision_TOS);
   outTree->Branch("Piminus_Hlt1SingleHadronDecision_Dec", &Piminus_Hlt1SingleHadronDecision_Dec);
   outTree->Branch("Piminus_Hlt1SingleHadronDecision_TIS", &Piminus_Hlt1SingleHadronDecision_TIS);
   outTree->Branch("Piminus_Hlt1SingleHadronDecision_TOS", &Piminus_Hlt1SingleHadronDecision_TOS);
   outTree->Branch("Piminus_Hlt1MBNoBiasDecision_Dec", &Piminus_Hlt1MBNoBiasDecision_Dec);
   outTree->Branch("Piminus_Hlt1MBNoBiasDecision_TIS", &Piminus_Hlt1MBNoBiasDecision_TIS);
   outTree->Branch("Piminus_Hlt1MBNoBiasDecision_TOS", &Piminus_Hlt1MBNoBiasDecision_TOS);
   outTree->Branch("Piminus_Hlt1DiHadronDecision_Dec", &Piminus_Hlt1DiHadronDecision_Dec);
   outTree->Branch("Piminus_Hlt1DiHadronDecision_TIS", &Piminus_Hlt1DiHadronDecision_TIS);
   outTree->Branch("Piminus_Hlt1DiHadronDecision_TOS", &Piminus_Hlt1DiHadronDecision_TOS);
   outTree->Branch("Piminus_Hlt1L0AnyDecision_Dec", &Piminus_Hlt1L0AnyDecision_Dec);
   outTree->Branch("Piminus_Hlt1L0AnyDecision_TIS", &Piminus_Hlt1L0AnyDecision_TIS);
   outTree->Branch("Piminus_Hlt1L0AnyDecision_TOS", &Piminus_Hlt1L0AnyDecision_TOS);
   outTree->Branch("Piminus_Hlt1TrackAllL0Decision_Dec", &Piminus_Hlt1TrackAllL0Decision_Dec);
   outTree->Branch("Piminus_Hlt1TrackAllL0Decision_TIS", &Piminus_Hlt1TrackAllL0Decision_TIS);
   outTree->Branch("Piminus_Hlt1TrackAllL0Decision_TOS", &Piminus_Hlt1TrackAllL0Decision_TOS);
   outTree->Branch("Piminus_Hlt2TopoOSTF4BodyDecision_Dec", &Piminus_Hlt2TopoOSTF4BodyDecision_Dec);
   outTree->Branch("Piminus_Hlt2TopoOSTF4BodyDecision_TIS", &Piminus_Hlt2TopoOSTF4BodyDecision_TIS);
   outTree->Branch("Piminus_Hlt2TopoOSTF4BodyDecision_TOS", &Piminus_Hlt2TopoOSTF4BodyDecision_TOS);
   outTree->Branch("Piminus_Hlt2IncPhiDecision_Dec", &Piminus_Hlt2IncPhiDecision_Dec);
   outTree->Branch("Piminus_Hlt2IncPhiDecision_TIS", &Piminus_Hlt2IncPhiDecision_TIS);
   outTree->Branch("Piminus_Hlt2IncPhiDecision_TOS", &Piminus_Hlt2IncPhiDecision_TOS);
   outTree->Branch("Piminus_Hlt2Topo4BodySimpleDecision_Dec", &Piminus_Hlt2Topo4BodySimpleDecision_Dec);
   outTree->Branch("Piminus_Hlt2Topo4BodySimpleDecision_TIS", &Piminus_Hlt2Topo4BodySimpleDecision_TIS);
   outTree->Branch("Piminus_Hlt2Topo4BodySimpleDecision_TOS", &Piminus_Hlt2Topo4BodySimpleDecision_TOS);
   outTree->Branch("Piminus_Hlt2Topo3BodySimpleDecision_Dec", &Piminus_Hlt2Topo3BodySimpleDecision_Dec);
   outTree->Branch("Piminus_Hlt2Topo3BodySimpleDecision_TIS", &Piminus_Hlt2Topo3BodySimpleDecision_TIS);
   outTree->Branch("Piminus_Hlt2Topo3BodySimpleDecision_TOS", &Piminus_Hlt2Topo3BodySimpleDecision_TOS);
   outTree->Branch("Piminus_Hlt2Topo3BodyBBDTDecision_Dec", &Piminus_Hlt2Topo3BodyBBDTDecision_Dec);
   outTree->Branch("Piminus_Hlt2Topo3BodyBBDTDecision_TIS", &Piminus_Hlt2Topo3BodyBBDTDecision_TIS);
   outTree->Branch("Piminus_Hlt2Topo3BodyBBDTDecision_TOS", &Piminus_Hlt2Topo3BodyBBDTDecision_TOS);
   outTree->Branch("Piminus_Hlt2Topo2BodySimpleDecision_Dec", &Piminus_Hlt2Topo2BodySimpleDecision_Dec);
   outTree->Branch("Piminus_Hlt2Topo2BodySimpleDecision_TIS", &Piminus_Hlt2Topo2BodySimpleDecision_TIS);
   outTree->Branch("Piminus_Hlt2Topo2BodySimpleDecision_TOS", &Piminus_Hlt2Topo2BodySimpleDecision_TOS);
   outTree->Branch("Piminus_Hlt2Topo2BodyBBDTDecision_Dec", &Piminus_Hlt2Topo2BodyBBDTDecision_Dec);
   outTree->Branch("Piminus_Hlt2Topo2BodyBBDTDecision_TIS", &Piminus_Hlt2Topo2BodyBBDTDecision_TIS);
   outTree->Branch("Piminus_Hlt2Topo2BodyBBDTDecision_TOS", &Piminus_Hlt2Topo2BodyBBDTDecision_TOS);
   outTree->Branch("Piminus_Hlt2Topo4BodyBBDTDecision_Dec", &Piminus_Hlt2Topo4BodyBBDTDecision_Dec);
   outTree->Branch("Piminus_Hlt2Topo4BodyBBDTDecision_TIS", &Piminus_Hlt2Topo4BodyBBDTDecision_TIS);
   outTree->Branch("Piminus_Hlt2Topo4BodyBBDTDecision_TOS", &Piminus_Hlt2Topo4BodyBBDTDecision_TOS);
   outTree->Branch("Piminus_Hlt2TopoMu4BodyBBDTDecision_Dec", &Piminus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   outTree->Branch("Piminus_Hlt2TopoMu4BodyBBDTDecision_TIS", &Piminus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   outTree->Branch("Piminus_Hlt2TopoMu4BodyBBDTDecision_TOS", &Piminus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   outTree->Branch("Piminus_Hlt2IncPhiSidebandsDecision_Dec", &Piminus_Hlt2IncPhiSidebandsDecision_Dec);
   outTree->Branch("Piminus_Hlt2IncPhiSidebandsDecision_TIS", &Piminus_Hlt2IncPhiSidebandsDecision_TIS);
   outTree->Branch("Piminus_Hlt2IncPhiSidebandsDecision_TOS", &Piminus_Hlt2IncPhiSidebandsDecision_TOS);
   outTree->Branch("Piminus_Hlt2B2HHDecision_Dec", &Piminus_Hlt2B2HHDecision_Dec);
   outTree->Branch("Piminus_Hlt2B2HHDecision_TIS", &Piminus_Hlt2B2HHDecision_TIS);
   outTree->Branch("Piminus_Hlt2B2HHDecision_TOS", &Piminus_Hlt2B2HHDecision_TOS);
   outTree->Branch("Piminus_TRACK_Type", &Piminus_TRACK_Type);
   outTree->Branch("Piminus_TRACK_Key", &Piminus_TRACK_Key);
   outTree->Branch("Piminus_TRACK_CHI2NDOF", &Piminus_TRACK_CHI2NDOF);
   outTree->Branch("Piminus_TRACK_PCHI2", &Piminus_TRACK_PCHI2);
   outTree->Branch("Piminus_TRACK_MatchCHI2", &Piminus_TRACK_MatchCHI2);
   outTree->Branch("Piminus_TRACK_GhostProb", &Piminus_TRACK_GhostProb);
   outTree->Branch("Piminus_TRACK_CloneDist", &Piminus_TRACK_CloneDist);
   outTree->Branch("Piminus_TRACK_Likelihood", &Piminus_TRACK_Likelihood);
   outTree->Branch("Piminus_NOPARTWITHINDCHI2WDW", &Piminus_NOPARTWITHINDCHI2WDW);
   outTree->Branch("Piminus_NOPARTWITHINCHI2WDW", &Piminus_NOPARTWITHINCHI2WDW);
   outTree->Branch("Piminus_SMALLESTCHI2", &Piminus_SMALLESTCHI2);
   outTree->Branch("Piminus_SMALLESTDELTACHI2", &Piminus_SMALLESTDELTACHI2);
   outTree->Branch("Kplus_CosTheta", &Kplus_CosTheta);
   outTree->Branch("Kplus_OWNPV_X", &Kplus_OWNPV_X);
   outTree->Branch("Kplus_OWNPV_Y", &Kplus_OWNPV_Y);
   outTree->Branch("Kplus_OWNPV_Z", &Kplus_OWNPV_Z);
   outTree->Branch("Kplus_OWNPV_XERR", &Kplus_OWNPV_XERR);
   outTree->Branch("Kplus_OWNPV_YERR", &Kplus_OWNPV_YERR);
   outTree->Branch("Kplus_OWNPV_ZERR", &Kplus_OWNPV_ZERR);
   outTree->Branch("Kplus_OWNPV_CHI2", &Kplus_OWNPV_CHI2);
   outTree->Branch("Kplus_OWNPV_NDOF", &Kplus_OWNPV_NDOF);
   //outTree->Branch("Kplus_OWNPV_COV_", Kplus_OWNPV_COV_);
   outTree->Branch("Kplus_IP_OWNPV", &Kplus_IP_OWNPV);
   outTree->Branch("Kplus_IPCHI2_OWNPV", &Kplus_IPCHI2_OWNPV);
   outTree->Branch("Kplus_ORIVX_X", &Kplus_ORIVX_X);
   outTree->Branch("Kplus_ORIVX_Y", &Kplus_ORIVX_Y);
   outTree->Branch("Kplus_ORIVX_Z", &Kplus_ORIVX_Z);
   outTree->Branch("Kplus_ORIVX_XERR", &Kplus_ORIVX_XERR);
   outTree->Branch("Kplus_ORIVX_YERR", &Kplus_ORIVX_YERR);
   outTree->Branch("Kplus_ORIVX_ZERR", &Kplus_ORIVX_ZERR);
   outTree->Branch("Kplus_ORIVX_CHI2", &Kplus_ORIVX_CHI2);
   outTree->Branch("Kplus_ORIVX_NDOF", &Kplus_ORIVX_NDOF);
   //outTree->Branch("Kplus_ORIVX_COV_", Kplus_ORIVX_COV_);
   outTree->Branch("Kplus_P", &Kplus_P);
   outTree->Branch("Kplus_PT", &Kplus_PT);
   outTree->Branch("Kplus_PE", &Kplus_PE);
   outTree->Branch("Kplus_PX", &Kplus_PX);
   outTree->Branch("Kplus_PY", &Kplus_PY);
   outTree->Branch("Kplus_PZ", &Kplus_PZ);
   outTree->Branch("Kplus_M", &Kplus_M);
   outTree->Branch("Kplus_L0Calo_HCAL_realET", &Kplus_L0Calo_HCAL_realET);
   outTree->Branch("Kplus_L0Calo_HCAL_xProjection", &Kplus_L0Calo_HCAL_xProjection);
   outTree->Branch("Kplus_L0Calo_HCAL_yProjection", &Kplus_L0Calo_HCAL_yProjection);
   outTree->Branch("Kplus_L0Calo_HCAL_region", &Kplus_L0Calo_HCAL_region);
   outTree->Branch("Kplus_TRUEID", &Kplus_TRUEID);
   outTree->Branch("Kplus_MC_MOTHER_ID", &Kplus_MC_MOTHER_ID);
   outTree->Branch("Kplus_MC_MOTHER_KEY", &Kplus_MC_MOTHER_KEY);
   outTree->Branch("Kplus_MC_GD_MOTHER_ID", &Kplus_MC_GD_MOTHER_ID);
   outTree->Branch("Kplus_MC_GD_MOTHER_KEY", &Kplus_MC_GD_MOTHER_KEY);
   outTree->Branch("Kplus_MC_GD_GD_MOTHER_ID", &Kplus_MC_GD_GD_MOTHER_ID);
   outTree->Branch("Kplus_MC_GD_GD_MOTHER_KEY", &Kplus_MC_GD_GD_MOTHER_KEY);
   outTree->Branch("Kplus_TRUEP_E", &Kplus_TRUEP_E);
   outTree->Branch("Kplus_TRUEP_X", &Kplus_TRUEP_X);
   outTree->Branch("Kplus_TRUEP_Y", &Kplus_TRUEP_Y);
   outTree->Branch("Kplus_TRUEP_Z", &Kplus_TRUEP_Z);
   outTree->Branch("Kplus_TRUEPT", &Kplus_TRUEPT);
   outTree->Branch("Kplus_TRUEORIGINVERTEX_X", &Kplus_TRUEORIGINVERTEX_X);
   outTree->Branch("Kplus_TRUEORIGINVERTEX_Y", &Kplus_TRUEORIGINVERTEX_Y);
   outTree->Branch("Kplus_TRUEORIGINVERTEX_Z", &Kplus_TRUEORIGINVERTEX_Z);
   outTree->Branch("Kplus_TRUEENDVERTEX_X", &Kplus_TRUEENDVERTEX_X);
   outTree->Branch("Kplus_TRUEENDVERTEX_Y", &Kplus_TRUEENDVERTEX_Y);
   outTree->Branch("Kplus_TRUEENDVERTEX_Z", &Kplus_TRUEENDVERTEX_Z);
   outTree->Branch("Kplus_TRUEISSTABLE", &Kplus_TRUEISSTABLE);
   outTree->Branch("Kplus_TRUETAU", &Kplus_TRUETAU);
   outTree->Branch("Kplus_ThetaL", &Kplus_ThetaL);
   outTree->Branch("Kplus_ThetaK", &Kplus_ThetaK);
   outTree->Branch("Kplus_Phi", &Kplus_Phi);
   outTree->Branch("Kplus_ThetaTr", &Kplus_ThetaTr);
   outTree->Branch("Kplus_PhiTr", &Kplus_PhiTr);
   outTree->Branch("Kplus_ThetaVtr", &Kplus_ThetaVtr);
   outTree->Branch("Kplus_ID", &Kplus_ID);
   outTree->Branch("Kplus_PIDe", &Kplus_PIDe);
   outTree->Branch("Kplus_PIDmu", &Kplus_PIDmu);
   outTree->Branch("Kplus_PIDK", &Kplus_PIDK);
   outTree->Branch("Kplus_PIDp", &Kplus_PIDp);
   outTree->Branch("Kplus_ProbNNe", &Kplus_ProbNNe);
   outTree->Branch("Kplus_ProbNNk", &Kplus_ProbNNk);
   outTree->Branch("Kplus_ProbNNkcorr", &Kplus_ProbNNkcorr);
   outTree->Branch("Kplus_ProbNNp", &Kplus_ProbNNp);
   outTree->Branch("Kplus_ProbNNpi", &Kplus_ProbNNpi);
   outTree->Branch("Kplus_ProbNNpicorr", &Kplus_ProbNNpicorr);
   outTree->Branch("Kplus_ProbNNmu", &Kplus_ProbNNmu);
   outTree->Branch("Kplus_ProbNNghost", &Kplus_ProbNNghost);
   outTree->Branch("Kplus_hasMuon", &Kplus_hasMuon);
   outTree->Branch("Kplus_isMuon", &Kplus_isMuon);
   outTree->Branch("Kplus_hasRich", &Kplus_hasRich);
   outTree->Branch("Kplus_hasCalo", &Kplus_hasCalo);
   outTree->Branch("Kplus_L0Global_Dec", &Kplus_L0Global_Dec);
   outTree->Branch("Kplus_L0Global_TIS", &Kplus_L0Global_TIS);
   outTree->Branch("Kplus_L0Global_TOS", &Kplus_L0Global_TOS);
   outTree->Branch("Kplus_Hlt1Global_Dec", &Kplus_Hlt1Global_Dec);
   outTree->Branch("Kplus_Hlt1Global_TIS", &Kplus_Hlt1Global_TIS);
   outTree->Branch("Kplus_Hlt1Global_TOS", &Kplus_Hlt1Global_TOS);
   outTree->Branch("Kplus_Hlt1Phys_Dec", &Kplus_Hlt1Phys_Dec);
   outTree->Branch("Kplus_Hlt1Phys_TIS", &Kplus_Hlt1Phys_TIS);
   outTree->Branch("Kplus_Hlt1Phys_TOS", &Kplus_Hlt1Phys_TOS);
   outTree->Branch("Kplus_Hlt2Global_Dec", &Kplus_Hlt2Global_Dec);
   outTree->Branch("Kplus_Hlt2Global_TIS", &Kplus_Hlt2Global_TIS);
   outTree->Branch("Kplus_Hlt2Global_TOS", &Kplus_Hlt2Global_TOS);
   outTree->Branch("Kplus_Hlt2Phys_Dec", &Kplus_Hlt2Phys_Dec);
   outTree->Branch("Kplus_Hlt2Phys_TIS", &Kplus_Hlt2Phys_TIS);
   outTree->Branch("Kplus_Hlt2Phys_TOS", &Kplus_Hlt2Phys_TOS);
   outTree->Branch("Kplus_StrippingGlobal_Dec", &Kplus_StrippingGlobal_Dec);
   outTree->Branch("Kplus_StrippingGlobal_TIS", &Kplus_StrippingGlobal_TIS);
   outTree->Branch("Kplus_StrippingGlobal_TOS", &Kplus_StrippingGlobal_TOS);
   outTree->Branch("Kplus_L0HadronDecision_Dec", &Kplus_L0HadronDecision_Dec);
   outTree->Branch("Kplus_L0HadronDecision_TIS", &Kplus_L0HadronDecision_TIS);
   outTree->Branch("Kplus_L0HadronDecision_TOS", &Kplus_L0HadronDecision_TOS);
   outTree->Branch("Kplus_L0MuonDecision_Dec", &Kplus_L0MuonDecision_Dec);
   outTree->Branch("Kplus_L0MuonDecision_TIS", &Kplus_L0MuonDecision_TIS);
   outTree->Branch("Kplus_L0MuonDecision_TOS", &Kplus_L0MuonDecision_TOS);
   outTree->Branch("Kplus_L0DiMuonDecision_Dec", &Kplus_L0DiMuonDecision_Dec);
   outTree->Branch("Kplus_L0DiMuonDecision_TIS", &Kplus_L0DiMuonDecision_TIS);
   outTree->Branch("Kplus_L0DiMuonDecision_TOS", &Kplus_L0DiMuonDecision_TOS);
   outTree->Branch("Kplus_L0ElectronDecision_Dec", &Kplus_L0ElectronDecision_Dec);
   outTree->Branch("Kplus_L0ElectronDecision_TIS", &Kplus_L0ElectronDecision_TIS);
   outTree->Branch("Kplus_L0ElectronDecision_TOS", &Kplus_L0ElectronDecision_TOS);
   outTree->Branch("Kplus_L0PhotonDecision_Dec", &Kplus_L0PhotonDecision_Dec);
   outTree->Branch("Kplus_L0PhotonDecision_TIS", &Kplus_L0PhotonDecision_TIS);
   outTree->Branch("Kplus_L0PhotonDecision_TOS", &Kplus_L0PhotonDecision_TOS);
   outTree->Branch("Kplus_Hlt1SingleHadronDecision_Dec", &Kplus_Hlt1SingleHadronDecision_Dec);
   outTree->Branch("Kplus_Hlt1SingleHadronDecision_TIS", &Kplus_Hlt1SingleHadronDecision_TIS);
   outTree->Branch("Kplus_Hlt1SingleHadronDecision_TOS", &Kplus_Hlt1SingleHadronDecision_TOS);
   outTree->Branch("Kplus_Hlt1MBNoBiasDecision_Dec", &Kplus_Hlt1MBNoBiasDecision_Dec);
   outTree->Branch("Kplus_Hlt1MBNoBiasDecision_TIS", &Kplus_Hlt1MBNoBiasDecision_TIS);
   outTree->Branch("Kplus_Hlt1MBNoBiasDecision_TOS", &Kplus_Hlt1MBNoBiasDecision_TOS);
   outTree->Branch("Kplus_Hlt1DiHadronDecision_Dec", &Kplus_Hlt1DiHadronDecision_Dec);
   outTree->Branch("Kplus_Hlt1DiHadronDecision_TIS", &Kplus_Hlt1DiHadronDecision_TIS);
   outTree->Branch("Kplus_Hlt1DiHadronDecision_TOS", &Kplus_Hlt1DiHadronDecision_TOS);
   outTree->Branch("Kplus_Hlt1L0AnyDecision_Dec", &Kplus_Hlt1L0AnyDecision_Dec);
   outTree->Branch("Kplus_Hlt1L0AnyDecision_TIS", &Kplus_Hlt1L0AnyDecision_TIS);
   outTree->Branch("Kplus_Hlt1L0AnyDecision_TOS", &Kplus_Hlt1L0AnyDecision_TOS);
   outTree->Branch("Kplus_Hlt1TrackAllL0Decision_Dec", &Kplus_Hlt1TrackAllL0Decision_Dec);
   outTree->Branch("Kplus_Hlt1TrackAllL0Decision_TIS", &Kplus_Hlt1TrackAllL0Decision_TIS);
   outTree->Branch("Kplus_Hlt1TrackAllL0Decision_TOS", &Kplus_Hlt1TrackAllL0Decision_TOS);
   outTree->Branch("Kplus_Hlt2TopoOSTF4BodyDecision_Dec", &Kplus_Hlt2TopoOSTF4BodyDecision_Dec);
   outTree->Branch("Kplus_Hlt2TopoOSTF4BodyDecision_TIS", &Kplus_Hlt2TopoOSTF4BodyDecision_TIS);
   outTree->Branch("Kplus_Hlt2TopoOSTF4BodyDecision_TOS", &Kplus_Hlt2TopoOSTF4BodyDecision_TOS);
   outTree->Branch("Kplus_Hlt2IncPhiDecision_Dec", &Kplus_Hlt2IncPhiDecision_Dec);
   outTree->Branch("Kplus_Hlt2IncPhiDecision_TIS", &Kplus_Hlt2IncPhiDecision_TIS);
   outTree->Branch("Kplus_Hlt2IncPhiDecision_TOS", &Kplus_Hlt2IncPhiDecision_TOS);
   outTree->Branch("Kplus_Hlt2Topo4BodySimpleDecision_Dec", &Kplus_Hlt2Topo4BodySimpleDecision_Dec);
   outTree->Branch("Kplus_Hlt2Topo4BodySimpleDecision_TIS", &Kplus_Hlt2Topo4BodySimpleDecision_TIS);
   outTree->Branch("Kplus_Hlt2Topo4BodySimpleDecision_TOS", &Kplus_Hlt2Topo4BodySimpleDecision_TOS);
   outTree->Branch("Kplus_Hlt2Topo3BodySimpleDecision_Dec", &Kplus_Hlt2Topo3BodySimpleDecision_Dec);
   outTree->Branch("Kplus_Hlt2Topo3BodySimpleDecision_TIS", &Kplus_Hlt2Topo3BodySimpleDecision_TIS);
   outTree->Branch("Kplus_Hlt2Topo3BodySimpleDecision_TOS", &Kplus_Hlt2Topo3BodySimpleDecision_TOS);
   outTree->Branch("Kplus_Hlt2Topo3BodyBBDTDecision_Dec", &Kplus_Hlt2Topo3BodyBBDTDecision_Dec);
   outTree->Branch("Kplus_Hlt2Topo3BodyBBDTDecision_TIS", &Kplus_Hlt2Topo3BodyBBDTDecision_TIS);
   outTree->Branch("Kplus_Hlt2Topo3BodyBBDTDecision_TOS", &Kplus_Hlt2Topo3BodyBBDTDecision_TOS);
   outTree->Branch("Kplus_Hlt2Topo2BodySimpleDecision_Dec", &Kplus_Hlt2Topo2BodySimpleDecision_Dec);
   outTree->Branch("Kplus_Hlt2Topo2BodySimpleDecision_TIS", &Kplus_Hlt2Topo2BodySimpleDecision_TIS);
   outTree->Branch("Kplus_Hlt2Topo2BodySimpleDecision_TOS", &Kplus_Hlt2Topo2BodySimpleDecision_TOS);
   outTree->Branch("Kplus_Hlt2Topo2BodyBBDTDecision_Dec", &Kplus_Hlt2Topo2BodyBBDTDecision_Dec);
   outTree->Branch("Kplus_Hlt2Topo2BodyBBDTDecision_TIS", &Kplus_Hlt2Topo2BodyBBDTDecision_TIS);
   outTree->Branch("Kplus_Hlt2Topo2BodyBBDTDecision_TOS", &Kplus_Hlt2Topo2BodyBBDTDecision_TOS);
   outTree->Branch("Kplus_Hlt2Topo4BodyBBDTDecision_Dec", &Kplus_Hlt2Topo4BodyBBDTDecision_Dec);
   outTree->Branch("Kplus_Hlt2Topo4BodyBBDTDecision_TIS", &Kplus_Hlt2Topo4BodyBBDTDecision_TIS);
   outTree->Branch("Kplus_Hlt2Topo4BodyBBDTDecision_TOS", &Kplus_Hlt2Topo4BodyBBDTDecision_TOS);
   outTree->Branch("Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec", &Kplus_Hlt2TopoMu4BodyBBDTDecision_Dec);
   outTree->Branch("Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS", &Kplus_Hlt2TopoMu4BodyBBDTDecision_TIS);
   outTree->Branch("Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS", &Kplus_Hlt2TopoMu4BodyBBDTDecision_TOS);
   outTree->Branch("Kplus_Hlt2IncPhiSidebandsDecision_Dec", &Kplus_Hlt2IncPhiSidebandsDecision_Dec);
   outTree->Branch("Kplus_Hlt2IncPhiSidebandsDecision_TIS", &Kplus_Hlt2IncPhiSidebandsDecision_TIS);
   outTree->Branch("Kplus_Hlt2IncPhiSidebandsDecision_TOS", &Kplus_Hlt2IncPhiSidebandsDecision_TOS);
   outTree->Branch("Kplus_Hlt2B2HHDecision_Dec", &Kplus_Hlt2B2HHDecision_Dec);
   outTree->Branch("Kplus_Hlt2B2HHDecision_TIS", &Kplus_Hlt2B2HHDecision_TIS);
   outTree->Branch("Kplus_Hlt2B2HHDecision_TOS", &Kplus_Hlt2B2HHDecision_TOS);
   outTree->Branch("Kplus_TRACK_Type", &Kplus_TRACK_Type);
   outTree->Branch("Kplus_TRACK_Key", &Kplus_TRACK_Key);
   outTree->Branch("Kplus_TRACK_CHI2NDOF", &Kplus_TRACK_CHI2NDOF);
   outTree->Branch("Kplus_TRACK_PCHI2", &Kplus_TRACK_PCHI2);
   outTree->Branch("Kplus_TRACK_MatchCHI2", &Kplus_TRACK_MatchCHI2);
   outTree->Branch("Kplus_TRACK_GhostProb", &Kplus_TRACK_GhostProb);
   outTree->Branch("Kplus_TRACK_CloneDist", &Kplus_TRACK_CloneDist);
   outTree->Branch("Kplus_TRACK_Likelihood", &Kplus_TRACK_Likelihood);
   outTree->Branch("Kplus_NOPARTWITHINDCHI2WDW", &Kplus_NOPARTWITHINDCHI2WDW);
   outTree->Branch("Kplus_NOPARTWITHINCHI2WDW", &Kplus_NOPARTWITHINCHI2WDW);
   outTree->Branch("Kplus_SMALLESTCHI2", &Kplus_SMALLESTCHI2);
   outTree->Branch("Kplus_SMALLESTDELTACHI2", &Kplus_SMALLESTDELTACHI2);
   outTree->Branch("nCandidate", &nCandidate);
   outTree->Branch("totCandidates", &totCandidates);
   outTree->Branch("EventInSequence", &EventInSequence);
   outTree->Branch("runNumber", &runNumber);
   outTree->Branch("eventNumber", &eventNumber);
   outTree->Branch("BCID", &BCID);
   outTree->Branch("BCType", &BCType);
   outTree->Branch("OdinTCK", &OdinTCK);
   outTree->Branch("L0DUTCK", &L0DUTCK);
   outTree->Branch("HLTTCK", &HLTTCK);
   outTree->Branch("GpsTime", &GpsTime);
   outTree->Branch("Polarity", &Polarity);
   outTree->Branch("nPV", &nPV);
   outTree->Branch("PVX", PVX);
   outTree->Branch("PVY", PVY);
   outTree->Branch("PVZ", PVZ);
   outTree->Branch("PVXERR", PVXERR);
   outTree->Branch("PVYERR", PVYERR);
   outTree->Branch("PVZERR", PVZERR);
   outTree->Branch("PVCHI2", PVCHI2);
   outTree->Branch("PVNDOF", PVNDOF);
   outTree->Branch("PVNTRACKS", PVNTRACKS);
   outTree->Branch("nPVs", &nPVs);
   outTree->Branch("nTracks", &nTracks);
   outTree->Branch("nLongTracks", &nLongTracks);
   outTree->Branch("nDownstreamTracks", &nDownstreamTracks);
   outTree->Branch("nUpstreamTracks", &nUpstreamTracks);
   outTree->Branch("nVeloTracks", &nVeloTracks);
   outTree->Branch("nTTracks", &nTTracks);
   outTree->Branch("nBackTracks", &nBackTracks);
   outTree->Branch("nRich1Hits", &nRich1Hits);
   outTree->Branch("nRich2Hits", &nRich2Hits);
   outTree->Branch("nVeloClusters", &nVeloClusters);
   outTree->Branch("nITClusters", &nITClusters);
   outTree->Branch("nTTClusters", &nTTClusters);
   outTree->Branch("nOTClusters", &nOTClusters);
   outTree->Branch("nSPDHits", &nSPDHits);
   outTree->Branch("nMuonCoordsS0", &nMuonCoordsS0);
   outTree->Branch("nMuonCoordsS1", &nMuonCoordsS1);
   outTree->Branch("nMuonCoordsS2", &nMuonCoordsS2);
   outTree->Branch("nMuonCoordsS3", &nMuonCoordsS3);
   outTree->Branch("nMuonCoordsS4", &nMuonCoordsS4);
   outTree->Branch("nMuonTracks", &nMuonTracks);
   outTree->Branch("L0Global", &L0Global);
   outTree->Branch("Hlt1Global", &Hlt1Global);
   outTree->Branch("Hlt2Global", &Hlt2Global);
   outTree->Branch("L0HadronDecision", &L0HadronDecision);
   outTree->Branch("L0MuonDecision", &L0MuonDecision);
   outTree->Branch("L0DiMuonDecision", &L0DiMuonDecision);
   outTree->Branch("L0ElectronDecision", &L0ElectronDecision);
   outTree->Branch("L0PhotonDecision", &L0PhotonDecision);
   outTree->Branch("L0nSelections", &L0nSelections);
   outTree->Branch("Hlt1SingleHadronDecision", &Hlt1SingleHadronDecision);
   outTree->Branch("Hlt1MBNoBiasDecision", &Hlt1MBNoBiasDecision);
   outTree->Branch("Hlt1DiHadronDecision", &Hlt1DiHadronDecision);
   outTree->Branch("Hlt1L0AnyDecision", &Hlt1L0AnyDecision);
   outTree->Branch("Hlt1TrackAllL0Decision", &Hlt1TrackAllL0Decision);
   outTree->Branch("Hlt1nSelections", &Hlt1nSelections);
   outTree->Branch("Hlt2TopoOSTF4BodyDecision", &Hlt2TopoOSTF4BodyDecision);
   outTree->Branch("Hlt2IncPhiDecision", &Hlt2IncPhiDecision);
   outTree->Branch("Hlt2Topo4BodySimpleDecision", &Hlt2Topo4BodySimpleDecision);
   outTree->Branch("Hlt2Topo3BodySimpleDecision", &Hlt2Topo3BodySimpleDecision);
   outTree->Branch("Hlt2Topo3BodyBBDTDecision", &Hlt2Topo3BodyBBDTDecision);
   outTree->Branch("Hlt2Topo2BodySimpleDecision", &Hlt2Topo2BodySimpleDecision);
   outTree->Branch("Hlt2Topo2BodyBBDTDecision", &Hlt2Topo2BodyBBDTDecision);
   outTree->Branch("Hlt2Topo4BodyBBDTDecision", &Hlt2Topo4BodyBBDTDecision);
   outTree->Branch("Hlt2TopoMu4BodyBBDTDecision", &Hlt2TopoMu4BodyBBDTDecision);
   outTree->Branch("Hlt2IncPhiSidebandsDecision", &Hlt2IncPhiSidebandsDecision);
   outTree->Branch("Hlt2B2HHDecision", &Hlt2B2HHDecision);
   outTree->Branch("Hlt2nSelections", &Hlt2nSelections);
   outTree->Branch("MaxRoutingBits", &MaxRoutingBits);


}

Bool_t MCClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MCClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MCClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MCClass_cxx
