/////////////////////////////////////
//                                 //
// BDTTrainerNoPIDSplitYearsMassRes.h            			   //
// Author: Matthew Kenzie          //
// Will train BDTs   					     //
//                                 //
/////////////////////////////////////

#include "TMath.h"
#include "TLorentzVector.h"

#include "../interface/BDTTrainerNoPIDSplitYearsMassRes.h"

using namespace std;
using namespace TMVA;

BDTTrainerNoPIDSplitYearsMassRes::BDTTrainerNoPIDSplitYearsMassRes(TString _name):
	BaseAnalyser(_name),
	outfilename("MVATrainingNoPIDSplitYearsMassResOutput.root"),
	evCount(0),
	numberOfBDTs(4),
  doBDTCycling(true)
{
  if (!doBDTCycling) numberOfBDTs=1;
}

BDTTrainerNoPIDSplitYearsMassRes::~BDTTrainerNoPIDSplitYearsMassRes(){}

void BDTTrainerNoPIDSplitYearsMassRes::Init(Looper *l){
	cout << Form("%-30s","BDTTrainerNoPIDSplitYearsMassRes::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;

  reweightFile = TFile::Open("input/track_chi2_weights.root");
  reweightHist = (TH1F*)reweightFile->Get("track_chi2_weights");

	outFile = TFile::Open(outfilename,"RECREATE");

	// MVA factory options
	TString factoryOptions = "";
	factoryOptions += "!V:";
	factoryOptions += "!Silent:";
	factoryOptions += "Color:";
	factoryOptions += "DrawProgressBar:";
	factoryOptions += "Transformations=I;D;P;G,D:";
	factoryOptions += "AnalysisType=Classification";

	// make factories
  factoryContainer["2011"] = vector<TMVA::Factory*>();
  factoryContainer["2012"] = vector<TMVA::Factory*>();
	for (int b=0; b<numberOfBDTs; b++){
		factoryContainer["2011"].push_back(new Factory(Form("%sFactory",name.Data()),outFile,factoryOptions));
		factoryContainer["2012"].push_back(new Factory(Form("%sFactory",name.Data()),outFile,factoryOptions));
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

  // Resolution
  varNames.push_back("B_s0_MMERRoMM");

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

void BDTTrainerNoPIDSplitYearsMassRes::Term(Looper *l){

  reweightFile->Close();

	for (int b=0; b<numberOfBDTs; b++) {

		cout << Form("%-30s","BDTTrainerNoPIDSplitYearsMassRes::Term()") << " " << "Preparing training and test trees" << endl;
		factoryContainer["2011"][b]->PrepareTrainingAndTestTree(TCut(""),"!V:NormMode=None");
		factoryContainer["2012"][b]->PrepareTrainingAndTestTree(TCut(""),"!V:NormMode=None");

		// TMVA methods here
		cout << Form("%-30s","BDTTrainerNoPIDSplitYearsMassRes::Term()") << " " << "Booking TMVA methods" << endl;
		factoryContainer["2011"][b]->BookMethod( Types::kBDT, Form("2011_BDT_%d",b) , "!H:!V:VarTransform=D,G:NTrees=400:BoostType=AdaBoost:UseBaggedBoost:AdaBoostBeta=0.5:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=-1:MinNodeSize=5:MaxDepth=3:NegWeightTreatment=IgnoreNegWeightsInTraining" );
		factoryContainer["2012"][b]->BookMethod( Types::kBDT, Form("2012_BDT_%d",b) , "!H:!V:VarTransform=D,G:NTrees=400:BoostType=AdaBoost:UseBaggedBoost:AdaBoostBeta=0.5:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=-1:MinNodeSize=5:MaxDepth=3:NegWeightTreatment=IgnoreNegWeightsInTraining" );

		// Train, Test and Evaluate
		cout << Form("%-30s","BDTTrainerNoPIDSplitYearsMassRes::Term()") << " " << "Train, test and evaluate TMVA methods" << endl;
		factoryContainer["2011"][b]->TrainAllMethods();
		factoryContainer["2011"][b]->TestAllMethods();
		factoryContainer["2011"][b]->EvaluateAllMethods();
		factoryContainer["2012"][b]->TrainAllMethods();
		factoryContainer["2012"][b]->TestAllMethods();
		factoryContainer["2012"][b]->EvaluateAllMethods();
	}

	outFile->Close();

	cout << Form("%-30s","BDTTrainerNoPIDSplitYearsMassRes::Term()") << " " << "Training output written to: " << outFile->GetName() << endl;
  delete outFile;

	cout << Form("%-30s","BDTTrainerNoPIDSplitYearsMassRes::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool BDTTrainerNoPIDSplitYearsMassRes::AnalyseEvent(Looper *l){

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

  varMap["B_s0_MMERRoMM"] = *l->B_s0_MMERR / *l->B_s0_MM ;

  // weight MC
  *l->weight = 1.;
  //if ( l->itype < 0 ){
    //*l->weight *= reweightHist->GetBinContent(reweightHist->FindBin(*l->max_track_chi2)); // for max track chi2
  //}

	// now put the variable values in a nice vector (in the right order!!)
	assert(varNames.size()==varMap.size());
	vector<double> values;
	for (vector<TString>::iterator it=varNames.begin(); it!=varNames.end(); it++){
		values.push_back(varMap[*it]);
	}

  // find the relevant BDT
	int lastDigits = *l->eventNumber%100;
	int relBDT = lastDigits%numberOfBDTs;
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

    // weight signal MC in training by 1/resolution
    //*l->weight *= *l->B_s0_MM / *l->B_s0_MMERR; // tell BDT resolution is inversely proportional to S/B
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
      if (lastDigits%2==0) {
        factoryContainer[year][0]->AddSignalTrainingEvent(values, *l->weight);
      }
      else {
        factoryContainer[year][0]->AddSignalTestEvent(values, *l->weight);
      }
    }

		// step up counter
		evCount++;
	}

	// Data only
	if ( l->itype > 0 ) {

		// cut out signal region
		if (*l->B_s0_MM < 5550) return false;

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
      if (lastDigits%2==0) {
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

