/////////////////////////////////////
//                                 //
// BDTTrainer.h            			   //
// Author: Matthew Kenzie          //
// Will train BDTs   					     //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"

#include "../interface/BDTTrainer.h"

using namespace std;
using namespace TMVA;

BDTTrainer::BDTTrainer(TString _name):
	BaseAnalyser(_name),
	outfilename("MVATrainingOutput.root"),
	evCount(0),
	numberOfBDTs(2),
  doBDTCycling(false)
{
  if (!doBDTCycling) numberOfBDTs=1;
}

BDTTrainer::~BDTTrainer(){}

void BDTTrainer::Init(Looper *l){
	cout << Form("%-30s","BDTTrainer::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;

	outFile = TFile::Open(outfilename,"RECREATE");

	// MVA factory options
	TString factoryOptions = "";
	factoryOptions += "!V:";
	factoryOptions += "!Silent:";
	factoryOptions += "Color:";
	factoryOptions += "DrawProgressBar:";
	//factoryOptions += "Transformations=G,D:";
	factoryOptions += "AnalysisType=Classification";

	// make factories
	for (int b=0; b<numberOfBDTs; b++){
		factoryContainer.push_back(new Factory(Form("%sFactory%d",name.Data(),b),outFile,factoryOptions));
	}

	// add variables
	// PT
	varNames.push_back("ln_B_s0_PT");
	varNames.push_back("ln_Kst_PT");
	varNames.push_back("ln_Kstb_PT");
  varNames.push_back("ln_max_track_PT");
  varNames.push_back("ln_min_track_PT");
	//varNames.push_back("ln_Kplus_PT");
	//varNames.push_back("ln_Kminus_PT");
	//varNames.push_back("ln_Piplus_PT");
	//varNames.push_back("ln_Piminus_PT");

	// eta
	varNames.push_back("B_s0_eta");
	varNames.push_back("Kst_eta");
	varNames.push_back("Kstb_eta");
	varNames.push_back("max_track_eta");
  varNames.push_back("min_track_eta");
  //varNames.push_back("Kplus_eta");
	//varNames.push_back("Kminus_eta");
	//varNames.push_back("Piplus_eta");
	//varNames.push_back("Piminus_eta");

	// DIRA and vertex
	varNames.push_back("B_s0_ARCCOS_DIRA_OWNPV");
	varNames.push_back("B_s0_ENDVERTEX_CHI2");
	//varNames.push_back("Kst_ARCCOR_DIRA_OWNPV");
	//varNames.push_back("Kstb_ARCCOS_DIRA_OWNPV");

	// Max track chi2
	varNames.push_back("max_track_CHI2");

	// PID
	//varNames.push_back("min_K_DeltaProbKPi");
  //varNames.push_back("max_Pi_DeltaProbKPi");
  //varNames.push_back("Kplus_PID_DeltaProbKPi");
	//varNames.push_back("Kminus_PID_DeltaProbKPi");
	//varNames.push_back("Piplus_PID_DeltaProbKPi");
	//varNames.push_back("Piminus_PID_DeltaProbKPi");

	// add variables to factories and inialise map
	for (vector<TString>::iterator var=varNames.begin(); var!=varNames.end(); var++){
		for (int b=0; b<numberOfBDTs; b++){
			factoryContainer[b]->AddVariable(*var);
		}
		varMap.insert(make_pair(*var,-9999999.));
	}

}

void BDTTrainer::Term(Looper *l){

	for (int b=0; b<numberOfBDTs; b++) {

		cout << Form("%-30s","BDTTrainer::Term()") << " " << "Preparing training and test trees" << endl;
		factoryContainer[b]->PrepareTrainingAndTestTree("","!V");

		// TMVA methods here
		cout << Form("%-30s","BDTTrainer::Term()") << " " << "Booking TMVA methods" << endl;
		factoryContainer[b]->BookMethod( Types::kBDT, Form("BDT%d",b) , "!H:!V:NTrees=200:BoostType=AdaBoost:DoPreselection:UseBaggedBoost:nCuts=-1:MinNodeSize=1:MaxDepth=3:NegWeightTreatment=IgnoreNegWeightsInTraining" );

		// Train, Test and Evaluate
		cout << Form("%-30s","BDTTrainer::Term()") << " " << "Train, test and evaluate TMVA methods" << endl;
		factoryContainer[b]->TrainAllMethods();
		factoryContainer[b]->TestAllMethods();
		factoryContainer[b]->EvaluateAllMethods();
	}

	outFile->Close();

	cout << Form("%-30s","BDTTrainer::Term()") << " " << "Training output written to: " << outFile->GetName() << endl;
  delete outFile;

	cout << Form("%-30s","BDTTrainer::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool BDTTrainer::AnalyseEvent(Looper *l){

	// PT
	varMap["ln_B_s0_PT"]   		  = TMath::Log(*l->B_s0_PT);
	varMap["ln_Kst_PT"]         = TMath::Log(*l->Kst_PT);
	varMap["ln_Kstb_PT"]        = TMath::Log(*l->Kstb_PT);
  varMap["ln_max_track_PT"]   = TMath::Log( TMath::Max( TMath::Max(*l->Kplus_PT, *l->Kminus_PT), TMath::Max(*l->Piplus_PT, *l->Piminus_PT) ) );
  varMap["ln_min_track_PT"]   = TMath::Log( TMath::Min( TMath::Min(*l->Kplus_PT, *l->Kminus_PT), TMath::Min(*l->Piplus_PT, *l->Piminus_PT) ) );
	//varMap["ln_Kplus_PT"]       = TMath::Log(*l->Kplus_PT);
	//varMap["ln_Kminus_PT"]      = TMath::Log(*l->Kminus_PT);
	//varMap["ln_Piplus_PT"]      = TMath::Log(*l->Piplus_PT);
	//varMap["ln_Piminus_PT"]     = TMath::Log(*l->Piminus_PT);

	// eta
	varMap["B_s0_eta"] 					= TMath::Abs(*l->B_s0_ETA);
	varMap["Kst_eta"]           = TMath::Abs(*l->Kst_ETA);
	varMap["Kstb_eta"]          = TMath::Abs(*l->Kstb_ETA);
  varMap["max_track_eta"]     = TMath::Max( TMath::Max(TMath::Abs(*l->Kplus_ETA), TMath::Abs(*l->Kminus_ETA)), TMath::Max(TMath::Abs(*l->Piplus_ETA), TMath::Abs(*l->Piminus_ETA)) );
  varMap["min_track_eta"]     = TMath::Min( TMath::Min(TMath::Abs(*l->Kplus_ETA), TMath::Abs(*l->Kminus_ETA)), TMath::Min(TMath::Abs(*l->Piplus_ETA), TMath::Abs(*l->Piminus_ETA)) );

	// DIRA and vertex
	varMap["B_s0_ARCCOS_DIRA_OWNPV"] 		= TMath::ACos(*l->B_s0_DIRA_OWNPV);
	varMap["B_s0_ENDVERTEX_CHI2"]       = *l->B_s0_ENDVERTEX_CHI2;
	//varMap["Kst_DIRA_OWNPV"] 			= *l->Kst_DIRA_OWNPV;
	//varMap["Kstb_DIRA_OWNPV"] 		= *l->Kstb_DIRA_OWNPV;

	double kst_max_track_chi2 = TMath::Max(*l->Kplus_TRACK_CHI2NDOF,*l->Piminus_TRACK_CHI2NDOF);
	double kstb_max_track_chi2 = TMath::Max(*l->Piplus_TRACK_CHI2NDOF,*l->Kminus_TRACK_CHI2NDOF);
	double max_track_chi2 = TMath::Max(kst_max_track_chi2,kstb_max_track_chi2);

	// Max track chi2
	varMap["max_track_CHI2"] = max_track_chi2;

	// PID
	/*
  if ( l->itype < 0 ) {
    //varMap["min_K_DeltaProbKPi"]     = TMath::Min( (*l->Kplus_ProbNNkcorr - *l->Kplus_ProbNNpicorr) , (*l->Kminus_ProbNNkcorr - *l->Kminus_ProbNNpicorr) );
    //varMap["max_Pi_DeltaProbKPi"]    = TMath::Max( (*l->Piplus_ProbNNkcorr - *l->Piplus_ProbNNpicorr) , (*l->Piminus_ProbNNkcorr - *l->Piminus_ProbNNpicorr) );
    varMap["Kplus_PID_DeltaProbKPi"]   = *l->Kplus_ProbNNkcorr - *l->Kplus_ProbNNpicorr;
    varMap["Kminus_PID_DeltaProbKPi"]  = *l->Kplus_ProbNNkcorr - *l->Kplus_ProbNNpicorr;
    varMap["Piplus_PID_DeltaProbKPi"]  = *l->Kplus_ProbNNkcorr - *l->Kplus_ProbNNpicorr;
    varMap["Piminus_PID_DeltaProbKPi"] = *l->Kplus_ProbNNkcorr - *l->Kplus_ProbNNpicorr;
  }
  else {
    //varMap["min_K_DeltaProbKPi"]     = TMath::Min( (*l->Kplus_ProbNNk - *l->Kplus_ProbNNpi) , (*l->Kminus_ProbNNk - *l->Kminus_ProbNNpi) );
    //varMap["max_Pi_DeltaProbKPi"]    = TMath::Max( (*l->Piplus_ProbNNk - *l->Piplus_ProbNNpi) , (*l->Piminus_ProbNNk - *l->Piminus_ProbNNpi) );
    varMap["Kplus_PID_DeltaProbKPi"]   = *l->Kplus_ProbNNk - *l->Kplus_ProbNNpi;
    varMap["Kminus_PID_DeltaProbKPi"]  = *l->Kplus_ProbNNk - *l->Kplus_ProbNNpi;
    varMap["Piplus_PID_DeltaProbKPi"]  = *l->Kplus_ProbNNk - *l->Kplus_ProbNNpi;
    varMap["Piminus_PID_DeltaProbKPi"] = *l->Kplus_ProbNNk - *l->Kplus_ProbNNpi;
  }
	*/

	// now put the variable values in a nice vector (in the right order!!)
	assert(varNames.size()==varMap.size());
	vector<double> values;
	for (vector<TString>::iterator it=varNames.begin(); it!=varNames.end(); it++){
		values.push_back(varMap[*it]);
	}

	int lastDigit = *l->eventNumber%10;
	int relBDT = int(floor(lastDigit/2))%numberOfBDTs;

	// MC only
	if ( l->itype < 0 ) {

    // now put event in relevant BDT
    if (doBDTCycling) {
      for (int b=0; b<numberOfBDTs; b++){
        if (b==relBDT){
          factoryContainer[b]->AddSignalTestEvent(values);
        }
        else {
          factoryContainer[b]->AddSignalTrainingEvent(values);
        }
      }
    }
    else {
      if (lastDigit%2==0) {
        factoryContainer[0]->AddSignalTrainingEvent(values);
      }
      else {
        factoryContainer[0]->AddSignalTestEvent(values);
      }
    }

		// step up counter
		evCount++;
	}

	// Data only
	if ( l->itype > 0 ) {

		// cut out signal region
		if (*l->B_s0_MM > 5250 && *l->B_s0_MM < 5450) return false;
		//if (*l->B_s0_MM > 5250) return false;

		// now put event in relevant BDT
    if (doBDTCycling) {
      for (int b=0; b<numberOfBDTs; b++){
        if (b==relBDT){
          factoryContainer[b]->AddBackgroundTestEvent(values);
        }
        else {
          factoryContainer[b]->AddBackgroundTrainingEvent(values);
        }
      }
    }
    else {
      if (lastDigit%2==0) {
        factoryContainer[0]->AddBackgroundTrainingEvent(values);
      }
      else {
        factoryContainer[0]->AddBackgroundTestEvent(values);
      }
    }

		// step up counter
		evCount++;
	}

	// for reading BDT
	//float bdtvalue = bdtReader[evCount%numberOfBDTs]->EvaluateMVA();

	return true;
}
