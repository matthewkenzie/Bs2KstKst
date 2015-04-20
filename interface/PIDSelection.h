/////////////////////////////////////
//                                 //
// PIDSelection.h               //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will run the analysis chain     //
//                                 //
/////////////////////////////////////

#ifndef PIDSelection_h
#define PIDSelection_h

#include "TString.h"
#include "../interface/BaseAnalyser.h"
#include "../interface/Looper.h"

class PIDSelection : public BaseAnalyser {

	public:

		PIDSelection(TString _name);
		~PIDSelection();

		virtual void Init(Looper *l);
		virtual void Term(Looper *l);
		virtual bool AnalyseEvent(Looper *l);

};

#endif
