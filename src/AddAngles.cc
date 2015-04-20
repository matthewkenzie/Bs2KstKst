/////////////////////////////////////
//                                 //
// AddAngles.cc              	 //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"
#include "../interface/AddAngles.h"

using namespace std;

AddAngles::AddAngles(TString _name):
	BaseAnalyser(_name)
{}

AddAngles::~AddAngles(){}

void AddAngles::Init(Looper *l){
	cout << Form("%-30s","AddAngles::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;
}

void AddAngles::Term(Looper *l){
	cout << Form("%-30s","AddAngles::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool AddAngles::AnalyseEvent(Looper *l){

	TLorentzVector kp;
	TLorentzVector km;
	TLorentzVector pip;
	TLorentzVector pim;

  kp.SetXYZM( *l->Kplus_PX, *l->Kplus_PY, *l->Kplus_PZ, 493.667);
  km.SetXYZM( *l->Kminus_PX, *l->Kminus_PY, *l->Kminus_PZ, 493.667);
  pip.SetXYZM( *l->Piplus_PX, *l->Piplus_PY, *l->Piplus_PZ, 139.570);
  pim.SetXYZM( *l->Piminus_PX, *l->Piminus_PY, *l->Piminus_PZ, 139.570);
	return true;
}


