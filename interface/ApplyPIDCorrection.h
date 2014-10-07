/////////////////////////////////////
//                                 //
// ApplyPIDCorrection.h               //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will run the analysis chain     //
//                                 //
/////////////////////////////////////

#ifndef ApplyPIDCorrection_h
#define ApplyPIDCorrection_h

#include "TString.h"
#include "TH1D.h"
#include "THnSparse.h"
#include "TArrayD.h"
#include "../interface/BaseAnalyser.h"
#include "../interface/Looper.h"

class ApplyPIDCorrection : public BaseAnalyser {

	public:

		ApplyPIDCorrection(TString _name);
		~ApplyPIDCorrection();

		virtual void Init(Looper *l);
		virtual void Term(Looper *l);
		virtual bool AnalyseEvent(Looper *l);

	private:

		void loadHistograms();
		int getFileIndexFromType(int type);
		double getResampledPID(double P, double ETA, double nTracks, int fInd, TString part, TString pidVar, double originalPID);

		std::vector<TString> reweightVars;
		std::vector<TString> particles;
		std::vector<TString> pids;
		std::vector<TString> pidFiles;
		std::map<int,int> itypeToFileMap;
		std::map<int,std::map<TString,std::map<TString,TH1D*> > > reweightVarHists;
		std::map<int,std::map<TString,std::map<TString,TH1D*> > > pidVarHists;
		std::map<int,std::map<TString,THnSparseD*> > sparse;

};

#endif
