/////////////////////////////////////
//                                 //
// BDTReader.h            			   //
// Author: Matthew Kenzie          //
// Will train BDTs   					     //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"

#include "../interface/BDTReader.h"

using namespace std;
using namespace TMVA;

BDTReader::BDTReader(TString _name):
	BaseAnalyser(_name),
	evCount(0),
	numberOfBDTs(1)
{}

BDTReader::~BDTReader(){}

void BDTReader::Init(Looper *l){
	cout << Form("%-30s","BDTReader::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;

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

    //readerContainer[b]->AddVariable("min_K_DeltaProbKPi",     &min_K_DeltaProbKPi);
    //readerContainer[b]->AddVariable("max_Pi_DeltaProbKPi",    &max_Pi_DeltaProbKPi);
    readerContainer[b]->AddVariable("Kplus_PID_DeltaProbKPi",    &Kplus_PID_DeltaProbKPi);
    readerContainer[b]->AddVariable("Kminus_PID_DeltaProbKPi",   &Kminus_PID_DeltaProbKPi);
    readerContainer[b]->AddVariable("Piplus_PID_DeltaProbPiK",   &Piplus_PID_DeltaProbPiK);
    readerContainer[b]->AddVariable("Piminus_PID_DeltaProbPiK",  &Piminus_PID_DeltaProbPiK);

		// Book MVA methods
		weightsFile = Form("weights/BDTTrainerFactory%d_BDT%d.weights.xml",b,b);
		methodName = Form("BDT%dmethod",b);
		readerContainer[b]->BookMVA( methodName, weightsFile );
	}

}

void BDTReader::Term(Looper *l){

	cout << Form("%-30s","BDTReader::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool BDTReader::AnalyseEvent(Looper *l){

	// Have to set everything as float because of TMVA
  //
  ln_B_s0_PT              = float(TMath::Log(*l->B_s0_PT));
  ln_Kst_PT               = float(TMath::Log(*l->Kst_PT));
  ln_Kstb_PT              = float(TMath::Log(*l->Kstb_PT));
  ln_max_track_PT         = float(TMath::Log( TMath::Max( TMath::Max(*l->Kplus_PT, *l->Kminus_PT), TMath::Max(*l->Piplus_PT, *l->Piminus_PT) ) ));
  ln_min_track_PT         = float(TMath::Log( TMath::Min( TMath::Min(*l->Kplus_PT, *l->Kminus_PT), TMath::Min(*l->Piplus_PT, *l->Piminus_PT) ) ));

	TLorentzVector B_s0_p4(*l->B_s0_PX,*l->B_s0_PY,*l->B_s0_PZ,*l->B_s0_PE);
	TLorentzVector Kst_p4(*l->Kst_PX,*l->Kst_PY,*l->Kst_PZ,*l->Kst_PE);
	TLorentzVector Kstb_p4(*l->Kstb_PX,*l->Kstb_PY,*l->Kstb_PZ,*l->Kstb_PE);
	TLorentzVector Kplus_p4(*l->Kplus_PX,*l->Kplus_PY,*l->Kplus_PZ,*l->Kplus_PE);
	TLorentzVector Kminus_p4(*l->Kminus_PX,*l->Kminus_PY,*l->Kminus_PZ,*l->Kminus_PE);
	TLorentzVector Piplus_p4(*l->Piplus_PX,*l->Piplus_PY,*l->Piplus_PZ,*l->Piplus_PE);
	TLorentzVector Piminus_p4(*l->Piminus_PX,*l->Piminus_PY,*l->Piminus_PZ,*l->Piminus_PE);

  B_s0_eta                = float(TMath::Abs(B_s0_p4.Eta()));
  Kst_eta                 = float(TMath::Abs(Kst_p4.Eta()));
  Kstb_eta                = float(TMath::Abs(Kstb_p4.Eta()));
  max_track_eta           = float(TMath::Max( TMath::Max(TMath::Abs(Kplus_p4.Eta()), TMath::Abs(Kminus_p4.Eta())), TMath::Max(TMath::Abs(Piplus_p4.Eta()), TMath::Abs(Piminus_p4.Eta())) ));
  min_track_eta           = float(TMath::Min( TMath::Min(TMath::Abs(Kplus_p4.Eta()), TMath::Abs(Kminus_p4.Eta())), TMath::Min(TMath::Abs(Piplus_p4.Eta()), TMath::Abs(Piminus_p4.Eta())) ));

  B_s0_ARCCOS_DIRA_OWNPV  = float(TMath::ACos(*l->B_s0_DIRA_OWNPV));
  B_s0_ENDVERTEX_CHI2     = float(*l->B_s0_ENDVERTEX_CHI2);

	double kst_max_track_chi2 = TMath::Max(*l->Kplus_TRACK_CHI2NDOF,*l->Piminus_TRACK_CHI2NDOF);
	double kstb_max_track_chi2 = TMath::Max(*l->Piplus_TRACK_CHI2NDOF,*l->Kminus_TRACK_CHI2NDOF);
	double max_track_chi2 = TMath::Max(kst_max_track_chi2,kstb_max_track_chi2);

  max_track_CHI2          = float(max_track_chi2);

  //min_K_DeltaProbKPi      = float(TMath::Min( (*l->Kplus_ProbNNkcorr - *l->Kplus_ProbNNpicorr) , (*l->Kminus_ProbNNkcorr - *l->Kminus_ProbNNpicorr) ));
  //max_Pi_DeltaProbKPi     = float(TMath::Max( (*l->Piplus_ProbNNkcorr - *l->Piplus_ProbNNpicorr) , (*l->Piminus_ProbNNkcorr - *l->Piminus_ProbNNpicorr) ));
	Kplus_PID_DeltaProbKPi   = float(*l->Kplus_ProbNNkcorr - *l->Kplus_ProbNNpicorr);
	Kminus_PID_DeltaProbKPi  = float(*l->Kminus_ProbNNkcorr - *l->Kminus_ProbNNpicorr);
	Piplus_PID_DeltaProbPiK  = float(*l->Piplus_ProbNNpicorr - *l->Piplus_ProbNNkcorr);
	Piminus_PID_DeltaProbPiK = float(*l->Piminus_ProbNNpicorr - *l->Piminus_ProbNNkcorr);

	int lastDigit = *l->eventNumber%10;
	int relBDT = int(floor(lastDigit/2))%numberOfBDTs;
	assert(relBDT < numberOfBDTs);

	*l->bdtoutput = readerContainer[relBDT]->EvaluateMVA( Form("BDT%dmethod",relBDT) );
	// bdt cut?
	//if ( l->bdtoutput < 0.08 ) return false;
	//

	// step up counter
	evCount++;

	return true;
}


