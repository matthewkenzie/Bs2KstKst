/////////////////////////////////////
//                                 //
// TriggerSelection.cc              	 //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "../interface/TriggerSelection.h"

using namespace std;

TriggerSelection::TriggerSelection(TString _name):
	BaseAnalyser(_name)
{}

TriggerSelection::~TriggerSelection(){}

void TriggerSelection::Init(Looper *l){
	cout << Form("%-30s","TriggerSelection::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;
}

void TriggerSelection::Term(Looper *l){
	cout << Form("%-30s","TriggerSelection::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool TriggerSelection::AnalyseEvent(Looper *l){

	// do physics here e.g.:
	if ( ! *l->B_s0_L0HadronDecision_TOS ) return false;

	if ( ! *l->B_s0_Hlt1DiHadronDecision_TOS             &&
			 ! *l->B_s0_Hlt1SingleHadronDecision_TOS         &&
			 ! *l->B_s0_Hlt1TrackAllL0Decision_TOS               ) return false;

	if ( ! *l->B_s0_Hlt2B2HHDecision_TOS            			&&
			 ! *l->B_s0_Hlt2Topo2BodyBBDTDecision_TOS    			&&
			 ! *l->B_s0_Hlt2Topo2BodySimpleDecision_TOS 			&&
			 ! *l->B_s0_Hlt2Topo3BodyBBDTDecision_TOS   			&&
			 ! *l->B_s0_Hlt2Topo3BodySimpleDecision_TOS 			&&
			 ! *l->B_s0_Hlt2Topo4BodyBBDTDecision_TOS   			&&
			 ! *l->B_s0_Hlt2Topo4BodySimpleDecision_TOS 			&&
			 ! *l->B_s0_Hlt2TopoMu4BodyBBDTDecision_TOS 			&&
       ! *l->B_s0_Hlt2TopoOSTF4BodyDecision_TOS   					) return false;

	// MC only
	//if ( l->itype < 0 ) {
	//}
	// Data only
	//if ( l->itype > 0 ) {
	//}

	return true;
}

