#ifndef CutBasedFit_h
#define CutBasedFit_h

#include "../interface/FitterBase.h"

class CutBasedFit : public FitterBase {

  public:

    CutBasedFit(TString wsname="w");
    ~CutBasedFit();

    void addObsVars();
    void addCuts();
    void addDatasets();
    void constructPdfs();

    void run();

  private:

    void makeDataPlot();


};
#endif
