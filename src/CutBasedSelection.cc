/////////////////////////////////////
//                                 //
// CutBasedSelection.cc              	 //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"
#include "../interface/CutBasedSelection.h"

using namespace std;

CutBasedSelection::CutBasedSelection(TString _name):
	BaseAnalyser(_name)
{}

CutBasedSelection::~CutBasedSelection(){}

void CutBasedSelection::Init(Looper *l){
	cout << Form("%-30s","CutBasedSelection::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;
}

void CutBasedSelection::Term(Looper *l){
	cout << Form("%-30s","CutBasedSelection::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool CutBasedSelection::AnalyseEvent(Looper *l){

	// do physics here e.g.:
  //
  //
  // B_s0 Cuts
  if ( (*l->B_s0_ENDVERTEX_CHI2 / *l->B_s0_ENDVERTEX_NDOF) > 12 ) return false;
  if ( (*l->Kplus_ORIVX_CHI2 / *l->Kplus_ORIVX_NDOF) > 9 ) return false;
  if ( (*l->Kminus_ORIVX_CHI2 / *l->Kminus_ORIVX_NDOF) > 9 ) return false;
  if ( (*l->Piplus_ORIVX_CHI2 / *l->Piplus_ORIVX_NDOF) > 9 ) return false;
  if ( (*l->Piminus_ORIVX_CHI2 / *l->Piminus_ORIVX_NDOF) > 9 ) return false;
  if ( *l->Kplus_TRACK_CHI2NDOF > 4 ) return false;
  if ( *l->Kminus_TRACK_CHI2NDOF > 4 ) return false;
  if ( *l->Piplus_TRACK_CHI2NDOF > 4 ) return false;
  if ( *l->Piminus_TRACK_CHI2NDOF > 4 ) return false;

  *l->max_track_chi2 = TMath::Max( TMath::Max( *l->Kplus_TRACK_CHI2NDOF, *l->Kminus_TRACK_CHI2NDOF) , TMath::Max( *l->Piplus_TRACK_CHI2NDOF, *l->Piminus_TRACK_CHI2NDOF) );

  if ( *l->B_s0_DIRA_OWNPV < 0.99 ) return false;
  if ( *l->Kplus_IPCHI2_OWNPV < 36 ) return false;
  if ( *l->Kminus_IPCHI2_OWNPV < 36 ) return false;
  if ( *l->Piplus_IPCHI2_OWNPV < 36 ) return false;
  if ( *l->Piminus_IPCHI2_OWNPV < 36 ) return false;

  // cut-based-pid
  *l->cut_based_pid = true;
  if ( *l->Kplus_ProbNNk < 0.2 )    *l->cut_based_pid = false;
  if ( *l->Kminus_ProbNNk < 0.2 )   *l->cut_based_pid = false;
  if ( *l->Kplus_ProbNNp > 0.6 )    *l->cut_based_pid = false;
  if ( *l->Kminus_ProbNNp > 0.6 )   *l->cut_based_pid = false;
  if ( *l->Piplus_ProbNNpi < 0.2 )  *l->cut_based_pid = false;
  if ( *l->Piminus_ProbNNpi < 0.2 ) *l->cut_based_pid = false;

  // continuation of cuts
  if ( *l->Kplus_isMuon ) return false;
  if ( *l->Kminus_isMuon ) return false;
  if ( *l->Piplus_isMuon ) return false;
  if ( *l->Piminus_isMuon ) return false;
  if ( *l->Kplus_PT < 500 ) return false;
  if ( *l->Kminus_PT < 500 ) return false;
  if ( *l->Piplus_PT < 500 ) return false;
  if ( *l->Piminus_PT < 500 ) return false;
  if ( *l->Kst_PT < 900 ) return false;
  if ( *l->Kstb_PT < 900 ) return false;

  // 3-body mass
	TLorentzVector B_s0_p4(*l->B_s0_PX,*l->B_s0_PY,*l->B_s0_PZ,*l->B_s0_PE);
	TLorentzVector Kst_p4(*l->Kst_PX,*l->Kst_PY,*l->Kst_PZ,*l->Kst_PE);
	TLorentzVector Kstb_p4(*l->Kstb_PX,*l->Kstb_PY,*l->Kstb_PZ,*l->Kstb_PE);
	TLorentzVector Kplus_p4(*l->Kplus_PX,*l->Kplus_PY,*l->Kplus_PZ,*l->Kplus_PE);
	TLorentzVector Kminus_p4(*l->Kminus_PX,*l->Kminus_PY,*l->Kminus_PZ,*l->Kminus_PE);
	TLorentzVector Piplus_p4(*l->Piplus_PX,*l->Piplus_PY,*l->Piplus_PZ,*l->Piplus_PE);
	TLorentzVector Piminus_p4(*l->Piminus_PX,*l->Piminus_PY,*l->Piminus_PZ,*l->Piminus_PE);

	*l->B_s0_ETA    = B_s0_p4.Eta();
	*l->Kst_ETA     = Kst_p4.Eta();
	*l->Kstb_ETA    = Kstb_p4.Eta();
	*l->Kplus_ETA   = Kplus_p4.Eta();
	*l->Kminus_ETA  = Kminus_p4.Eta();
	*l->Piplus_ETA  = Piplus_p4.Eta();
	*l->Piminus_ETA = Piminus_p4.Eta();

	*l->M_KKPiPlus  = (Kplus_p4 + Kminus_p4 + Piplus_p4).M();
	*l->M_KKPiMinus = (Kplus_p4 + Kminus_p4 + Piminus_p4).M();

  if ( *l->M_KKPiPlus < 2100 || *l->M_KKPiMinus < 2100 ) return false;

	if ( *l->B_s0_MM < 5000 || *l->B_s0_MM > 5800 ) return false;

  if ( *l->Kst_MM < 750 || *l->Kst_MM > 1700 ) return false;
  if ( *l->Kstb_MM < 750 || *l->Kstb_MM > 1700 ) return false;

	// MC only
	//if ( l->itype < 0 ) {
	//}
	// Data only
	//if ( l->itype > 0 ) {
	//}

	return true;
}

