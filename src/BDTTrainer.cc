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
	numberOfBDTs(5)
{}

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
	factoryOptions += "Transformations=G,D:";
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
	varNames.push_back("ln_Kplus_PT");
	varNames.push_back("ln_Kminus_PT");
	varNames.push_back("ln_Piplus_PT");
	varNames.push_back("ln_Piminus_PT");

	// eta
	varNames.push_back("B_s0_eta");
	varNames.push_back("Kst_eta");
	varNames.push_back("Kstb_eta");
	varNames.push_back("Kplus_eta");
	varNames.push_back("Kminus_eta");
	varNames.push_back("Piplus_eta");
	varNames.push_back("Piminus_eta");

	// DIRA and vertex
	varNames.push_back("B_s0_DIRA_OWNPV");
	varNames.push_back("B_s0_ENDVERTEX_CHI2");
	varNames.push_back("Kst_DIRA_OWNPV");
	varNames.push_back("Kstb_DIRA_OWNPV");

	// Max track chi2
	varNames.push_back("max_track_CHI2");

	// PID
	varNames.push_back("Kplus_PID_DeltaProbKPi");
	varNames.push_back("Kminus_PID_DeltaProbKPi");
	varNames.push_back("Piplus_PID_DeltaProbKPi");
	varNames.push_back("Piminus_PID_DeltaProbKPi");

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

		factoryContainer[b]->PrepareTrainingAndTestTree("","!V");

		// TMVA methods here
		factoryContainer[b]->BookMethod( Types::kBDT, Form("BDT%d",b) , "!H:!V:NTrees=500:BoostType=AdaBoost:nCuts=-1:MaxDepth=3:NegWeightTreatment=IgnoreNegWeightsInTraining" );

		// Train, Test and Evaluate
		factoryContainer[b]->TrainAllMethods();
		factoryContainer[b]->TestAllMethods();
		factoryContainer[b]->EvaluateAllMethods();
	}

	outFile->Close();

	cout << Form("%-30s","BDTTrainer::Term()") << " " << "Training output written to: " << outFile->GetName() << endl;

	cout << Form("%-30s","BDTTrainer::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool BDTTrainer::AnalyseEvent(Looper *l){

	// PT
	varMap["ln_B_s0_PT"]   		  = TMath::Log(*l->B_s0_PT);
	varMap["ln_Kst_PT"]         = TMath::Log(*l->Kst_PT);
	varMap["ln_Kstb_PT"]        = TMath::Log(*l->Kstb_PT);
	varMap["ln_Kplus_PT"]       = TMath::Log(*l->Kplus_PT);
	varMap["ln_Kminus_PT"]      = TMath::Log(*l->Kminus_PT);
	varMap["ln_Piplus_PT"]      = TMath::Log(*l->Piplus_PT);
	varMap["ln_Piminus_PT"]     = TMath::Log(*l->Piminus_PT);

	TLorentzVector B_s0_p4(*l->B_s0_PX,*l->B_s0_PY,*l->B_s0_PZ,*l->B_s0_PE);
	TLorentzVector Kst_p4(*l->Kst_PX,*l->Kst_PY,*l->Kst_PZ,*l->Kst_PE);
	TLorentzVector Kstb_p4(*l->Kstb_PX,*l->Kstb_PY,*l->Kstb_PZ,*l->Kstb_PE);
	TLorentzVector Kplus_p4(*l->Kplus_PX,*l->Kplus_PY,*l->Kplus_PZ,*l->Kplus_PE);
	TLorentzVector Kminus_p4(*l->Kminus_PX,*l->Kminus_PY,*l->Kminus_PZ,*l->Kminus_PE);
	TLorentzVector Piplus_p4(*l->Piplus_PX,*l->Piplus_PY,*l->Piplus_PZ,*l->Piplus_PE);
	TLorentzVector Piminus_p4(*l->Piminus_PX,*l->Piminus_PY,*l->Piminus_PZ,*l->Piminus_PE);

	// eta
	varMap["B_s0_eta"] 					= B_s0_p4.Eta();
	varMap["Kst_eta"]           = Kst_p4.Eta();
	varMap["Kstb_eta"]          = Kstb_p4.Eta();
	varMap["Kplus_eta"]         = Kplus_p4.Eta();
	varMap["Kminus_eta"]        = Kminus_p4.Eta();
	varMap["Piplus_eta"]        = Piplus_p4.Eta();
	varMap["Piminus_eta"]       = Piminus_p4.Eta();

	// DIRA and vertex
	varMap["B_s0_DIRA_OWNPV"] 		= *l->B_s0_DIRA_OWNPV;
	varMap["B_s0_ENDVERTEX_CHI2"] = *l->B_s0_ENDVERTEX_CHI2;
	varMap["Kst_DIRA_OWNPV"] 			= *l->Kst_DIRA_OWNPV;
	varMap["Kstb_DIRA_OWNPV"] 		= *l->Kstb_DIRA_OWNPV;

	double kst_max_track_chi2 = TMath::Max(*l->Kplus_TRACK_CHI2NDOF,*l->Piminus_TRACK_CHI2NDOF);
	double kstb_max_track_chi2 = TMath::Max(*l->Piplus_TRACK_CHI2NDOF,*l->Kminus_TRACK_CHI2NDOF);
	double max_track_chi2 = TMath::Max(kst_max_track_chi2,kstb_max_track_chi2);

	// Max track chi2
	varMap["max_track_CHI2"] = max_track_chi2;

	// PID
	//varMap["Kplus_PID_DeltaProbKPi"]   = *l->Kplus_ProbNNKcorr - *l->Kplus_ProbNNpicorr;
	//varMap["Kminus_PID_DeltaProbKPi"]  = *l->Kplus_ProbNNKcorr - *l->Kplus_ProbNNpicorr;
	//varMap["Piplus_PID_DeltaProbKPi"]  = *l->Kplus_ProbNNKcorr - *l->Kplus_ProbNNpicorr;
	//varMap["Piminus_PID_DeltaProbKPi"] = *l->Kplus_ProbNNKcorr - *l->Kplus_ProbNNpicorr;
	varMap["Kplus_PID_DeltaProbKPi"]   = *l->Kplus_ProbNNk - *l->Kplus_ProbNNpi;
	varMap["Kminus_PID_DeltaProbKPi"]  = *l->Kplus_ProbNNk - *l->Kplus_ProbNNpi;
	varMap["Piplus_PID_DeltaProbKPi"]  = *l->Kplus_ProbNNk - *l->Kplus_ProbNNpi;
	varMap["Piminus_PID_DeltaProbKPi"] = *l->Kplus_ProbNNk - *l->Kplus_ProbNNpi;

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
		for (int b=0; b<numberOfBDTs; b++){
			if (b==relBDT){
				factoryContainer[b]->AddSignalTestEvent(values);
			}
			else {
				factoryContainer[b]->AddSignalTrainingEvent(values);
			}
		}

		// step up counter
		evCount++;
	}

	// Data only
	if ( l->itype > 0 ) {

		// cut out signal region
		if (*l->B_s0_MM < 5250 || *l->B_s0_MM > 5450) return false;

		// now put event in relevant BDT
		for (int b=0; b<numberOfBDTs; b++){
			if (b==relBDT){
				factoryContainer[b]->AddBackgroundTestEvent(values);
			}
			else {
				factoryContainer[b]->AddBackgroundTrainingEvent(values);
			}
		}

		// step up counter
		evCount++;
	}

	// for reading BDT
	//float bdtvalue = bdtReader[evCount%numberOfBDTs]->EvaluateMVA();

	return true;
}
