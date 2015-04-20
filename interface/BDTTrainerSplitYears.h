/////////////////////////////////////
//                                 //
// BDTTrainerSplitYears.h            			   //
// Author: Matthew Kenzie          //
// Will train BDTs   					     //
//                                 //
/////////////////////////////////////

#ifndef BDTTrainerSplitYears_h
#define BDTTrainerSplitYears_h

#include "TH1F.h"
#include "TString.h"
#include "TMVA/Factory.h"

#include "../interface/BaseAnalyser.h"
#include "../interface/Looper.h"

class BDTTrainerSplitYears : public BaseAnalyser {

	public:

		BDTTrainerSplitYears(TString _name);
		~BDTTrainerSplitYears();

		virtual void Init(Looper *l);
		virtual void Term(Looper *l);
		virtual bool AnalyseEvent(Looper *l);

	private:

		TString outfilename;
		int evCount;
		int numberOfBDTs;
    bool doBDTCycling;
    std::map<TString, std::vector<TMVA::Factory*> > factoryContainer;
		TFile *outFile;

		std::vector<TString> varNames;
		std::map<TString,double> varMap;

    TFile *reweightFile;
    TH1F *reweightHist;

};

#endif

