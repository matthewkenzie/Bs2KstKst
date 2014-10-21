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

	// do physics here e.g.:
  //
  // B_s0 Cuts
	if ( *l->B_s0_DIRA_OWNPV < 0.9995 ) return false;
  if ( *l->B_s0_ENDVERTEX_CHI2 > 50 ) return false;
	if ( *l->B_s0_PT < 2000 ) return false;
	if ( *l->B_s0_TAU < 0 ) return false;

  // Kst Cuts
  if ( *l->Kst_ENDVERTEX_CHI2 > 6 ) return false;
  if ( *l->Kstb_ENDVERTEX_CHI2 > 6 ) return false;
	if ( *l->Kst_PT < 1000 ) return false;
	if ( *l->Kstb_PT < 1000 ) return false;

  // K / Pi Cuts
  if ( *l->Kplus_ORIVX_CHI2 > 5 ) return false;
  if ( *l->Kminus_ORIVX_CHI2 > 5 ) return false;
  if ( *l->Piplus_ORIVX_CHI2 > 5 ) return false;
  if ( *l->Piminus_ORIVX_CHI2 > 5 ) return false;
	if ( *l->Kplus_PT < 500 ) return false;
	if ( *l->Kminus_PT < 500 ) return false;
	if ( *l->Piplus_PT < 500 ) return false;
	if ( *l->Piminus_PT < 500 ) return false;
  if ( *l->Kplus_ProbNNk < 0.2 ) return false;
  if ( *l->Kminus_ProbNNk < 0.2 ) return false;
  if ( *l->Kplus_ProbNNp > 0.6 ) return false;
  if ( *l->Kminus_ProbNNp > 0.6 ) return false;
  if ( *l->Piplus_ProbNNpi < 0.2 ) return false;
  if ( *l->Piminus_ProbNNpi < 0.2 ) return false;
  if ( *l->Kplus_isMuon ) return false;
  if ( *l->Kminus_isMuon ) return false;
  if ( *l->Piplus_isMuon ) return false;
  if ( *l->Piminus_isMuon ) return false;

  // 3-body mass
	TLorentzVector Kplus_p4(*l->Kplus_PX,*l->Kplus_PY,*l->Kplus_PZ,*l->Kplus_PE);
	TLorentzVector Kminus_p4(*l->Kminus_PX,*l->Kminus_PY,*l->Kminus_PZ,*l->Kminus_PE);
	TLorentzVector Piplus_p4(*l->Piplus_PX,*l->Piplus_PY,*l->Piplus_PZ,*l->Piplus_PE);
	TLorentzVector Piminus_p4(*l->Piminus_PX,*l->Piminus_PY,*l->Piminus_PZ,*l->Piminus_PE);

  double mkkpiplus = (Kplus_p4 + Kminus_p4 + Piplus_p4).M();
  double mkkpiminus = (Kplus_p4 + Kminus_p4 + Piminus_p4).M();

  if ( mkkpiplus < 2100 || mkkpiminus < 2100 ) return false;

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

