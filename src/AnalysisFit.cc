#include "../interface/AnalysisFit.h"
#include "../interface/RooExpAndGauss.h"
#include "../interface/RooPhysBkg.h"

using namespace std;
using namespace RooFit;

AnalysisFit::AnalysisFit(TString wsname,TString name, bool verbose, bool debug):
  FitterBase(wsname,name,verbose,debug)
{}

AnalysisFit::~AnalysisFit(){}

void AnalysisFit::addObsVars(){

  addObsVar("B_s0_MM", "m(K^{+}#pi^{-}K^{-}#pi^{+})", "MeV",5000,5800);
  addObsVar("max_track_chi2","Max Track #chi^{2}", "", 0,3);
  addObsVar("B_s0_P","B_{s} p}", "MeV",0,400000);
  addObsVar("B_s0_PT","B_{s} p_{T}", "MeV",0,40000);
  addObsVar("Kst_PT", "K*{0} p_{T}", "MeV",0,20000);
  addObsVar("Kstb_PT","#bar{K*}^{0} p_{T}", "MeV",0,20000);
  addObsVar("Kplus_ProbNNkcorr",   "Kplus_ProbNNkcorr",   "", 0, 1);
  addObsVar("Kminus_ProbNNkcorr",  "Kminus_ProbNNkcorr",  "", 0, 1);
  addObsVar("Piplus_ProbNNkcorr",  "Piplus_ProbNNkcorr",  "", 0, 1);
  addObsVar("Piminus_ProbNNkcorr", "Piminus_ProbNNkcorr", "", 0, 1);
  addObsVar("Kplus_ProbNNpicorr",   "Kplus_ProbNNpicorr",   "", 0, 1);
  addObsVar("Kminus_ProbNNpicorr",  "Kminus_ProbNNpicorr",  "", 0, 1);
  addObsVar("Piplus_ProbNNpicorr",  "Piplus_ProbNNpicorr",  "", 0, 1);
  addObsVar("Piminus_ProbNNpicorr", "Piminus_ProbNNpicorr", "", 0, 1);
}

void AnalysisFit::addCuts(){

  addCut("bdtoutput",float(0.01),float(1.));

}

void AnalysisFit::addDatasets(){

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

void AnalysisFit::constructPdfs(){

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
  w->factory("CBShape::bs2kpikpi_cb1( B_s0_MM, bs2kpikpi_mean, bs2kpikpi_sigma1[20,5,200], bs2kpikpi_alpha_1[0.5,0.,5], bs2kpikpi_n_1[0.5,0.,10] )");
  w->factory("CBShape::bs2kpikpi_cb2( B_s0_MM, bs2kpikpi_mean, bs2kpikpi_sigma2[20,5,200], bs2kpikpi_alpha_2[-0.5,-5.,0], bs2kpikpi_n_2[0.5,0.,10] )");
  w->factory("SUM::bs2kpikpi_pdf( bs2kpikpi_f1[0.6,0.,1.]*bs2kpikpi_cb1, bs2kpikpi_cb2 )");
  defineParamSet("bs2kpikpi_pdf");

  // Bd2Kst0Kst0 pdf
  w->factory("bd2kstkst_mean[5200,5350]");
  w->factory("CBShape::bd2kstkst_cb1( B_s0_MM, bd2kstkst_mean, bd2kstkst_sigma1[20,10,200], bd2kstkst_alpha_1[0.5,0.,5], bd2kstkst_n_1[0.5,0.,10] )");
  w->factory("CBShape::bd2kstkst_cb2( B_s0_MM, bd2kstkst_mean, bd2kstkst_sigma2[20,10,200], bd2kstkst_alpha_2[-0.5,-5.,0], bd2kstkst_n_2[0.5,0.,10] )");
  w->factory("SUM::bd2kstkst_pdf( bd2kstkst_f1[0.6,0.,1.]*bd2kstkst_cb1, bd2kstkst_cb2 )");
  defineParamSet("bd2kstkst_pdf");

  // Bd2PhiKst0 pdf
  w->factory("bd2phikst_mean[5100,5350]");
  w->factory("CBShape::bd2phikst_cb1( B_s0_MM, bd2phikst_mean, bd2phikst_sigma1[100,0,400], bd2phikst_alpha1[0.5,0.,5.], bd2phikst_n1[0.01,0.,10.])");
  w->factory("CBShape::bd2phikst_cb2( B_s0_MM, bd2phikst_mean, bd2phikst_sigma2[100,0,400], bd2phikst_alpha2[0.5,0.,5.], bd2phikst_n2[0.1,0.,10.])");
  w->factory("SUM::bd2phikst_pdf( bd2phikst_f1[0.6,0.,1.]*bd2phikst_cb1, bd2phikst_cb2 )");
  defineParamSet("bd2phikst_pdf");

  // Bd2RhoKst0 pdf
  w->factory("bd2rhokst_mean[5250,5350]");
  w->factory("Gaussian::bd2rhokst_g1( B_s0_MM, bd2rhokst_mean, bd2rhokst_sigma1[20,10,200] )");
  w->factory("CBShape::bd2rhokst_cb1( B_s0_MM, bd2rhokst_mean, bd2rhokst_sigma2[20,10,200], bd2rhokst_alpha[-0.5,-5.,0.], bd2rhokst_n[0.01,0.,40.])");
  w->factory("SUM::bd2rhokst_pdf( bd2rhokst_f1[0.2,0.,1.]*bd2rhokst_g1, bd2rhokst_cb1)");
  defineParamSet("bd2rhokst_pdf");

  // Lb2pKpipi pdf
  w->factory("lb2pkpipi_mean[5450,5550]");
  w->factory("Gaussian::lb2pkpipi_g1( B_s0_MM, lb2pkpipi_mean, lb2pkpipi_sigma1[10,0,200] )");
  w->factory("CBShape::lb2pkpipi_cb1( B_s0_MM, lb2pkpipi_mean, lb2pkpipi_sigma2[10,0,200], lb2pkpipi_alpha[0.04,0.,10.], lb2pkpipi_n[0.1,0.,100.])");
  w->factory("SUM::lb2pkpipi_pdf( lb2pkpipi_f1[0.4,0.,1.]*lb2pkpipi_g1, lb2pkpipi_cb1 )");
  defineParamSet("lb2pkpipi_pdf");

  // Lb2ppipipi pdf
  w->factory("lb2ppipipi_mean[5450,5600]");
  w->factory("CBShape::lb2ppipipi_pdf( B_s0_MM, lb2ppipipi_mean, lb2ppipipi_sigma[10,0,200], lb2ppipipi_alpha[0.04,0.,10.], lb2ppipipi_n[5.,0.,10.])");
  defineParamSet("lb2ppipipi_pdf");

  // partial reco bkg
  //w->factory("Bernstein::part_reco_pdf( B_s0_MM, { bkg_bern_p0[1.], bkg_bern_p1[0.5,-1.,1.], bkg_bern_p2[0.5,-1.,1.] } )");
  //w->factory("ExpAndGaus::part_reco_pdf( B_s0_MM, part_reco_mbar(-0.05,0.05),
  w->factory("ArgusBG::part_reco_pdf( B_s0_MM, part_reco_m0[5000,5400], part_reco_c[-20.0,-100.,-1.], part_reco_p[0.4,0.,1.] )");
  //w->importClassCode(RooPhysBkg::Class(),kTRUE);
  //w->factory("PhysBkg::part_reco_pdf( B_s0_MM, part_reco_m0[5200,5000,5400], part_reco_c[-20.,-50.,-10.], part_reco_s[20,1,100] )");
  defineParamSet("part_reco_pdf");

  // combinatorial pdf
  //w->factory("Exponential:exp_pdf( B_s0_MM, bkg_exp_p1[-0.02,0.] )");
  //w->factory("Bernstein::part_reco_pdf( B_s0_MM, { bkg_bern_p0[1.], bkg_bern_p1[0.5,-1.,1.], bkg_bern_p2[0.5,-1.,1.] } )");
  //w->factory("SUM::bkg_pdf( bkg_f[0.6,0.,1.]*part_reco_pdf, exp_pdf )");
  w->factory("Exponential::bkg_pdf( B_s0_MM, bkg_exp_p1[-0.002,-0.004,0.] )");
  defineParamSet("bkg_pdf");

  // TOTAL
  //w->factory("SUM::pdf ( bkg_y[0,200e3]*bkg_pdf , bs2kpikpi_y[0,20e3]*bs2kpikpi_pdf , bd2kstkst_y[0,1000]*bd2kstkst_pdf )");
  w->factory("SUM::pdf ( bkg_y[0,200e3]*bkg_pdf , part_reco_y[0,200e3]*part_reco_pdf , bs2kpikpi_y[0,20e3]*bs2kpikpi_pdf , bd2kstkst_y[0,3000]*bd2kstkst_pdf , bd2phikst_y[1500,5000]*bd2phikst_pdf , bd2rhokst_y[0,10000]*bd2rhokst_pdf , lb2pkpipi_y[0,4000]*lb2pkpipi_pdf, lb2ppipipi_y[0,4000]*lb2ppipipi_pdf)");
  defineParamSet("pdf");
  defineYieldSet("pdf");
}

void AnalysisFit::run(){

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

  // fit Bd2PhiKst
  fit("bd2phikst_pdf","Bd2PhiKst");
  // plot Bd2PhiKst
  plot("B_s0_MM","Bd2PhiKst","bd2phikst_pdf");
  // freeze Bd2PhiKst params
  freeze("bd2phikst_pdf");

  // fit Bd2RhoKst
  fit("bd2rhokst_pdf","Bd2RhoKst");
  // plot Bd2RhoKst
  plot("B_s0_MM","Bd2RhoKst","bd2rhokst_pdf");
  // freeze Bd2RhoKst params
  freeze("bd2rhokst_pdf");

  // fit Lb2pKpipi
  fit("lb2pkpipi_pdf","Lb2pKpipi");
  // plot Lb2pKpipi
  plot("B_s0_MM","Lb2pKpipi","lb2pkpipi_pdf");
  // freeze Lb2pKpipi params
  freeze("lb2pkpipi_pdf");

  // fit Lb2ppipipi
  fit("lb2ppipipi_pdf","Lb2ppipipi");
  // plot Lb2ppipipi
  plot("B_s0_MM","Lb2ppipipi","lb2ppipipi_pdf");
  // freeze Lb2ppipipi params
  freeze("lb2ppipipi_pdf");

  // fit the data
  fit("pdf","Data");
  // plot the data
  plot("B_s0_MM","Data","pdf");

  makeDataPlot();

  sfit("pdf","Data");
  sproject("Data","bs2kpikpi_y");

  vector<TString> compDsets;
  compDsets.push_back("Bs2KpiKpiPhaseSpace");

  splot("B_s0_P",               "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("B_s0_PT",              "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("Kst_PT",               "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("Kstb_PT",              "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("max_track_chi2",       "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("Kplus_ProbNNkcorr",    "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("Kplus_ProbNNpicorr",   "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("Kminus_ProbNNkcorr",   "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("Kminus_ProbNNpicorr",  "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("Piplus_ProbNNkcorr",   "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("Piplus_ProbNNpicorr",  "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("Piminus_ProbNNkcorr",  "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);
  splot("Piminus_ProbNNpicorr", "Data_wsweights_proj_bs2kpikpi_y", compDsets, "sWeights", 20);

  w->set("pdf_yield_params")->Print("v");

}

void AnalysisFit::makeDataPlot(){

  vector<PlotComponent> plotComps;

  PlotComponent pc_data( "Data", "Data" );
  pc_data.setDefaultDataStyle();

  PlotComponent pc_pdf( "pdf", "Total PDF" );
  pc_pdf.setSolidLine(kBlue);

  PlotComponent pc_pdf_bkg( "pdf:bkg_pdf", "Background (Exp)" );
  pc_pdf_bkg.setDashedLine(kGreen+1);

  PlotComponent pc_pdf_bern( "pdf:part_reco_pdf", "Partially reco" );
  pc_pdf_bern.setDashedLine(kGreen+7);

  PlotComponent pc_pdf_sig( "pdf:bs2kpikpi_pdf", "B_{s} #rightarrow (K^{+}#pi^{-})(K^{-}#pi^{+})" );
  pc_pdf_sig.setDashedLine(kRed);

  PlotComponent pc_pdf_sig_bd( "pdf:bd2kstkst_pdf", "B_{d} #rightarrow (K^{+}#pi^{-})(K^{-}#pi^{+})" );
  pc_pdf_sig_bd.setDashedLine(kMagenta);

  PlotComponent pc_pdf_sig_phikst( "pdf:bd2phikst_pdf", "B_{d} #rightarrow (K^{+}K^{-})(K^{-}#pi^{+})");
  pc_pdf_sig_phikst.setDashedLine(kYellow+1);

  PlotComponent pc_pdf_sig_rhokst( "pdf:bd2rhokst_pdf", "B_{d}#rightarrow (#pi^{+}#pi^{-})(K^{-}#pi^{+})");
  pc_pdf_sig_rhokst.setDashedLine(kOrange+1);

  PlotComponent pc_pdf_sig_pkpipi( "pdf:lb2pkpipi_pdf", "#Lambda_{b}#rightarrow (p^{+}#pi^{-})(K^{-}#pi^{+})");
  pc_pdf_sig_pkpipi.setDashedLine(kViolet+1);

  PlotComponent pc_pdf_sig_ppipipi( "pdf:lb2ppipipi_pdf", "#Lambda_{d}#rightarrow (p^{+}#pi^{-})(#pi^{-}#pi^{+})");
  pc_pdf_sig_ppipipi.setDashedLine(kBlue-7);

  plotComps.push_back(pc_data);
  plotComps.push_back(pc_pdf_bkg);
  plotComps.push_back(pc_pdf_bern);
  plotComps.push_back(pc_pdf_sig_bd);
  plotComps.push_back(pc_pdf_sig_phikst);
  plotComps.push_back(pc_pdf_sig_rhokst);
  plotComps.push_back(pc_pdf_sig_pkpipi);
  plotComps.push_back(pc_pdf_sig_ppipipi);
  plotComps.push_back(pc_pdf_sig);
  plotComps.push_back(pc_pdf);

  w->var("bkg_y")->SetTitle("N_{comb}");
  w->var("part_reco_y")->SetTitle("N_{part}");
  w->var("bs2kpikpi_y")->SetTitle("N_{B_{s}}");
  w->var("bd2kstkst_y")->SetTitle("N_{B_{d}}");
  w->var("bd2rhokst_y")->SetTitle("N_{K#pi#rho}");
  w->var("bd2phikst_y")->SetTitle("N_{K#piKK}");
  w->var("lb2pkpipi_y")->SetTitle("N_{p#piK#pi}");
  w->var("lb2ppipipi_y")->SetTitle("N_{p#pi#pi#pi}");

  setTitle("AnalysisFit");
  setDrawLog(true);

  plot("B_s0_MM", plotComps, "fullfit", w->set("pdf_yield_params"));

}
