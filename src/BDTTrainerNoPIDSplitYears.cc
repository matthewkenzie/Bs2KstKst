/////////////////////////////////////
//                                 //
// BDTTrainerNoPIDSplitYears.h            			   //
// Author: Matthew Kenzie          //
// Will train BDTs   					     //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"

#include "../interface/BDTTrainerNoPIDSplitYears.h"

using namespace std;
using namespace TMVA;

BDTTrainerNoPIDSplitYears::BDTTrainerNoPIDSplitYears(TString _name):
	BaseAnalyser(_name),
	outfilename("MVATrainingNoPIDSplitYearsOutput.root"),
	evCount(0),
	numberOfBDTs(2),
  doBDTCycling(true)
{
  if (!doBDTCycling) numberOfBDTs=1;
}

BDTTrainerNoPIDSplitYears::~BDTTrainerNoPIDSplitYears(){}

void BDTTrainerNoPIDSplitYears::Init(Looper *l){
	cout << Form("%-30s","BDTTrainerNoPIDSplitYears::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;

  reweightFile = TFile::Open("input/track_chi2_weights.root");
  reweightHist = (TH1F*)reweightFile->Get("track_chi2_weights");

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
  factoryContainer["2011"] = vector<TMVA::Factory*>();
  factoryContainer["2012"] = vector<TMVA::Factory*>();
	for (int b=0; b<numberOfBDTs; b++){
		factoryContainer["2011"].push_back(new Factory(Form("%sFactory2011%d",name.Data(),b),outFile,factoryOptions));
		factoryContainer["2012"].push_back(new Factory(Form("%sFactory2012%d",name.Data(),b),outFile,factoryOptions));
	}

	// add variables
	// PT
	varNames.push_back("ln_B_s0_PT");
	varNames.push_back("ln_Kst_PT");
	varNames.push_back("ln_Kstb_PT");
  varNames.push_back("ln_max_track_PT");
  varNames.push_back("ln_min_track_PT");

	// eta
	varNames.push_back("B_s0_eta");
	varNames.push_back("Kst_eta");
	varNames.push_back("Kstb_eta");
	varNames.push_back("max_track_eta");
  varNames.push_back("min_track_eta");

	// DIRA and vertex
	varNames.push_back("B_s0_ARCCOS_DIRA_OWNPV");
	varNames.push_back("B_s0_ENDVERTEX_CHI2");

	// Max track chi2
	varNames.push_back("max_track_CHI2");

	// add variables to factories and inialise map
	for (vector<TString>::iterator var=varNames.begin(); var!=varNames.end(); var++){
		for (int b=0; b<numberOfBDTs; b++){
			factoryContainer["2011"][b]->AddVariable(*var);
			factoryContainer["2012"][b]->AddVariable(*var);
		}
		varMap.insert(make_pair(*var,-9999999.));
	}

}

void BDTTrainerNoPIDSplitYears::Term(Looper *l){

  reweightFile->Close();

	for (int b=0; b<numberOfBDTs; b++) {

		cout << Form("%-30s","BDTTrainerNoPIDSplitYears::Term()") << " " << "Preparing training and test trees" << endl;
		factoryContainer["2011"][b]->PrepareTrainingAndTestTree("","!V");
		factoryContainer["2012"][b]->PrepareTrainingAndTestTree("","!V");

		// TMVA methods here
		cout << Form("%-30s","BDTTrainerNoPIDSplitYears::Term()") << " " << "Booking TMVA methods" << endl;
		factoryContainer["2011"][b]->BookMethod( Types::kBDT, Form("2011_BDT_%d",b) , "!H:!V:VarTransform=D,G:NTrees=300:BoostType=AdaBoost:UseBaggedBoost:nCuts=-1:MinNodeSize=5:MaxDepth=3:NegWeightTreatment=IgnoreNegWeightsInTraining" );
		factoryContainer["2012"][b]->BookMethod( Types::kBDT, Form("2012_BDT_%d",b) , "!H:!V:VarTransform=D,G:NTrees=300:BoostType=AdaBoost:UseBaggedBoost:nCuts=-1:MinNodeSize=5:MaxDepth=3:NegWeightTreatment=IgnoreNegWeightsInTraining" );

		// Train, Test and Evaluate
		cout << Form("%-30s","BDTTrainerNoPIDSplitYears::Term()") << " " << "Train, test and evaluate TMVA methods" << endl;
		factoryContainer["2011"][b]->TrainAllMethods();
		factoryContainer["2011"][b]->TestAllMethods();
		factoryContainer["2011"][b]->EvaluateAllMethods();
		factoryContainer["2012"][b]->TrainAllMethods();
		factoryContainer["2012"][b]->TestAllMethods();
		factoryContainer["2012"][b]->EvaluateAllMethods();
	}

	outFile->Close();

	cout << Form("%-30s","BDTTrainerNoPIDSplitYears::Term()") << " " << "Training output written to: " << outFile->GetName() << endl;
  delete outFile;

	cout << Form("%-30s","BDTTrainerNoPIDSplitYears::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool BDTTrainerNoPIDSplitYears::AnalyseEvent(Looper *l){

  // PT
	varMap["ln_B_s0_PT"]   		  = TMath::Log(*l->B_s0_PT);
	varMap["ln_Kst_PT"]         = TMath::Log(*l->Kst_PT);
	varMap["ln_Kstb_PT"]        = TMath::Log(*l->Kstb_PT);
  varMap["ln_max_track_PT"]   = TMath::Log( TMath::Max( TMath::Max(*l->Kplus_PT, *l->Kminus_PT), TMath::Max(*l->Piplus_PT, *l->Piminus_PT) ) );
  varMap["ln_min_track_PT"]   = TMath::Log( TMath::Min( TMath::Min(*l->Kplus_PT, *l->Kminus_PT), TMath::Min(*l->Piplus_PT, *l->Piminus_PT) ) );

	// eta
	varMap["B_s0_eta"] 					= TMath::Abs(*l->B_s0_ETA);
	varMap["Kst_eta"]           = TMath::Abs(*l->Kst_ETA);
	varMap["Kstb_eta"]          = TMath::Abs(*l->Kstb_ETA);
  varMap["max_track_eta"]     = TMath::Max( TMath::Max(TMath::Abs(*l->Kplus_ETA), TMath::Abs(*l->Kminus_ETA)), TMath::Max(TMath::Abs(*l->Piplus_ETA), TMath::Abs(*l->Piminus_ETA)) );
  varMap["min_track_eta"]     = TMath::Min( TMath::Min(TMath::Abs(*l->Kplus_ETA), TMath::Abs(*l->Kminus_ETA)), TMath::Min(TMath::Abs(*l->Piplus_ETA), TMath::Abs(*l->Piminus_ETA)) );

	// DIRA and vertex
	varMap["B_s0_ARCCOS_DIRA_OWNPV"] 		= TMath::ACos(*l->B_s0_DIRA_OWNPV);
	varMap["B_s0_ENDVERTEX_CHI2"]       = *l->B_s0_ENDVERTEX_CHI2;

	// Max track chi2
	varMap["max_track_CHI2"] = *l->max_track_chi2;

  // weight
  *l->weight = 1.;
  if ( l->itype < 0 ){
    *l->weight *= reweightHist->GetBinContent(reweightHist->FindBin(*l->max_track_chi2));
  }

	// now put the variable values in a nice vector (in the right order!!)
	assert(varNames.size()==varMap.size());
	vector<double> values;
	for (vector<TString>::iterator it=varNames.begin(); it!=varNames.end(); it++){
		values.push_back(varMap[*it]);
	}

  // find the relevant BDT
	int lastDigit = *l->eventNumber%10;
	int relBDT = int(floor(lastDigit/2))%numberOfBDTs;
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

	// MC only
	if ( l->itype < 0 ) {

    // now put event in relevant BDT
    if (doBDTCycling) {
      for (int b=0; b<numberOfBDTs; b++){
        if (b==relBDT){
          factoryContainer[year][b]->AddSignalTestEvent(values, *l->weight);
        }
        else {
          factoryContainer[year][b]->AddSignalTrainingEvent(values, *l->weight);
        }
      }
    }
    else {
      if (lastDigit%2==0) {
        factoryContainer[year][0]->AddSignalTrainingEvent(values);
      }
      else {
        factoryContainer[year][0]->AddSignalTestEvent(values);
      }
    }

		// step up counter
		evCount++;
	}

	// Data only
	if ( l->itype > 0 ) {

		// cut out signal region
		if (*l->B_s0_MM < 5600) return false;

		// now put event in relevant BDT
    if (doBDTCycling) {
      for (int b=0; b<numberOfBDTs; b++){
        if (b==relBDT){
          factoryContainer[year][b]->AddBackgroundTestEvent(values);
        }
        else {
          factoryContainer[year][b]->AddBackgroundTrainingEvent(values);
        }
      }
    }
    else {
      if (lastDigit%2==0) {
        factoryContainer[year][0]->AddBackgroundTrainingEvent(values);
      }
      else {
        factoryContainer[year][0]->AddBackgroundTestEvent(values);
      }
    }

		// step up counter
		evCount++;
	}

	// for reading BDT
	//float bdtvalue = bdtReader[evCount%numberOfBDTs]->EvaluateMVA();

	return true;
}

