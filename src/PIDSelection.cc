/////////////////////////////////////
//                                 //
// PIDSelection.cc              	 //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"
#include "../interface/PIDSelection.h"

using namespace std;

PIDSelection::PIDSelection(TString _name):
	BaseAnalyser(_name)
{}

PIDSelection::~PIDSelection(){}

void PIDSelection::Init(Looper *l){
	cout << Form("%-30s","PIDSelection::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;
}

void PIDSelection::Term(Looper *l){
	cout << Form("%-30s","PIDSelection::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool PIDSelection::AnalyseEvent(Looper *l){

  //// PID       ( 98% eff )
  if ( *l->Kplus_ProbNNk        < 0.5 ) return false;                            // not in stripping
  if ( *l->Kminus_ProbNNk       < 0.5 ) return false;                            // not in stripping
  // -----------------------------------------------------------------------

	// MC only
	//if ( l->itype < 0 ) {
	//}
	// Data only
	//if ( l->itype > 0 ) {
	//}

	return true;
}

