/////////////////////////////////////
//                                 //
// BasicVariablesPlotter.h               //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will run the analysis chain     //
//                                 //
/////////////////////////////////////

#ifndef BasicVariablesPlotter_h
#define BasicVariablesPlotter_h

#include <iostream>
#include <vector>
#include <map>

#include "TString.h"
#include "TH1F.h"

#include "../interface/BaseAnalyser.h"
#include "../interface/Looper.h"
#include "../interface/PlotterUtils.h"

class BasicVariablesPlotter : public BaseAnalyser {

	public:

		BasicVariablesPlotter(TString _name);
		~BasicVariablesPlotter();

		virtual void Init(Looper *l);
		virtual void Term(Looper *l);
		virtual bool AnalyseEvent(Looper *l);

  private:

    void addHist(TString name, int nbins, float xlow, float xhigh);
    void defineHists();
    void fillHistograms(Looper *l);
    void saveHistograms(TString outFileName);
    void deleteHistograms();
    void drawHistograms();
    std::vector<HistContainer> histList;
    std::map<int,std::map<TString,TH1F*> > histMap;

};

#endif
