/////////////////////////////////////
//                                 //
// TriggerSelection.h               //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will run the analysis chain     //
//                                 //
/////////////////////////////////////

#ifndef TriggerSelection_h
#define TriggerSelection_h

#include "TString.h"
#include "../interface/BaseAnalyser.h"
#include "../interface/Looper.h"

class TriggerSelection : public BaseAnalyser {

	public:

		TriggerSelection(TString _name);
		~TriggerSelection();

		virtual void Init(Looper *l);
		virtual void Term(Looper *l);
		virtual bool AnalyseEvent(Looper *l);

};

#endif
