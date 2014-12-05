#include "../interface/SelectionFit.h"

using namespace std;
using namespace RooFit;

SelectionFit::SelectionFit(TString wsname):
  FitterBase(wsname)
{}

SelectionFit::~SelectionFit(){}

void SelectionFit::addObsVars(){
  addObsVar("B_s0_MM", "m(K^{+}#pi^{-}K^{-}#pi^{+})", "MeV",5000,5800);
}

void SelectionFit::addCuts(){
  addCut("bdtoutput",float(0.),float(1.));
  addCut("Kplus_ProbNNkcorr",0.2,1.);
  addCut("Kminus_ProbNNkcorr",0.2,1.);
  addCut("Kplus_ProbNNp",0.,0.6);
  addCut("Kminus_ProbNNp",0.,0.6);
  addCut("Piplus_ProbNNpicorr",0.2,1.);
  addCut("Piminus_ProbNNpicorr",0.2,1.);
}

void SelectionFit::addDatasets(){
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

void SelectionFit::constructPdfs(){

  // Bs2KstKst pdf
  w->factory("bs2kstkst_mean[5350,5400]");
  w->factory("Gaussian::bs2kstkst_g1( B_s0_MM, bs2kstkst_mean, bs2kstkst_sigma1[20,10,200] )");
  w->factory("Gaussian::bs2kstkst_g2( B_s0_MM, bs2kstkst_mean, bs2kstkst_sigma2[20,10,200] )");
  w->factory("Gaussian::bs2kstkst_g3( B_s0_MM, bs2kstkst_mean, bs2kstkst_sigma3[20,10,80] )");
  w->factory("SUM::bs2kstkst_pdf( bs2kstkst_f1[0.6,0.,1.]*bs2kstkst_g1, bs2kstkst_f2[0.01,0.,1.]*bs2kstkst_g2, bs2kstkst_g3 )");
  defineParamSet("bs2kstkst_pdf");

  // Bs2KstKst1430 pdf
  w->factory("bs2kstkst1430_mean[5350,5400]");
  w->factory("Gaussian::bs2kstkst1430_g1( B_s0_MM, bs2kstkst1430_mean, bs2kstkst1430_sigma1[20,10,200] )");
  w->factory("Gaussian::bs2kstkst1430_g2( B_s0_MM, bs2kstkst1430_mean, bs2kstkst1430_sigma2[20,10,200] )");
  w->factory("Gaussian::bs2kstkst1430_g3( B_s0_MM, bs2kstkst1430_mean, bs2kstkst1430_sigma3[20,10,80] )");
  w->factory("SUM::bs2kstkst1430_pdf( bs2kstkst1430_f1[0.6,0.,1.]*bs2kstkst1430_g1, bs2kstkst1430_f2[0.01,0.,1.]*bs2kstkst1430_g2, bs2kstkst1430_g3 )");
  defineParamSet("bs2kstkst1430_pdf");

  // Bs2Kst1430Kst1430 pdf
  w->factory("bs2kst1430kst1430_mean[5350,5400]");
  w->factory("Gaussian::bs2kst1430kst1430_g1( B_s0_MM, bs2kst1430kst1430_mean, bs2kst1430kst1430_sigma1[20,10,200] )");
  w->factory("Gaussian::bs2kst1430kst1430_g2( B_s0_MM, bs2kst1430kst1430_mean, bs2kst1430kst1430_sigma2[20,10,200] )");
  w->factory("Gaussian::bs2kst1430kst1430_g3( B_s0_MM, bs2kst1430kst1430_mean, bs2kst1430kst1430_sigma3[20,10,80] )");
  w->factory("SUM::bs2kst1430kst1430_pdf( bs2kst1430kst1430_f1[0.6,0.,1.]*bs2kst1430kst1430_g1, bs2kst1430kst1430_f2[0.01,0.,1.]*bs2kst1430kst1430_g2, bs2kst1430kst1430_g3 )");
  defineParamSet("bs2kst1430kst1430_pdf");

  // Bs2KpiKpiPhaseSpace pdf
  w->factory("bs2kpikpi_mean[5350,5450]");
  w->factory("Gaussian::bs2kpikpi_g1( B_s0_MM, bs2kpikpi_mean, bs2kpikpi_sigma1[20,10,200] )");
  w->factory("Gaussian::bs2kpikpi_g2( B_s0_MM, bs2kpikpi_mean, bs2kpikpi_sigma2[20,10,200] )");
  w->factory("Gaussian::bs2kpikpi_g3( B_s0_MM, bs2kpikpi_mean, bs2kpikpi_sigma3[20,10,80] )");
  w->factory("SUM::bs2kpikpi_pdf( bs2kpikpi_f1[0.6,0.,1.]*bs2kpikpi_g1, bs2kpikpi_f2[0.01,0.,1.]*bs2kpikpi_g2, bs2kpikpi_g3 )");
  defineParamSet("bs2kpikpi_pdf");

  // Bd2Kst0Kst0 pdf
  w->factory("bd2kstkst_mean[5200,5350]");
  w->factory("Gaussian::bd2kstkst_g1( B_s0_MM, bd2kstkst_mean, bd2kstkst_sigma1[20,10,200] )");
  w->factory("Gaussian::bd2kstkst_g2( B_s0_MM, bd2kstkst_mean, bd2kstkst_sigma2[20,10,200] )");
  w->factory("Gaussian::bd2kstkst_g3( B_s0_MM, bd2kstkst_mean, bd2kstkst_sigma3[20,10,100] )");
  w->factory("SUM::bd2kstkst_pdf( bd2kstkst_f1[0.6,0.,1.]*bd2kstkst_g1, bd2kstkst_f2[0.01,0.,1.]*bd2kstkst_g2, bd2kstkst_g3 )");
  defineParamSet("bd2kstkst_pdf");

  // Bd2PhiKst0 pdf
  w->factory("bd2phikst_mean[5200,5350]");
  w->factory("CBShape::bd2phikst_pdf( B_s0_MM, bd2phikst_mean, bd2phikst_sigma[10,0,200], bd2phikst_alpha[0.5,0.,1.], bd2phikst_n[0.01,0.,10.])");
  defineParamSet("bd2phikst_pdf");

  // Bd2RhoKst0 pdf
  w->factory("bd2rhokst_mean[5250,5350]");
  w->factory("Gaussian::bd2rhokst_g1( B_s0_MM, bd2rhokst_mean, bd2phikst_sigma1[20,10,200] )");
  w->factory("CBShape::bd2rhokst_cb1( B_s0_MM, bd2rhokst_mean, bd2rhokst_sigma2[20,10,200], bd2rhokst_alpha[-0.5,-1.,0.], bd2rhokst_n[0.01,0.,10.])");
  w->factory("SUM::bd2rhokst_pdf( bd2rhokst_f1[0.2,0.,1.]*bd2rhokst_g1, bd2rhokst_cb1)");
  defineParamSet("bd2rhokst_pdf");

  // Lb2pKpipi pdf
  w->factory("lb2pkpipi_mean[5400,5600]");
  w->factory("CBShape::lb2pkpipi_pdf( B_s0_MM, lb2pkpipi_mean, lb2pkpipi_sigma[10,0,200], lb2pkpipi_alpha[0.01,0.,0.2], lb2pkpipi_n[0.01,0.,10.])");
  defineParamSet("lb2pkpipi_pdf");

  // Lb2ppipipi pdf
  w->factory("lb2ppipipi_mean[5400,5600]");
  w->factory("CBShape::lb2ppipipi_pdf( B_s0_MM, lb2ppipipi_mean, lb2ppipipi_sigma[10,0,200], lb2ppipipi_alpha[0.01,0.,0.2], lb2ppipipi_n[0.01,0.,10.])");
  defineParamSet("lb2ppipipi_pdf");

  // combinatorial pdf
  w->factory("Exponential:exp_pdf( B_s0_MM, bkg_exp_p1[-0.02,0.] )");
  w->factory("Bernstein::bern_pdf( B_s0_MM, { bkg_bern_p0[1.], bkg_bern_p1[0.5,-1.,1.], bkg_bern_p2[0.5,-1.,1.] } )");
  w->factory("SUM::bkg_pdf( bkg_f[0.6,0.,1.]*bern_pdf, exp_pdf )");
  defineParamSet("bkg_pdf");

  w->factory("SUM::pdf ( bkg_y[0,200e3]*bkg_pdf , bs2kpikpi_y[0,20e3]*bs2kpikpi_pdf , bd2kstkst_y[0,1000]*bd2kstkst_pdf )");
  defineParamSet("pdf");
  defineYieldSet("pdf");
}

void SelectionFit::run(){

  // fit Bs2KstKst
  //fit("bs2kstkst_pdf","Bs2KstKst");
  // plot Bs2KstKst
  //plot("B_s0_MM","Bs2KstKst","bs2kstkst_pdf");
  // freeze Bs2KstKst params
  //freeze("bs2kstkst_pdf");

  // fit Bs2KpiKpi
  fit("bs2kpikpi_pdf","Bs2KpiKpiPhaseSpace");
  // plot Bs2KpiKpi
  plot("B_s0_MM","Bs2KpiKpiPhaseSpace","bs2kpikpi_pdf");
  // freeze Bs2KpiKpi params
  freeze("bs2kpikpi_pdf");
  w->var("bs2kpikpi_mean")->setConstant(false);

  // fit Bs2KstKst1430
  //fit("bs2kstkst1430_pdf","Bs2KstKst1430");
  // plot Bs2KstKst
  //plot("B_s0_MM","Bs2KstKst1430","bs2kstkst1430_pdf");
  // freeze Bs2KstKst params
  //freeze("bs2kstkst1430_pdf");

  // fit Bs2Kst1430Kst1430
  //fit("bs2kst1430kst1430_pdf","Bs2Kst1430Kst1430");
  // plot Bs2KstKst
  //plot("B_s0_MM","Bs2Kst1430Kst1430","bs2kst1430kst1430_pdf");
  // freeze Bs2KstKst params
  //freeze("bs2kst1430kst1430_pdf");

  // fit Bd2KstKst
  fit("bd2kstkst_pdf","Bd2KstKst");
  // plot Bd2KstKst
  plot("B_s0_MM","Bd2KstKst","bd2kstkst_pdf");
  // freeze Bd2KstKst params
  freeze("bd2kstkst_pdf");

  // fit Bd2PhiKst
  //fit("bd2phikst_pdf","Bd2PhiKst");
  // plot Bd2PhiKst
  //plot("B_s0_MM","Bd2PhiKst","bd2phikst_pdf");
  // freeze Bd2PhiKst params
  //freeze("bd2phikst_pdf");

  // fit Bd2RhoKst
  //fit("bd2rhokst_pdf","Bd2RhoKst");
  // plot Bd2RhoKst
  //plot("B_s0_MM","Bd2RhoKst","bd2rhokst_pdf");
  // freeze Bd2RhoKst params
  //freeze("bd2rhokst_pdf");

  // fit Lb2pKpipi
  //fit("lb2pkpipi_pdf","Lb2pKpipi");
  // plot Lb2pKpipi
  //plot("B_s0_MM","Lb2pKpipi","lb2pkpipi_pdf");
  // freeze Lb2pKpipi params
  //freeze("lb2pkpipi_pdf");

  // fit Lb2ppipipi
  //fit("lb2ppipipi_pdf","Lb2ppipipi");
  // plot Lb2ppipipi
  //plot("B_s0_MM","Lb2ppipipi","lb2ppipipi_pdf");
  // freeze Lb2ppipipi params
  //freeze("lb2ppipipi_pdf");

  // fit the data
  fit("pdf","Data");
  // plot the data
  plot("B_s0_MM","Data","pdf");
}

void SelectionFit::makeDataPlot(){
  w->Print();
}
