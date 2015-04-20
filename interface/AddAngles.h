/////////////////////////////////////
//                                 //
// AddAngles.h               //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will run the analysis chain     //
//                                 //
/////////////////////////////////////

#ifndef AddAngles_h
#define AddAngles_h

#include "TString.h"
#include "../interface/BaseAnalyser.h"
#include "../interface/Looper.h"

class AddAngles : public BaseAnalyser {

	public:

		AddAngles(TString _name);
		~AddAngles();

		virtual void Init(Looper *l);
		virtual void Term(Looper *l);
		virtual bool AnalyseEvent(Looper *l);

};

#endif

