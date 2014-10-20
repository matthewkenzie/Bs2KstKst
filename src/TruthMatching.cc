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
		if ( *l->B_s0_BKGCAT > 10 ) return false;
	}
	// Data only
	//if ( l->itype > 0 ) {
	//}

	return true;
}

