/////////////////////////////////////
//                                 //
// TruthMatching.cc              	 //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "../interface/TruthMatching.h"

using namespace std;

TruthMatching::TruthMatching(TString _name):
	BaseAnalyser(_name)
{}

TruthMatching::~TruthMatching(){}

void TruthMatching::Init(Looper *l){
	cout << Form("%-30s","TruthMatching::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;
}

void TruthMatching::Term(Looper *l){
	cout << Form("%-30s","TruthMatching::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool TruthMatching::AnalyseEvent(Looper *l){

	// do physics here e.g.:

  // MC only
	if ( l->itype < 0 ) {

    // Bs initial states
    if ( l->itype == -71 || l->itype == -81 || l->itype == -72 || l->itype == -82 || l->itype == -73 || l->itype == -83 || l->itype == -74 || l->itype == -84 ) {
      if ( *l->B_s0_BKGCAT > 10 ) return false;
    }
    // Bd to Kst Kst
    if ( l->itype == -75 || l->itype == -85 ) {
      if ( *l->B_s0_BKGCAT > 20 ) return false;
    }
    // Bd to Rho or Phi Kst
    if ( l->itype == -76 || l->itype == -86 || l->itype == -77 || l->itype == -87 ) {
      if ( *l->B_s0_BKGCAT > 30 ) return false;
    }
    // Lb initial states
    if ( l->itype == -78 || l->itype == -88 || l->itype == -79 || l->itype == -89 ) {
      if ( *l->B_s0_BKGCAT > 30 ) return false;
    }
	}
	// Data only
	//if ( l->itype > 0 ) {
	//}

	return true;
}

