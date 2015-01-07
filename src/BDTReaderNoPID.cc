/////////////////////////////////////
//                                 //
// BDTReaderNoPID.h            			   //
// Author: Matthew Kenzie          //
// Will train BDTs   					     //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"

#include "../interface/BDTReaderNoPID.h"

using namespace std;
using namespace TMVA;

BDTReaderNoPID::BDTReaderNoPID(TString _name):
	BaseAnalyser(_name),
	evCount(0),
	numberOfBDTs(2)
{}

BDTReaderNoPID::~BDTReaderNoPID(){}

void BDTReaderNoPID::Init(Looper *l){
	cout << Form("%-30s","BDTReaderNoPID::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;

	// MVA
	for (int b=0; b<numberOfBDTs; b++){
		readerContainer.push_back( new TMVA::Reader( "!Color:!Silent" ) );

		// add variables
		readerContainer[b]->AddVariable("ln_B_s0_PT",             &ln_B_s0_PT);
		readerContainer[b]->AddVariable("ln_Kst_PT",              &ln_Kst_PT);
    readerContainer[b]->AddVariable("ln_Kstb_PT",             &ln_Kstb_PT);
    readerContainer[b]->AddVariable("ln_max_track_PT",        &ln_max_track_PT);
    readerContainer[b]->AddVariable("ln_min_track_PT",        &ln_min_track_PT);

    readerContainer[b]->AddVariable("B_s0_eta",               &B_s0_eta);
    readerContainer[b]->AddVariable("Kst_eta",                &Kst_eta);
    readerContainer[b]->AddVariable("Kstb_eta",               &Kstb_eta);
    readerContainer[b]->AddVariable("max_track_eta",          &max_track_eta);
    readerContainer[b]->AddVariable("min_track_eta",          &min_track_eta);

    readerContainer[b]->AddVariable("B_s0_ARCCOS_DIRA_OWNPV", &B_s0_ARCCOS_DIRA_OWNPV);
    readerContainer[b]->AddVariable("B_s0_ENDVERTEX_CHI2",    &B_s0_ENDVERTEX_CHI2);
    readerContainer[b]->AddVariable("max_track_CHI2",         &max_track_CHI2);

		// Book MVA methods
		weightsFile = Form("weights/BDTTrainerNoPIDFactory%d_BDT%d.weights.xml",b,b);
		methodName = Form("BDT%dmethod",b);
		readerContainer[b]->BookMVA( methodName, weightsFile );
	}

}

void BDTReaderNoPID::Term(Looper *l){

	cout << Form("%-30s","BDTReaderNoPID::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool BDTReaderNoPID::AnalyseEvent(Looper *l){

	// Have to set everything as float because of TMVA
  //
  ln_B_s0_PT              = float(TMath::Log(*l->B_s0_PT));
  ln_Kst_PT               = float(TMath::Log(*l->Kst_PT));
  ln_Kstb_PT              = float(TMath::Log(*l->Kstb_PT));
  ln_max_track_PT         = float(TMath::Log( TMath::Max( TMath::Max(*l->Kplus_PT, *l->Kminus_PT), TMath::Max(*l->Piplus_PT, *l->Piminus_PT) ) ));
  ln_min_track_PT         = float(TMath::Log( TMath::Min( TMath::Min(*l->Kplus_PT, *l->Kminus_PT), TMath::Min(*l->Piplus_PT, *l->Piminus_PT) ) ));

  B_s0_eta                = float(TMath::Abs(*l->B_s0_ETA));
  Kst_eta                 = float(TMath::Abs(*l->Kst_ETA));
  Kstb_eta                = float(TMath::Abs(*l->Kstb_ETA));
  max_track_eta           = float(TMath::Max( TMath::Max(TMath::Abs(*l->Kplus_ETA), TMath::Abs(*l->Kminus_ETA)), TMath::Max(TMath::Abs(*l->Piplus_ETA), TMath::Abs(*l->Piminus_ETA)) ));
  min_track_eta           = float(TMath::Min( TMath::Min(TMath::Abs(*l->Kplus_ETA), TMath::Abs(*l->Kminus_ETA)), TMath::Min(TMath::Abs(*l->Piplus_ETA), TMath::Abs(*l->Piminus_ETA)) ));

  B_s0_ARCCOS_DIRA_OWNPV  = float(TMath::ACos(*l->B_s0_DIRA_OWNPV));
  B_s0_ENDVERTEX_CHI2     = float(*l->B_s0_ENDVERTEX_CHI2);

  max_track_CHI2          = float(*l->max_track_chi2);

	int lastDigit = *l->eventNumber%10;
	int relBDT = int(floor(lastDigit/2))%numberOfBDTs;
	assert(relBDT < numberOfBDTs);

	*l->bdtoutput = readerContainer[relBDT]->EvaluateMVA( Form("BDT%dmethod",relBDT) );
	// bdt cut?
	//if ( *l->bdtoutput < 0.01 ) return false;
	//

	// step up counter
	evCount++;

	return true;
}


