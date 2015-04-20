#ifndef InvariantMassPlot_h
#define InvariantMassPlot_h

#include "../interface/FitterBase.h"

class InvariantMassPlot : public FitterBase {

  public:

    InvariantMassPlot(TString wsname="w", TString name="InvariantMassPlot", bool verbose=false, bool debug=false);
    ~InvariantMassPlot();

    void addObsVars() {}
    void addCuts() {}
    void addDatasets() {}
    void constructPdfs() {}
    void save(TString fname) {}

    void makeDataPlot();

    void run();

  private:

};
#endif


