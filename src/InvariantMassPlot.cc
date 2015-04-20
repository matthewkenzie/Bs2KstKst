#include "../interface/InvariantMassPlot.h"

using namespace std;
using namespace RooFit;

InvariantMassPlot::InvariantMassPlot(TString wsname,TString name, bool verbose, bool debug):
  FitterBase(wsname,name,verbose,debug)
{}

InvariantMassPlot::~InvariantMassPlot(){}

void InvariantMassPlot::makeDataPlot(){

  if ( verbose || debug ) {
    cout << "Making data plot" << endl;
  }

  vector<PlotComponent> plotComps;

  PlotComponent pc_data( "Data", "Data" );
  pc_data.setDefaultDataStyle();

  PlotComponent pc_pdf( "pdf", "Total PDF" );
  pc_pdf.setSolidLine(kBlue);

  PlotComponent pc_pdf_bkg( "pdf:bkg_pdf", "Background (Exp)" );
  pc_pdf_bkg.setDashedLine(kGreen+1);

  PlotComponent pc_pdf_bern( "pdf:part_reco_pdf", "Partially reco" );
  pc_pdf_bern.setDashedLine(kGreen+7);

  PlotComponent pc_pdf_sig( "pdf:bs2kstkst_mc_pdf", "B_{s} #rightarrow (K^{+}#pi^{-})(K^{-}#pi^{+})" );
  pc_pdf_sig.setDashedLine(kRed);

  PlotComponent pc_pdf_sig_bd( "pdf:bd2kstkst_mc_pdf", "B_{d} #rightarrow (K^{+}#pi^{-})(K^{-}#pi^{+})" );
  pc_pdf_sig_bd.setDashedLine(kMagenta);

  PlotComponent pc_pdf_sig_phikst( "pdf:bd2phikst_mc_pdf", "B_{d} #rightarrow (K^{+}K^{-})(K^{-}#pi^{+})");
  pc_pdf_sig_phikst.setDashedLine(kYellow+1);

  PlotComponent pc_pdf_sig_bsphikst( "pdf:bs2phikst_mc_pdf", "B_{s} #rightarrow (K^{+}K^{-})(K^{-}#pi^{+})");
  pc_pdf_sig_bsphikst.setDashedLine(kBlack);

  PlotComponent pc_pdf_sig_rhokst( "pdf:bd2rhokst_mc_pdf", "B_{d}#rightarrow (#pi^{+}#pi^{-})(K^{-}#pi^{+})");
  pc_pdf_sig_rhokst.setDashedLine(kOrange+1);

  PlotComponent pc_pdf_sig_pkpipi( "pdf:lb2pkpipi_mc_pdf", "#Lambda_{b}#rightarrow (p^{+}#pi^{-})(K^{-}#pi^{+})");
  pc_pdf_sig_pkpipi.setDashedLine(kViolet+1);

  PlotComponent pc_pdf_sig_ppipipi( "pdf:lb2ppipipi_mc_pdf", "#Lambda_{d}#rightarrow (p^{+}#pi^{-})(#pi^{-}#pi^{+})");
  pc_pdf_sig_ppipipi.setDashedLine(kBlue-7);

  plotComps.push_back(pc_data);
  plotComps.push_back(pc_pdf_bkg);
  plotComps.push_back(pc_pdf_bern);
  plotComps.push_back(pc_pdf_sig_bd);
  plotComps.push_back(pc_pdf_sig_phikst);
  plotComps.push_back(pc_pdf_sig_bsphikst);
  plotComps.push_back(pc_pdf_sig_rhokst);
  plotComps.push_back(pc_pdf_sig_pkpipi);
  plotComps.push_back(pc_pdf_sig_ppipipi);
  plotComps.push_back(pc_pdf_sig);
  plotComps.push_back(pc_pdf);

  w->var("bkg_y")->SetTitle("N_{comb}");
  w->var("part_reco_y")->SetTitle("N_{part}");
  w->var("bs2kstkst_y")->SetTitle("N_{B_{s}}");
  w->var("bd2kstkst_y")->SetTitle("N_{B_{d}}");
  w->var("bd2rhokst_y")->SetTitle("N_{K#pi#rho}");
  w->var("bd2phikst_y")->SetTitle("N_{B_{d}#rightarrowK#piKK}");
  w->var("bs2phikst_y")->SetTitle("N_{B_{s}#rightarrowK#piKK}");
  w->var("lb2pkpipi_y")->SetTitle("N_{p#piK#pi}");
  w->var("lb2ppipipi_y")->SetTitle("N_{p#pi#pi#pi}");

  setTitle("InvariantMassPlot");
  setDrawLog(true);
  setResidType(2);
  setPBoxX(0.23);

  plot("B_s0_MM", plotComps, "fullfit", w->set("pdf_yield_params"));

}

void InvariantMassPlot::run() {

  makeDataPlot();

}

