/////////////////////////////////////
//                                 //
// ApplyBDTAndPIDCuts.h            //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will run the analysis chain     //
//                                 //
/////////////////////////////////////

#ifndef ApplyBDTAndPIDCuts_h
#define ApplyBDTAndPIDCuts_h

#include "TString.h"
#include "../interface/BaseAnalyser.h"
#include "../interface/Looper.h"

class ApplyBDTAndPIDCuts : public BaseAnalyser {

	public:

		ApplyBDTAndPIDCuts(TString _name);
		~ApplyBDTAndPIDCuts();

		virtual void Init(Looper *l);
		virtual void Term(Looper *l);
		virtual bool AnalyseEvent(Looper *l);

};

#endif

