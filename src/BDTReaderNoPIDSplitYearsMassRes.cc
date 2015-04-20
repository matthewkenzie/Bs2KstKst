/////////////////////////////////////
//                                 //
// BDTReaderNoPIDSplitYearsMassRes.h            			   //
// Author: Matthew Kenzie          //
// Will train BDTs   					     //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"

#include "../interface/BDTReaderNoPIDSplitYearsMassRes.h"

using namespace std;
using namespace TMVA;

BDTReaderNoPIDSplitYearsMassRes::BDTReaderNoPIDSplitYearsMassRes(TString _name):
	BaseAnalyser(_name),
	evCount(0),
	numberOfBDTs(4)
{}

BDTReaderNoPIDSplitYearsMassRes::~BDTReaderNoPIDSplitYearsMassRes(){}

void BDTReaderNoPIDSplitYearsMassRes::Init(Looper *l){
	cout << Form("%-30s","BDTReaderNoPIDSplitYearsMassRes::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;

	// MVA
  readerContainer["2011"] = vector<TMVA::Reader*>();
  readerContainer["2012"] = vector<TMVA::Reader*>();
	for (int b=0; b<numberOfBDTs; b++){
		readerContainer["2011"].push_back( new TMVA::Reader( "!Color:!Silent" ) );
		readerContainer["2012"].push_back( new TMVA::Reader( "!Color:!Silent" ) );

		// add variables
		readerContainer["2011"][b]->AddVariable("ln_B_s0_PT",             &ln_B_s0_PT);
		readerContainer["2011"][b]->AddVariable("ln_Kst_PT",              &ln_Kst_PT);
    readerContainer["2011"][b]->AddVariable("ln_Kstb_PT",             &ln_Kstb_PT);
    readerContainer["2011"][b]->AddVariable("ln_max_track_PT",        &ln_max_track_PT);
    readerContainer["2011"][b]->AddVariable("ln_min_track_PT",        &ln_min_track_PT);

    readerContainer["2011"][b]->AddVariable("B_s0_eta",               &B_s0_eta);
    readerContainer["2011"][b]->AddVariable("Kst_eta",                &Kst_eta);
    readerContainer["2011"][b]->AddVariable("Kstb_eta",               &Kstb_eta);
    readerContainer["2011"][b]->AddVariable("max_track_eta",          &max_track_eta);
    readerContainer["2011"][b]->AddVariable("min_track_eta",          &min_track_eta);

    readerContainer["2011"][b]->AddVariable("B_s0_ARCCOS_DIRA_OWNPV", &B_s0_ARCCOS_DIRA_OWNPV);
    readerContainer["2011"][b]->AddVariable("B_s0_ENDVERTEX_CHI2",    &B_s0_ENDVERTEX_CHI2);
    readerContainer["2011"][b]->AddVariable("B_s0_MMERRoMM",          &B_s0_MMERRoMM);
    readerContainer["2011"][b]->AddVariable("max_track_CHI2",         &max_track_CHI2);

    readerContainer["2012"][b]->AddVariable("ln_B_s0_PT",             &ln_B_s0_PT);
		readerContainer["2012"][b]->AddVariable("ln_Kst_PT",              &ln_Kst_PT);
    readerContainer["2012"][b]->AddVariable("ln_Kstb_PT",             &ln_Kstb_PT);
    readerContainer["2012"][b]->AddVariable("ln_max_track_PT",        &ln_max_track_PT);
    readerContainer["2012"][b]->AddVariable("ln_min_track_PT",        &ln_min_track_PT);

    readerContainer["2012"][b]->AddVariable("B_s0_eta",               &B_s0_eta);
    readerContainer["2012"][b]->AddVariable("Kst_eta",                &Kst_eta);
    readerContainer["2012"][b]->AddVariable("Kstb_eta",               &Kstb_eta);
    readerContainer["2012"][b]->AddVariable("max_track_eta",          &max_track_eta);
    readerContainer["2012"][b]->AddVariable("min_track_eta",          &min_track_eta);

    readerContainer["2012"][b]->AddVariable("B_s0_ARCCOS_DIRA_OWNPV", &B_s0_ARCCOS_DIRA_OWNPV);
    readerContainer["2012"][b]->AddVariable("B_s0_ENDVERTEX_CHI2",    &B_s0_ENDVERTEX_CHI2);
    readerContainer["2012"][b]->AddVariable("B_s0_MMERRoMM",          &B_s0_MMERRoMM);
    readerContainer["2012"][b]->AddVariable("max_track_CHI2",         &max_track_CHI2);


		// Book MVA methods
		weightsFile = Form("weights/BDTTrainerNoPIDSplitYearsMassResFactory_2011_BDT_%d.weights.xml",b);
		methodName = Form("BDT%dmethod",b);
		readerContainer["2011"][b]->BookMVA( methodName, weightsFile );

    weightsFile = Form("weights/BDTTrainerNoPIDSplitYearsMassResFactory_2012_BDT_%d.weights.xml",b);
		methodName = Form("BDT%dmethod",b);
		readerContainer["2012"][b]->BookMVA( methodName, weightsFile );
	}

}

void BDTReaderNoPIDSplitYearsMassRes::Term(Looper *l){

	cout << Form("%-30s","BDTReaderNoPIDSplitYearsMassRes::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool BDTReaderNoPIDSplitYearsMassRes::AnalyseEvent(Looper *l){

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

  B_s0_MMERRoMM           = float(*l->B_s0_MMERR / *l->B_s0_MM);

  TString year = "";
  if ( l->sqrts == 7 ) {
    year = "2011";
  }
  else if ( l->sqrts == 8 ) {
    year = "2012";
  }
  else {
    // not a valid event type
    return false;
  }

	int lastDigits = *l->eventNumber%100;
	int relBDT = lastDigits%numberOfBDTs;
	assert(relBDT < numberOfBDTs);

	*l->bdtoutput = readerContainer[year][relBDT]->EvaluateMVA( Form("BDT%dmethod",relBDT) );

  // other variables

  *l->Kplus_ProbNNpiKp   = *l->Kplus_ProbNNpi   * (1.-*l->Kplus_ProbNNk)   * (1.-*l->Kplus_ProbNNp);
  *l->Kminus_ProbNNpiKp  = *l->Kminus_ProbNNpi  * (1.-*l->Kminus_ProbNNk)  * (1.-*l->Kminus_ProbNNp);
  *l->Piplus_ProbNNpiKp  = *l->Piplus_ProbNNpi  * (1.-*l->Piplus_ProbNNk)  * (1.-*l->Piplus_ProbNNp);
  *l->Piminus_ProbNNpiKp = *l->Piminus_ProbNNpi * (1.-*l->Piminus_ProbNNk) * (1.-*l->Piminus_ProbNNp);

  *l->min_pion_PIDK = TMath::Min( *l->Piplus_PIDK, *l->Piminus_PIDK);
  *l->max_pion_PIDK = TMath::Max( *l->Piplus_PIDK, *l->Piminus_PIDK);
  *l->min_kaon_PIDK = TMath::Min( *l->Kplus_PIDK, *l->Kminus_PIDK);
  *l->max_kaon_PIDK = TMath::Max( *l->Kplus_PIDK, *l->Kminus_PIDK);

  *l->min_pion_ProbNNk = TMath::Min( *l->Piplus_ProbNNk, *l->Piminus_ProbNNk);
  *l->max_pion_ProbNNk = TMath::Max( *l->Piplus_ProbNNk, *l->Piminus_ProbNNk);
  *l->min_kaon_ProbNNk = TMath::Min( *l->Kplus_ProbNNk, *l->Kminus_ProbNNk);
  *l->max_kaon_ProbNNk = TMath::Max( *l->Kplus_ProbNNk, *l->Kminus_ProbNNk);

  *l->min_pion_ProbNNpi = TMath::Min( *l->Piplus_ProbNNpi, *l->Piminus_ProbNNpi);
  *l->max_pion_ProbNNpi = TMath::Max( *l->Piplus_ProbNNpi, *l->Piminus_ProbNNpi);
  *l->min_kaon_ProbNNpi = TMath::Min( *l->Kplus_ProbNNpi, *l->Kminus_ProbNNpi);
  *l->max_kaon_ProbNNpi = TMath::Max( *l->Kplus_ProbNNpi, *l->Kminus_ProbNNpi);

  *l->min_pion_ProbNNp = TMath::Min( *l->Piplus_ProbNNp, *l->Piminus_ProbNNp);
  *l->max_pion_ProbNNp = TMath::Max( *l->Piplus_ProbNNp, *l->Piminus_ProbNNp);
  *l->min_kaon_ProbNNp = TMath::Min( *l->Kplus_ProbNNp, *l->Kminus_ProbNNp);
  *l->max_kaon_ProbNNp = TMath::Max( *l->Kplus_ProbNNp, *l->Kminus_ProbNNp);

  *l->min_pion_ProbNNpiKp = TMath::Min( *l->Piplus_ProbNNpiKp, *l->Piminus_ProbNNpiKp);
  *l->max_pion_ProbNNpiKp = TMath::Max( *l->Piplus_ProbNNpiKp, *l->Piminus_ProbNNpiKp);
  *l->min_kaon_ProbNNpiKp = TMath::Min( *l->Kplus_ProbNNpiKp, *l->Kminus_ProbNNpiKp);
  *l->max_kaon_ProbNNpiKp = TMath::Max( *l->Kplus_ProbNNpiKp, *l->Kminus_ProbNNpiKp);

  *l->B_s0_MMERRoMM  = *l->B_s0_MMERR / *l->B_s0_MM;

  // only for tests
  //if (*l->bdtoutput<0.) {
  //  return false;
  //}
  //
  // 2011
  *l->pass_bdt = true;
  *l->pass_pid = true;
  if ( l->sqrts == 7 ) {
    if ( *l->bdtoutput < -0.04 )          *l->pass_bdt = false;
    if ( *l->min_kaon_ProbNNk < 0.54 )    *l->pass_pid = false;
    if ( *l->min_pion_ProbNNpiKp < 0.00 ) *l->pass_pid = false;
  }
  // 2012
  else if ( l->sqrts == 8 ) {
    if ( *l->bdtoutput < -0.02 )          *l->pass_bdt = false;
    if ( *l->min_kaon_ProbNNk < 0.46 )    *l->pass_pid = false;
    if ( *l->min_pion_ProbNNpiKp < 0.00 ) *l->pass_pid = false;
  }
  else {
    // not a valid event type
    return false;
  }

	// step up counter
	evCount++;

	return true;
}


