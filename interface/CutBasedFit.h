#ifndef CutBasedFit_h
#define CutBasedFit_h

#include "../interface/FitterBase.h"

class CutBasedFit : public FitterBase {

  public:

    CutBasedFit(TString wsname="w", bool verbose=false, bool debug=false);
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
