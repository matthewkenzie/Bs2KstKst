#ifndef FitterBase_h
#define FitterBase_h

#include <vector>

#include "TObject.h"
#include "TString.h"
#include "TCanvas.h"
#include "TApplication.h"

#include "RooWorkspace.h"
#include "RooHist.h"

#include "../interface/FitterUtils.h"

class FitterBase {

  public:

    FitterBase(TString wsname="w", bool _verbose=false, bool _debug=false);
    virtual ~FitterBase() = 0;

    void addObsVar(TString name, double min, double max);
    void addObsVar(TString name, TString title, TString unit, double min, double max);
    void setUnit(TString var, TString unit);
    void setBins(TString var, int bins);

    void addDataset(TString name, TString title, int itype);
    void addDataset(TString name, TString title, int itype1, int itype2);
    void addDataset(TString name, TString title, int itype1, int itype2, int itype3);
    void addDataset(TString name, TString title, int itype1, int itype2, int itype3, int itype4);

    void addCut(TString name, double low, double high);
    void addCut(TString name, float low, float high);
    void addCut(TString name, int low, int high);
    void addCut(TString name, bool val);

    void makeDatasets();
    void fillDatasets(TString fname, TString tname);

    void save(TString fname);
    void print(TString line, bool blank=false);

    void setVerbose(bool val=true){ verbose=val; }
    void setDebug(bool val=true){ debug=val; }

    RooWorkspace *w;

    // these should be implemented by the inherited fitter
    // can of course be implemened and do nothing
    virtual void addObsVars() = 0;
    virtual void addCuts() = 0;
    virtual void addDatasets() = 0;
    virtual void constructPdfs() = 0;

  protected:

    std::vector<DataSet> dataSets;
    std::vector<int> colors;
    std::vector<TObject*> saveObjsStore;
    std::vector<TCanvas*> canvs;

    void defineParamSet(TString pdf);
    void defineYieldSet(TString pdf_name);
    void saveSnapshot(TString name, TString pdf);
    void loadSnapshot(TString name);

		void fit(TString pdf, TString data);
    void freeze(TString pdf);

    void sfit(TString pdf, TString data);
    void sproject(TString data_name, TString var_name);

    TCanvas* createCanvas();

    void plot(TString var, TString data, TString pdf="");
    void plot(TString var, std::vector<PlotComponent> plotComps, TString fname);

    void splot(TString var, TString data);
    void splot(TString var, TString data, std::vector<TString> compDsets);

    void storeSPlotProjection(RooHist *rh, TString name);
    void storeSPlotRatio(RooHist *dh, RooHist *sh, TString name);

    bool verbose;
    bool debug;

  private:

    std::map<TString,std::pair<double,double> > cut_value_d;
    std::map<TString,std::pair<float,float> >  cut_value_f;
    std::map<TString,std::pair<int, int> >    cut_value_i;
    std::map<TString,bool>   cut_value_b;

    std::map<TString,double> values_d;
    std::map<TString,float>  values_f;
    std::map<TString,int>    values_i;
    std::map<TString,bool>   values_b;

    void setCutBranchAddresses(TTree* tree);
    bool passesCuts();
};

#endif
