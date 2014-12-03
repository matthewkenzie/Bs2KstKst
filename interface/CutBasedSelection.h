/////////////////////////////////////
//                                 //
// CutBasedSelection.h               //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will run the analysis chain     //
//                                 //
/////////////////////////////////////

#ifndef CutBasedSelection_h
#define CutBasedSelection_h

#include "TString.h"
#include "../interface/BaseAnalyser.h"
#include "../interface/Looper.h"

class CutBasedSelection : public BaseAnalyser {

	public:

		CutBasedSelection(TString _name);
		~CutBasedSelection();

		virtual void Init(Looper *l);
		virtual void Term(Looper *l);
		virtual bool AnalyseEvent(Looper *l);

};

#endif
