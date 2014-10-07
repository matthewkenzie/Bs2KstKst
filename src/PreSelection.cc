/////////////////////////////////////
//                                 //
// PreSelection.cc              	 //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"
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

	if ( *l->B_s0_DIRA_OWNPV < 0.9995 ) return false;
	if ( *l->B_s0_PT < 2000 ) return false;
	if ( *l->Kst_PT < 1000 ) return false;
	if ( *l->Kstb_PT < 1000 ) return false;
	if ( *l->Kplus_PT < 500 ) return false;
	if ( *l->Kminus_PT < 500 ) return false;
	if ( *l->Piplus_PT < 500 ) return false;
	if ( *l->Piminus_PT < 500 ) return false;
	if ( *l->B_s0_TAU < 0 ) return false;

	if ( *l->B_s0_MM < 5000 || *l->B_s0_MM > 5800 ) return false;

	// MC only
	if ( l->itype < 0 ) {
		if ( *l->B_s0_BKGCAT > 10 ) return false;
	}
	// Data only
	//if ( l->itype > 0 ) {
	//}

	return true;
}

