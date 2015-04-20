/////////////////////////////////////
//                                 //
// AddAngles.cc              	     //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"
#include "TVector3.h"
#include "../interface/AddAngles.h"

using namespace std;
using namespace TMath;

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

  // Add helicity angles and planar angle for decays of type X -> P1P2 -> (p11p12) (p21p22) a la PDG
  //
	TLorentzVector p11(*l->Kplus_PX,*l->Kplus_PY,*l->Kplus_PZ,*l->Kplus_PE);
	TLorentzVector p12(*l->Piminus_PX,*l->Piminus_PY,*l->Piminus_PZ,*l->Piminus_PE);
	TLorentzVector p21(*l->Kminus_PX,*l->Kminus_PY,*l->Kminus_PZ,*l->Kminus_PE);
	TLorentzVector p22(*l->Piplus_PX,*l->Piplus_PY,*l->Piplus_PZ,*l->Piplus_PE);

  TLorentzVector P1 = p11 + p12;
  TLorentzVector P2 = p21 + p22;

  TLorentzVector X = p11 + p12 + p21 + p22;

  // boost everything into X frame (usually B frame)

  TVector3 X_boost_vec = X.BoostVector();

  TLorentzVector *boostedX_X   = (TLorentzVector*)X.Clone();   boostedX_X->Boost( -X_boost_vec );
  TLorentzVector *boostedX_P1  = (TLorentzVector*)P1.Clone();  boostedX_P1->Boost( -X_boost_vec );
  TLorentzVector *boostedX_P2  = (TLorentzVector*)P2.Clone();  boostedX_P2->Boost( -X_boost_vec );
  TLorentzVector *boostedX_p11 = (TLorentzVector*)p11.Clone(); boostedX_p11->Boost( -X_boost_vec );
  TLorentzVector *boostedX_p12 = (TLorentzVector*)p12.Clone(); boostedX_p12->Boost( -X_boost_vec );
  TLorentzVector *boostedX_p21 = (TLorentzVector*)p21.Clone(); boostedX_p21->Boost( -X_boost_vec );
  TLorentzVector *boostedX_p22 = (TLorentzVector*)p22.Clone(); boostedX_p22->Boost( -X_boost_vec );

  // boost p11 into P1 frame and p21 into P2 frame (as we take these as two angles)
  TVector3 P1_boost_vec = boostedX_P1->BoostVector();
  TVector3 P2_boost_vec = boostedX_P2->BoostVector();

  TLorentzVector *boostedP1_p11 = (TLorentzVector*)boostedX_p11->Clone(); boostedP1_p11->Boost( -P1_boost_vec );
  TLorentzVector *boostedP2_p21 = (TLorentzVector*)boostedX_p21->Clone(); boostedP2_p21->Boost( -P2_boost_vec );

  // get the angles between these
  *l->B_s0_CosTheta1 = Cos( boostedX_P1->Angle( boostedP1_p11->Vect() ) );
  *l->B_s0_CosTheta2 = Cos( boostedX_P2->Angle( boostedP2_p21->Vect() ) );

  // now define some unit vectors for the phi planar angle
  TVector3 boostedX_p11_unit = boostedX_p11->Vect().Unit();
  TVector3 boostedX_p12_unit = boostedX_p12->Vect().Unit();
  TVector3 boostedX_p21_unit = boostedX_p21->Vect().Unit();
  TVector3 boostedX_p22_unit = boostedX_p22->Vect().Unit();

  // get normals of two decay planes
  TVector3 e1 = ( boostedX_p11_unit.Cross( boostedX_p12_unit ) ).Unit();
  TVector3 e2 = ( boostedX_p21_unit.Cross( boostedX_p22_unit ) ).Unit();

  // dir of P1 in B frame
  TVector3 ez = boostedX_P1->Vect().Unit();

  // planar angle
  double cosPhi = e1.Dot(e2);
  double sinPhi = (e2.Cross(e1)).Dot(ez);
  double phi = ACos(cosPhi) - Pi();

  *l->B_s0_Phi1 = sinPhi > 0. ? phi : -phi;

  return true;
}


