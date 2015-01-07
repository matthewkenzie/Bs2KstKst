/////////////////////////////////////
//                                 //
// BDTReaderNoPID.h            			   //
// Author: Matthew Kenzie          //
// Will train BDTs   					     //
//                                 //
/////////////////////////////////////

#ifndef BDTReaderNoPID_h
#define BDTReaderNoPID_h

#include "TString.h"
#include "TMVA/Reader.h"

#include "../interface/BaseAnalyser.h"
#include "../interface/Looper.h"

class BDTReaderNoPID : public BaseAnalyser {

	public:

		BDTReaderNoPID(TString _name);
		~BDTReaderNoPID();

		virtual void Init(Looper *l);
		virtual void Term(Looper *l);
		virtual bool AnalyseEvent(Looper *l); // no implementation here

	private:

		int evCount;
		int numberOfBDTs;
		std::vector<TMVA::Reader*> readerContainer;
		TString weightsFile;
		TString methodName;

		// read vars
		float ln_B_s0_PT;
		float ln_Kst_PT;
    float ln_Kstb_PT;
    float ln_max_track_PT;
    float ln_min_track_PT;

    float B_s0_eta;
    float Kst_eta;
    float Kstb_eta;
    float max_track_eta;
    float min_track_eta;

    float B_s0_ARCCOS_DIRA_OWNPV;
    float B_s0_ENDVERTEX_CHI2;
    float max_track_CHI2;

};
#endif

