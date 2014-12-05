/////////////////////////////////////
//                                 //
// PreSelection.cc              	 //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"
#include "../interface/PreSelection.h"

using namespace std;

PreSelection::PreSelection(TString _name):
	BaseAnalyser(_name)
{}

PreSelection::~PreSelection(){}

void PreSelection::Init(Looper *l){
	cout << Form("%-30s","PreSelection::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;
}

void PreSelection::Term(Looper *l){
	cout << Form("%-30s","PreSelection::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool PreSelection::AnalyseEvent(Looper *l){

  // -----------------------------------------------------------------------
	// add new variables
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

  *l->max_track_chi2 = TMath::Max( TMath::Max( *l->Kplus_TRACK_CHI2NDOF, *l->Kminus_TRACK_CHI2NDOF) , TMath::Max( *l->Piplus_TRACK_CHI2NDOF, *l->Piminus_TRACK_CHI2NDOF) );
  // -----------------------------------------------------------------------


  // -----------------------------------------------------------------------
  // do physics cuts here:
  //
  // B_s0 Cuts   ( 97% eff )
	if ( *l->B_s0_DIRA_OWNPV < 0.9995 ) return false;                              // stripping is 0.99
  if ( (*l->B_s0_ENDVERTEX_CHI2 / *l->B_s0_ENDVERTEX_NDOF ) > 12 ) return false; // in stripping
	if ( *l->B_s0_TAU < 0 ) return false;                                          // sanity
	//// mass window
  if ( *l->B_s0_MM < 5000 || *l->B_s0_MM > 5800 ) return false;                  // mass window

  // Kst cuts    ( 99% eff )
  if ( (*l->Kst_ENDVERTEX_CHI2  / *l->Kst_ENDVERTEX_NDOF  )  > 12 ) return false; // in stripping
  if ( (*l->Kstb_ENDVERTEX_CHI2 / *l->Kstb_ENDVERTEX_NDOF ) > 12 )  return false; // in stripping
	if ( *l->Kst_PT  < 900 ) return false;                                         // in stripping
	if ( *l->Kstb_PT < 900 ) return false;                                         // in stripping
  if ( *l->Kst_MM  < 750 || *l->Kst_MM  > 1700 ) return false;                   // stripping in range (740,2100)
  if ( *l->Kstb_MM < 750 || *l->Kstb_MM > 1700 ) return false;                   // stripping in range (740,2100)

  // 3-body mass ( 99% eff )
  if ( *l->M_KKPiPlus < 2100 || *l->M_KKPiMinus < 2100 ) return false;           // not in stripping

  // Track cuts
  //// chi2/dof  ( 100% eff )
  if ( *l->Kplus_TRACK_CHI2NDOF   > 4 ) return false;                            // in stripping
  if ( *l->Kminus_TRACK_CHI2NDOF  > 4 ) return false;                            // in stripping
  if ( *l->Piplus_TRACK_CHI2NDOF  > 4 ) return false;                            // in stripping
  if ( *l->Piminus_TRACK_CHI2NDOF > 4 ) return false;                            // in stripping
  //// PT        ( 100% eff )
	if ( *l->Kplus_PT             < 500 ) return false;                            // in stripping
	if ( *l->Kminus_PT            < 500 ) return false;                            // in stripping
	if ( *l->Piplus_PT            < 500 ) return false;                            // in stripping
	if ( *l->Piminus_PT           < 500 ) return false;                            // in stripping
  //// PID       ( 98% eff )
  if ( *l->Kplus_ProbNNk        < 0.0 ) return false;                            // not in stripping
  if ( *l->Kminus_ProbNNk       < 0.0 ) return false;                            // not in stripping
  if ( *l->Kplus_ProbNNp        < 0.0 ) return false;                            // not in stripping
  if ( *l->Kminus_ProbNNp       < 0.0 ) return false;                            // not in stripping
  if ( *l->Piplus_ProbNNpi      < 0.0 ) return false;                            // not in stripping
  if ( *l->Piminus_ProbNNpi     < 0.0 ) return false;                            // not in stripping
  if ( *l->Kplus_isMuon               ) return false;                            // not in stripping
  if ( *l->Kminus_isMuon              ) return false;                            // not in stripping
  if ( *l->Piplus_isMuon              ) return false;                            // not in stripping
  if ( *l->Piminus_isMuon             ) return false;                            // not in stripping
  // -----------------------------------------------------------------------

	// MC only
	//if ( l->itype < 0 ) {
	//}
	// Data only
	//if ( l->itype > 0 ) {
	//}

	return true;
}

