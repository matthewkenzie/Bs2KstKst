#include "../interface/CutBasedFit.h"

using namespace std;

CutBasedFit::CutBasedFit(TString wsname):
  FitterBase(wsname)
{}

CutBasedFit::~CutBasedFit(){}

void CutBasedFit::addObsVars(){

  addObsVar("B_s0_MM", "m(K^{+}#pi^{-}K^{-}#pi^{+})", "MeV",5000,5800);
  addObsVar("max_track_chi2","Max Track #chi^{2}", "", 0,3);
  addObsVar("Kplus_ProbNNkcorr",   "Kplus_ProbNNkcorr",   "", 0, 1);
  addObsVar("Kminus_ProbNNkcorr",  "Kminus_ProbNNkcorr",  "", 0, 1);
  addObsVar("Piplus_ProbNNkcorr",  "Piplus_ProbNNkcorr",  "", 0, 1);
  addObsVar("Piminus_ProbNNkcorr", "Piminus_ProbNNkcorr", "", 0, 1);
  addObsVar("Kplus_ProbNNpicorr",   "Kplus_ProbNNpicorr",   "", 0, 1);
  addObsVar("Kminus_ProbNNpicorr",  "Kminus_ProbNNpicorr",  "", 0, 1);
  addObsVar("Piplus_ProbNNpicorr",  "Piplus_ProbNNpicorr",  "", 0, 1);
  addObsVar("Piminus_ProbNNpicorr", "Piminus_ProbNNpicorr", "", 0, 1);

}

void CutBasedFit::addCuts(){

  //addCut("cut_based_pid",bool(true));
  addCut("Kst_MM",double(792.),double(992.));
  addCut("Kstb_MM",double(792.),double(992.));

}

void CutBasedFit::addDatasets(){

  addDataset("Data2011", "Data (2011)", 71, 72);
  addDataset("Data2012", "Data (2012)", 81, 82);
  addDataset("Data",     "Data",        71, 72, 81, 82);
  addDataset("MC2011",   "MC (2011)",   -73, -74);
  addDataset("MC2012",   "MC (2012)",   -83, -84);
  addDataset("MC",       "MC",          -73, -74, -83, -84);
}

void CutBasedFit::constructPdfs(){

  // signal pdf
  w->factory("mean[5300,5400]");
  w->factory("Gaussian::sig_g1( B_s0_MM, mean, sigma_1[20,10,200] )");
  w->factory("Gaussian::sig_g2( B_s0_MM, mean, sigma_2[20,10,80] )");
  w->factory("Gaussian::sig_g3( B_s0_MM, mean, sigma_3[20,10,80] )");
  w->factory("SUM::sig( f_g1[0.2,0.,1.]*sig_g1, f_g2[0.2,0.,1.]*sig_g2, sig_g3 )");
  defineParamSet("sig");

  // bd pdf
  w->factory("Gaussian::sig_bd( B_s0_MM, mean_bd[5250,5200,5300], sigma_bd[10,0,50])");
  //w->factory("CBShape::sig_bd( B_s0_MM, mean_bd[5250,5200,5300], sigma_bd[10,0,200], alpha_bd[0.5,0.,1.], n_bd[0.01,0.,10.])");
  defineParamSet("sig_bd");

  // mis-id pdf
  //w->factory("Gaussian::sig_misid_g1( B_s0_MM, mean_misid_1[5450,5300,5500], sigma_misid_1[200,50,800] )");
  //w->factory("Gaussian::sig_misid_g2( B_s0_MM, mean_misid_2[5500,5470,5530], sigma_misid_2[200,50,800] )");
  //w->factory("SUM::sig_misid( sig_misid_f[0.5,0.,1.]*sig_misid_g1, sig_misid_g2 )");
  //defineParamSet("sig_misid");

  // combinatorial pdf
  w->factory("Exponential:bkg( B_s0_MM, bkg_exp_p1[-0.02,0.] )");
  //w->factory("Bernstein::bern( B_s0_MM, { bkg_bern_p0[1.], bkg_bern_p1[0.2,-1.,1.] } ) ");
  //w->factory("SUM::bkg( bkg_f[0.5,0.,1.]*exp, bern )");
  defineParamSet("bkg");

  // total pdf
  //w->factory("SUM:pdf( sig_y[0,10e3]*sig, sig_bd_y[0,2e3]*sig_bd, sig_misid_y[0,5e3]*sig_misid, bkg_y[0,100e3]*bkg )");
  w->factory("SUM:pdf( sig_y[0,10e3]*sig, sig_bd_y[0,2e3]*sig_bd, bkg_y[0,100e3]*bkg )");
  defineParamSet("pdf");
  defineYieldSet("pdf");
}

void CutBasedFit::run(){

  // fit signal MC
  fit("sig","MC");
  // plot signal MC
  plot("B_s0_MM","MC","sig");
  // freeze signal params
  freeze("sig");
  //w->var("mean")->setConstant(false);

  // fit the data
  fit("pdf","Data");
  // plot the data
  plot("B_s0_MM","Data","pdf");

  makeDataPlot();

  sfit("pdf","Data");
  sproject("Data","sig_y");
  sproject("Data","bkg_y");
  sproject("Data","sig_bd_y");
  sproject("Data","sig_misid_y");

  plot("B_s0_MM",        "Data_sweight_sig_y");
  plot("max_track_chi2", "Data_sweight_sig_y");

  vector<TString> compDsets;
  compDsets.push_back("MC");

  splot("Kplus_ProbNNkcorr", "Data_sweight_sig_y", compDsets);
  splot("Kminus_ProbNNkcorr", "Data_sweight_sig_y", compDsets);
  splot("Piplus_ProbNNkcorr", "Data_sweight_sig_y", compDsets);
  splot("Piminus_ProbNNkcorr", "Data_sweight_sig_y", compDsets);

  splot("Kplus_ProbNNpicorr", "Data_sweight_sig_y", compDsets);
  splot("Kminus_ProbNNpicorr", "Data_sweight_sig_y", compDsets);
  splot("Piplus_ProbNNpicorr", "Data_sweight_sig_y", compDsets);
  splot("Piminus_ProbNNpicorr", "Data_sweight_sig_y", compDsets);

}

void CutBasedFit::makeDataPlot(){

  vector<PlotComponent> plotComps;

  PlotComponent pc_data( "Data", "Data" );
  pc_data.setDefaultDataStyle();

  PlotComponent pc_pdf( "pdf", "Total PDF" );
  pc_pdf.setSolidLine(kBlue);

  PlotComponent pc_pdf_bkg( "pdf:bkg", "Background (Exp)" );
  pc_pdf_bkg.setDashedLine(kGreen+1);

  PlotComponent pc_pdf_sig( "pdf:sig", "Signal (3Gaus)" );
  pc_pdf_sig.setDashedLine(kRed);

  PlotComponent pc_pdf_sig_bd( "pdf:sig_bd", "Signal (1Gaus)" );
  pc_pdf_sig_bd.setDashedLine(kMagenta);

  PlotComponent pc_pdf_sig_misid( "pdf:sig_misid", "Signal (1Gaus)" );
  pc_pdf_sig_misid.setDashedLine(kYellow+1);

  plotComps.push_back(pc_data);
  plotComps.push_back(pc_pdf_bkg);
  plotComps.push_back(pc_pdf_sig_bd);
  plotComps.push_back(pc_pdf_sig_misid);
  plotComps.push_back(pc_pdf_sig);
  plotComps.push_back(pc_pdf);

  plot("B_s0_MM", plotComps, "fullfit");

}
