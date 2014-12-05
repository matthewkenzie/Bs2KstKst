#ifndef SelectionFit_h
#define SelectionFit_h

#include "../interface/FitterBase.h"

class SelectionFit : public FitterBase {

  public:

    SelectionFit(TString wsname="w");
    ~SelectionFit();

    void addObsVars();
    void addCuts();
    void addDatasets();
    void constructPdfs();

    void run();

  private:

    void makeDataPlot();

};
#endif
