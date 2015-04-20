/////////////////////////////////////
//                                 //
// ApplyBDTAndPIDCuts.cc           //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"
#include "../interface/ApplyBDTAndPIDCuts.h"

using namespace std;

ApplyBDTAndPIDCuts::ApplyBDTAndPIDCuts(TString _name):
	BaseAnalyser(_name)
{}

ApplyBDTAndPIDCuts::~ApplyBDTAndPIDCuts(){}

void ApplyBDTAndPIDCuts::Init(Looper *l){
	cout << Form("%-30s","ApplyBDTAndPIDCuts::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;
}

void ApplyBDTAndPIDCuts::Term(Looper *l){
	cout << Form("%-30s","ApplyBDTAndPIDCuts::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool ApplyBDTAndPIDCuts::AnalyseEvent(Looper *l){

  // 2011
  if ( l->sqrts == 7 ) {
    if ( *l->bdtoutput < -0.04 )          return false;
    if ( *l->min_kaon_ProbNNk < 0.54 )    return false;
    if ( *l->min_pion_ProbNNpiKp < 0.00 ) return false;
  }
  // 2012
  else if ( l->sqrts == 8 ) {
    if ( *l->bdtoutput < -0.02 )          return false;
    if ( *l->min_kaon_ProbNNk < 0.46 )    return false;
    if ( *l->min_pion_ProbNNpiKp < 0.00 ) return false;
  }
  else {
    // not a valid event type
    return false;
  }

	// MC only
	//if ( l->itype < 0 ) {
	//}
	// Data only
	//if ( l->itype > 0 ) {
	//}

	return true;
}


