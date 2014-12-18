#include <fstream>

#include "../interface/AssessBDTCutFit.h"

using namespace std;
using namespace RooFit;

AssessBDTCutFit::AssessBDTCutFit(TString wsname, TString name, bool verbose, bool debug):
  FitterBase(wsname,name,verbose,debug)
{}

AssessBDTCutFit::~AssessBDTCutFit(){}

void AssessBDTCutFit::addObsVars(){
  addObsVar("B_s0_MM", "m(K^{+}#pi^{-}K^{-}#pi^{+})", "MeV",5000,5800);
}

void AssessBDTCutFit::addCuts(){
  return;
}

void AssessBDTCutFit::addDatasets(){

  addDataset("Data2011",            "Data (2011)",         71);
  addDataset("Data2012",            "Data (2012)",         81);
  addDataset("Data",                "Data",                71, 81);
  addDataset("Bs2KstKst",           "Bs2KstKst",           -71, -81);
  addDataset("Bs2KstKst1430",       "Bs2KstKst1430",       -72, -82);
  addDataset("Bs2Kst1430Kst1430",   "Bs2Kst1430Kst1430",   -73, -83);
  addDataset("Bs2KpiKpiPhaseSpace", "Bs2KpiKpiPhaseSpace", -74, -84);
  addDataset("Bd2KstKst",           "Bd2Kst0Kst0",         -75, -85);
  addDataset("Bd2PhiKst",           "Bd2PhiKst0",          -76, -86);
  addDataset("Bd2RhoKst",           "Bd2RhoKst0",          -77, -87);
  addDataset("Lb2pKpipi",           "Lb2pKpipi",           -78, -88);
  addDataset("Lb2ppipipi",          "Lb2ppipipi",          -79, -89);
}

void AssessBDTCutFit::constructPdfs(){

  // Bs2KpiKpiPhaseSpace pdf
  w->factory("bs2kpikpi_mean[5350,5450]");
  w->factory("CBShape::bs2kpikpi_cb1( B_s0_MM, bs2kpikpi_mean, bs2kpikpi_sigma1[20,10,200], bs2kpikpi_alpha_1[0.5,0.,2], bs2kpikpi_n_1[2.5,2.,10] )");
  w->factory("CBShape::bs2kpikpi_cb2( B_s0_MM, bs2kpikpi_mean, bs2kpikpi_sigma2[20,10,200], bs2kpikpi_alpha_2[0.5,0.,2], bs2kpikpi_n_2[2.5,2.,10] )");
  w->factory("SUM::bs2kpikpi_pdf( bs2kpikpi_f1[0.6,0.,1.]*bs2kpikpi_cb1, bs2kpikpi_cb2 )");
  defineParamSet("bs2kpikpi_pdf");

  // Bd2Kst0Kst0 pdf
  w->factory("bd2kstkst_mean[5200,5350]");
  w->factory("CBShape::bd2kstkst_cb1( B_s0_MM, bd2kstkst_mean, bd2kstkst_sigma1[20,10,200], bd2kstkst_alpha_1[0.5,0.,2], bd2kstkst_n_1[0.5,0.,10] )");
  w->factory("CBShape::bd2kstkst_cb2( B_s0_MM, bd2kstkst_mean, bd2kstkst_sigma2[20,10,200], bd2kstkst_alpha_2[0.5,0.,2], bd2kstkst_n_2[0.5,0.,10] )");
  w->factory("SUM::bd2kstkst_pdf( bd2kstkst_f1[0.6,0.,1.]*bd2kstkst_cb1, bd2kstkst_cb2 )");
  defineParamSet("bd2kstkst_pdf");

  // combinatorial pdf
  w->factory("Exponential:exp_pdf( B_s0_MM, bkg_exp_p1[-0.02,0.] )");
  w->factory("Bernstein::bern_pdf( B_s0_MM, { bkg_bern_p0[1.], bkg_bern_p1[0.5,-1.,1.], bkg_bern_p2[0.5,-1.,1.] } )");
  w->factory("SUM::bkg_pdf( bkg_f[0.6,0.,1.]*bern_pdf, exp_pdf )");
  defineParamSet("bkg_pdf");

  w->factory("SUM::pdf ( bkg_y[0,200e3]*bkg_pdf , bs2kpikpi_y[0,20e3]*bs2kpikpi_pdf , bd2kstkst_y[0,1000]*bd2kstkst_pdf )");
  defineParamSet("pdf");
  defineYieldSet("pdf");
}


void AssessBDTCutFit::run(){

  // fit Bs2KpiKpi
  fit("bs2kpikpi_pdf","Bs2KpiKpiPhaseSpace");
  // plot Bs2KpiKpi
  plot("B_s0_MM","Bs2KpiKpiPhaseSpace","bs2kpikpi_pdf");
  // freeze Bs2KpiKpi params
  freeze("bs2kpikpi_pdf");
  w->var("bs2kpikpi_mean")->setConstant(false);

  // fit Bd2KstKst
  fit("bd2kstkst_pdf","Bd2KstKst");
  // plot Bd2KstKst
  plot("B_s0_MM","Bd2KstKst","bd2kstkst_pdf");
  // freeze Bd2KstKst params
  freeze("bd2kstkst_pdf");

  // fit the data
  fit("pdf","Data");
  // plot the data
  plot("B_s0_MM","Data","pdf");

  makeDataPlot();

  double bkgEvs = integral("bkg_pdf","B_s0_MM","bkg_y",5325,5425);
  double sigEvs = integral("bs2kpikpi_pdf","B_s0_MM","bs2kpikpi_y",5325,5425);

  system(Form("mkdir -p plots/%s",fitterName.Data()));
  ofstream outf;
  outf.open(Form("plots/%s/exp_events.log",fitterName.Data()));

  outf << "=========================================" << endl;
  outf << "Expected Background Events:   " << w->var("bkg_y")->getVal() << endl;
  outf << "   -- in window [5325,5425]:  " << bkgEvs << endl;
  outf << "Expected Signal Events:       " << w->var("bs2kpikpi_y")->getVal() << endl;
  outf << "   -- in window [5325,5425]:  " << sigEvs << endl;
  outf << "=========================================" << endl;

  outf.close();
  system(Form("cat plots/%s/exp_events.log",fitterName.Data()));
}

void AssessBDTCutFit::makeDataPlot(){

  vector<PlotComponent> plotComps;

  PlotComponent pc_data( "Data", "Data" );
  pc_data.setDefaultDataStyle();

  PlotComponent pc_pdf( "pdf", "Total PDF" );
  pc_pdf.setSolidLine(kBlue);

  PlotComponent pc_pdf_bkg( "pdf:bkg_pdf", "Background (Exp+Pol2)" );
  pc_pdf_bkg.setDashedLine(kGreen+1);

  PlotComponent pc_pdf_sig( "pdf:bs2kpikpi_pdf", "B_{s} #rightarrow (K^{+}#pi^{-})(K^{-}#pi^{+})" );
  pc_pdf_sig.setDashedLine(kRed);

  PlotComponent pc_pdf_sig_bd( "pdf:bd2kstkst_pdf", "B_{d} #rightarrow (K^{+}#pi^{-})(K^{-}#pi^{+})" );
  pc_pdf_sig_bd.setDashedLine(kMagenta);

  plotComps.push_back(pc_data);
  plotComps.push_back(pc_pdf_bkg);
  plotComps.push_back(pc_pdf_sig_bd);
  plotComps.push_back(pc_pdf_sig);
  plotComps.push_back(pc_pdf);

  w->var("bs2kpikpi_y")->SetTitle("N_{B_{s}}");
  w->var("bd2kstkst_y")->SetTitle("N_{B_{d}}");
  w->var("bkg_y")->SetTitle("N_{bkg}");

  setTitle("Pre-selection Fit");
  plot("B_s0_MM", plotComps, "assessbdtfit", w->set("pdf_yield_params"));

}
