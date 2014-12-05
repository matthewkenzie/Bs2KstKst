#include <iostream>

#include "TFile.h"
#include "TTree.h"
#include "TAxis.h"
#include "TLegend.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TLine.h"
#include "TGraphAsymmErrors.h"
#include "TMath.h"

#include "RooDataSet.h"
#include "RooArgSet.h"
#include "RooRealVar.h"
#include "RooPlot.h"
#include "RooCBShape.h"
#include "RooAddPdf.h"

#include "RooStats/SPlot.h"

#include "../interface/FitterBase.h"

using namespace std;
using namespace RooFit;
using namespace TMath;

FitterBase::FitterBase(TString wsname)
{
  gROOT->ProcessLine(".x /Users/matt/Scratch/lhcb/lhcbStyle.C");
	w = new RooWorkspace(wsname);
	RooArgSet *observables = new RooArgSet();
	w->defineSet("observables",*observables);
	delete observables;
  colors.push_back(kRed);
  colors.push_back(kBlue);
  colors.push_back(kGreen+1);
}

FitterBase::~FitterBase(){}

void FitterBase::addObsVar(TString name, double min, double max){
  addObsVar(name,name,"",min,max);
}

void FitterBase::addObsVar(TString name, TString title, TString unit, double min, double max){
	w->factory(Form("%s[%f,%f]",name.Data(),min,max));
	((RooArgSet*)w->set("observables"))->add(*w->var(name));
  w->var(name)->SetTitle(title);
  w->var(name)->setUnit(unit);
}

void FitterBase::setUnit(TString var, TString unit){
  if (!w->var(var)) cerr << "WARNING -- FitterBase::setUnit() -- no variable named " << var << " in workspace" << endl;
  w->var(var)->setUnit(unit);
}

void FitterBase::setBins(TString var, int bins){
  if (!w->var(var)) cerr << "WARNING -- FitterBase::setBins() -- no variable named " << var << " in workspace" << endl;
  w->var(var)->setBins(bins);
}

void FitterBase::addDataset(TString name, TString title, int itype) {
  dataSets.push_back(DataSet(name,title,w,itype));
}

void FitterBase::addDataset(TString name, TString title, int itype1, int itype2) {
  dataSets.push_back(DataSet(name,title,w,itype1,itype2));
}

void FitterBase::addDataset(TString name, TString title, int itype1, int itype2, int itype3) {
  dataSets.push_back(DataSet(name,title,w,itype1,itype2,itype3));
}

void FitterBase::addDataset(TString name, TString title, int itype1, int itype2, int itype3, int itype4) {
  dataSets.push_back(DataSet(name,title,w,itype1,itype2,itype3,itype4));
}

void FitterBase::addCut(TString name, double low, double high){
  cut_value_d[name] = make_pair(low,high);
  values_d[name] = -999.;
}

void FitterBase::addCut(TString name, float low, float high){
  cut_value_f[name] = make_pair(low,high);
  values_f[name] = -999.;
}

void FitterBase::addCut(TString name, int low, int high){
  cut_value_i[name] = make_pair(low,high);
  values_i[name] = -999;
}

void FitterBase::addCut(TString name, bool val){
  cut_value_b[name] = val;
  values_b[name] = false;
}

void FitterBase::makeDatasets() {

  for (vector<DataSet>::iterator dataIt=dataSets.begin(); dataIt!=dataSets.end(); dataIt++){
    RooDataSet *data = new RooDataSet(dataIt->name,dataIt->title,*w->set("observables"));
    w->import(*data);
    delete data;
  }
}

void FitterBase::fillDatasets(TString fname, TString tname){

	TFile *tf = TFile::Open(fname);
	TTree *tree = (TTree*)tf->Get(tname);

  RooArgSet *observables = (RooArgSet*)w->set("observables");

  // default variables to read
	int itype;
	tree->SetBranchAddress("itype",&itype);

  // container for observable values
  map<TString,double> values;

  // set branch addresses from tree into container for observables
  RooRealVar *parg;
	TIterator *iter = observables->createIterator();
	while ((parg = (RooRealVar*)iter->Next())){
		values[parg->GetName()] = -999.;
		tree->SetBranchAddress(parg->GetName(),&values[parg->GetName()]);
	}
  delete iter;

  // set branch address for cut values
  setCutBranchAddresses(tree);

  // now loop entries
	for (int e=0; e<tree->GetEntries(); e++){
		tree->GetEntry(e);

    bool passes = true;

    // the variable cuts
    if ( !passesCuts() ) {
      continue;
    }

    // the observable range cuts
		iter = observables->createIterator();
		while ((parg = (RooRealVar*)iter->Next())) {
			if (values[parg->GetName()] < w->var(parg->GetName())->getMin() || values[parg->GetName()] > w->var(parg->GetName())->getMax()) {
				passes=false;
			}
			w->var(parg->GetName())->setVal(values[parg->GetName()]);
		}

		if (!passes) continue;

    // dataset filling
    for (vector<DataSet>::iterator dataIt=dataSets.begin(); dataIt!=dataSets.end(); dataIt++){
      // check itype
      for (vector<int>::iterator typIt=dataIt->itypes.begin(); typIt!=dataIt->itypes.end(); typIt++){
        if (itype==*typIt){
          w->data(dataIt->name)->add(*(w->set("observables")));
        }
      }
    }
  }
  tf->Close();
}

void FitterBase::save(TString fname){
  TFile *outf = new TFile(fname,"RECREATE");
  outf->cd();
  w->Write();
  TDirectory *dir = outf->mkdir("residuals");
  dir->cd();
  for (vector<TObject*>::iterator obj=saveObjsStore.begin(); obj!=saveObjsStore.end(); obj++){
    (*obj)->Write();
  }
  outf->Close();
  cout << "Written output to file: " << fname << endl;
}

void FitterBase::defineParamSet(TString pdf){
  RooArgSet *argset = w->pdf(pdf)->getParameters(*w->set("observables"));
  w->defineSet(Form("%s_params",pdf.Data()),*argset);
  delete argset;
}

void FitterBase::defineYieldSet(TString pdf_name){

  RooAbsPdf* pdf = w->pdf(pdf_name);
  RooArgSet *comps = pdf->getComponents();
  RooArgSet *allNonYieldParams = new RooArgSet();
  RooArgSet *nonYieldParams = new RooArgSet();
  // loop components
  RooAbsPdf *parg;
  TIterator *iter = comps->createIterator();
  while ( (parg = (RooAbsPdf*)iter->Next()) ) {
    if ( parg == w->pdf(pdf_name) ) continue;
    RooArgSet *argset = parg->getParameters(*w->set("observables"));
    nonYieldParams->add(*argset);
    allNonYieldParams->add(*argset);
    delete argset;
  }
  delete iter;
  allNonYieldParams->add(*w->set("observables"));
  RooArgSet *yieldParams = w->pdf(pdf_name)->getParameters(*allNonYieldParams);
  w->defineSet(Form("%s_yield_params",pdf_name.Data()),*yieldParams);
  w->defineSet(Form("%s_nonyield_params",pdf_name.Data()),*nonYieldParams);
  delete nonYieldParams;
  delete allNonYieldParams;
  delete yieldParams;
}

void FitterBase::saveSnapshot(TString name, TString pdf){

  RooArgSet *observables = (RooArgSet*)w->set("observables");
  RooArgSet *parameters = w->pdf(pdf)->getParameters(observables);
  w->saveSnapshot(name,*parameters);
}

void FitterBase::loadSnapshot(TString name){
  w->loadSnapshot(name);
}

TCanvas* FitterBase::createCanvas(){

  int canv_w = 800;
  int canv_h = 600;
  int top_x = canvs.size()*20;
  int top_y = canvs.size()*20;
  TString canvName = Form("c%d",int(canvs.size()));

  TCanvas *c = new TCanvas(canvName,canvName,top_x,top_y,canv_w,canv_h);
  canvs.push_back(c);
  return c;
}

void FitterBase::plot(TString var, TString data, TString pdf){

  RooPlot *plot = w->var(var)->frame(Title(data));
  plot->GetXaxis()->SetTitleOffset(0.8);
  if (w->data(data)) w->data(data)->plotOn(plot);
  if (w->pdf(pdf)) w->pdf(pdf)->plotOn(plot);
  TCanvas *canv = createCanvas();
  canv->SetBottomMargin(0.2);
  plot->Draw();
  canv->Update();
  canv->Modified();
  canv->Print(Form("plots/v%s_d%s_p%s.pdf",var.Data(),data.Data(),pdf.Data()));
  canv->Print(Form("plots/v%s_d%s_p%s.png",var.Data(),data.Data(),pdf.Data()));
}

void FitterBase::plot(TString var, vector<PlotComponent> plotComps, TString fname) {

  TCanvas *canv = createCanvas();
  RooPlot *plot = w->var(var)->frame();
  TString xtitle = w->var(var)->GetTitle();
  if (TString(w->var(var)->getUnit())!=TString("")) xtitle = Form("%s (%s)",w->var(var)->GetTitle(),w->var(var)->getUnit());
  plot->GetXaxis()->SetTitle(xtitle);
  plot->GetXaxis()->SetTitleOffset(0.8);
  plot->GetYaxis()->SetTitleOffset(0.7);

  TLegend *leg = new TLegend(0.6,0.6,0.9,0.9);
  leg->SetFillColor(0);

  for (unsigned int i=0; i<plotComps.size(); i++){
    plotComps[i].plotOn(w,plot,leg);
  }

  plot->Draw();
  leg->Draw("same");
  canv->Update();
  canv->Modified();
  canv->Print(Form("plots/%s.pdf",fname.Data()));
  canv->Print(Form("plots/%s.png",fname.Data()));
}

void FitterBase::fit(TString pdf, TString data) {

  if (w->pdf(pdf) && w->data(data)) {
    w->pdf(pdf)->fitTo(*w->data(data));
  }
  saveSnapshot(Form("%s_fit",pdf.Data()),pdf);
}

void FitterBase::sfit(TString pdf_name, TString data_name) {

  // check pdf, data and yields exist
  RooAbsPdf *pdf    = w->pdf(pdf_name);
  if ( !pdf ) {
    cerr << "ERROR -- FitterBase::sfit() -- pdf name \'" << pdf_name << "\' is NULL" << endl;
  }
  RooDataSet *data  = (RooDataSet*)w->data(data_name);
  if ( !data ) {
    cerr << "ERROR -- FitterBase::sfit() -- data name \'" << data_name << "\' is NULL" << endl;
    exit(1);
  }
  RooArgSet *yields = (RooArgSet*)w->set(Form("%s_yield_params",pdf_name.Data()));
  if ( !yields ) {
    cerr << "ERROR -- FitterBase::sfit() -- yields name \'" << pdf_name << "_yield_params\' is NULL" << endl;
    exit(1);
  }
  RooArgSet *nonyields = (RooArgSet*)w->set(Form("%s_nonyield_params",pdf_name.Data()));
  if ( !yields ) {
    cerr << "ERROR -- FitterBase::sfit() -- nonyields name \'" << pdf_name << "_nonyield_params\' is NULL" << endl;
    exit(1);
  }

  pdf->fitTo(*data, Extended());
  nonyields->setAttribAll("Constant");
  RooStats::SPlot *sData = new RooStats::SPlot(Form("%s_sfit",data->GetName()),Form("%s sfit",data->GetTitle()), *data, pdf, RooArgList(*yields));
  w->import(*sData);
  //w->import(*data,Rename(Form("%s_sweight",data->GetName())));
  delete sData;
}

void FitterBase::sproject(TString data_name, TString var_name) {

  //RooDataSet *data = (RooDataSet*)w->data(data_name+"_sweight");
  RooDataSet *data = (RooDataSet*)w->data(data_name);
  if ( !data ) {
    cerr << "ERROR -- FitterBase::sproject() -- data name \'" << data_name << "\' is NULL" << endl;
    exit(1);
  }

  //RooDataSet *swdata = new RooDataSet(Form("%s_sweight_%s",data->GetName(),var_name.Data()),Form("%s sweight proj %s",data->GetTitle(),var_name.Data()), data, *data->get(),0,var_name+"_sw");
  RooDataSet *swdata = new RooDataSet(Form("%s_sweight_%s",data->GetName(),var_name.Data()),Form("%s sweight proj %s",data->GetTitle(),var_name.Data()), data, *data->get(),0,var_name+"_sw");
  w->import(*swdata);
  delete swdata;
}

void FitterBase::freeze(TString pdf){
	((RooArgSet*)w->set(Form("%s_params",pdf.Data())))->setAttribAll("Constant");
}

void FitterBase::splot(TString var, TString data){
  vector<TString> temp;
  splot(var, data, temp);
}

void FitterBase::splot(TString var, TString data, vector<TString> compDsets) {

  if (!w->data(data)) {
    cerr << "ERROR -- FitterBase::splot() -- no sweighted data exists" << endl;
    exit(1);
  }
  TCanvas *canv = createCanvas();

  TLegend *leg = new TLegend(0.6,0.6,0.9,0.9);
  leg->SetFillColor(0);
  RooPlot *splot = w->var(var)->frame();
  splot->SetTitle(Form("%s projection",w->var(var)->GetTitle()));
  splot->GetXaxis()->SetTitleOffset(0.8);
  splot->GetYaxis()->SetTitleOffset(0.7);
  TString xtitle = w->var(var)->GetTitle();
  if (TString(w->var(var)->getUnit())!=TString("")) xtitle = Form("%s (%s)",w->var(var)->GetTitle(),w->var(var)->getUnit());
  splot->GetXaxis()->SetTitle(w->var(var)->GetTitle());

  w->data(data)->plotOn(splot);
  RooHist *dh = (RooHist*)splot->getObject(splot->numItems()-1);
  leg->AddEntry(dh,w->data(data)->GetTitle(),"LEP");
  storeSPlotProjection(dh,Form("%s_v%s",data.Data(),var.Data()));

  vector<RooHist*> compHists;
  for (unsigned int i=0; i<compDsets.size(); i++){
    TString dset = compDsets[i];
    w->data(dset)->plotOn(splot,MarkerColor(colors[i]),LineColor(colors[i]),Rescale(w->data(data)->sumEntries()/w->data(dset)->sumEntries()));
    RooHist *sh = (RooHist*)splot->getObject(splot->numItems()-1);
    leg->AddEntry(sh,w->data(dset)->GetTitle(),"LEP");
    compHists.push_back(sh);
    storeSPlotProjection(sh,Form("%s_v%s",dset.Data(),var.Data()));
    storeSPlotRatio(dh,sh,Form("resid_%s_o_%s_v%s",data.Data(),dset.Data(),var.Data()));
  }

  splot->Draw();
  leg->Draw("same");
  canv->Update();
  canv->Modified();
  canv->Print(Form("plots/splot_v%s.pdf",var.Data()));
  canv->Print(Form("plots/splot_v%s.png",var.Data()));

  TCanvas *canvResid = createCanvas();
  for (unsigned int i=0; i<compHists.size(); i++){
    RooHist *residHist = new RooHist(*dh,*compHists[i],1.,-1.,RooAbsData::SumW2);
    residHist->SetTitle("Residual");
    residHist->GetYaxis()->SetTitle("Data-MC");
    residHist->GetXaxis()->SetTitle(xtitle);
    residHist->GetXaxis()->SetTitleOffset(0.8);
    residHist->GetYaxis()->SetTitleOffset(0.7);
    residHist->SetLineColor(colors[i]);
    residHist->SetMarkerColor(colors[i]);
    if (i==0) {
      residHist->Draw();
    }
    else {
      residHist->Draw("same");
    }
    residHist->SetDrawOption("AP");
    canvResid->Update();
    canvResid->Modified();
  }
  TLine *l = new TLine();
  l->SetLineColor(kBlack);
  l->SetLineStyle(kDashed);
  l->SetLineWidth(3);
  l->DrawLine(w->var(var)->getMin(),0.,w->var(var)->getMax(),0.);
  canvResid->Update();
  canvResid->Modified();
  canvResid->Print(Form("plots/splot_resid_v%s.pdf",var.Data()));
  canvResid->Print(Form("plots/splot_resid_v%s.png",var.Data()));

}

void FitterBase::storeSPlotProjection(RooHist *rh, TString name){

  TGraphAsymmErrors *gr = new TGraphAsymmErrors();
  gr->SetName(name);
  double x,y;
  for (int p=0; p<rh->GetN(); p++){
    rh->GetPoint(p,x,y);
    gr->SetPoint(p,x,y);
    gr->SetPointError(p,rh->GetErrorXlow(p),rh->GetErrorXhigh(p),rh->GetErrorYlow(p),rh->GetErrorYhigh(p));
  }
  saveObjsStore.push_back(gr);

}

void FitterBase::storeSPlotRatio(RooHist *h1, RooHist *h2, TString name){

  if (h1->GetN()!=h2->GetN()){
    cerr << "ERROR -- FitterBase::storeSPlotRatio() -- two histograms do not have same number of points" << endl;
    exit(1);
  }

  TGraphAsymmErrors *gr = new TGraphAsymmErrors();
  gr->SetName(name);
  double x1, y1, x2, y2;
  for (int p=0; p<h1->GetN(); p++){
    h1->GetPoint(p,x1,y1);
    h2->GetPoint(p,x2,y2);
    assert(Abs(x1-x2)<0.001);
    double val = y1/y2;
    double y1errL = h1->GetErrorYlow(p);
    double y1errH = h1->GetErrorYhigh(p);
    double y2errL = h2->GetErrorYlow(p);
    double y2errH = h2->GetErrorYhigh(p);
    double errL = val * Sqrt( (y1errL/y1)*(y1errL/y1) + (y2errL/y2)*(y2errL/y2)  );
    double errH = val * Sqrt( (y1errH/y1)*(y1errH/y1) + (y2errH/y2)*(y2errH/y2)  );
    if (Abs(y1)<1.e-3 || Abs(y2)<1.e-3) {
      val = 1.;
      errL = 10.;
      errH = 10.;
    }
    gr->SetPoint(p,x1,val);
    gr->SetPointError(p,h1->GetErrorXlow(p),h1->GetErrorXhigh(p),errL,errH);
  }
  saveObjsStore.push_back(gr);
}

void FitterBase::setCutBranchAddresses(TTree *tree) {
  // doubles
  for (map<TString,double>::iterator it = values_d.begin(); it != values_d.end(); it++){
    it->second = -999.;
    tree->SetBranchAddress(it->first, &it->second);
  }
  // floats
  for (map<TString,float>::iterator it = values_f.begin(); it != values_f.end(); it++){
    it->second = -999.;
    tree->SetBranchAddress(it->first, &it->second);
  }
  // ints
  for (map<TString,int>::iterator it = values_i.begin(); it != values_i.end(); it++){
    it->second = -999;
    tree->SetBranchAddress(it->first, &it->second);
  }
  // bools
  for (map<TString,bool>::iterator it = values_b.begin(); it != values_b.end(); it++){
    it->second = 0;
    tree->SetBranchAddress(it->first, &it->second);
  }
}

bool FitterBase::passesCuts() {
  // doubles
  for (map<TString,double>::iterator it = values_d.begin(); it != values_d.end(); it++){
    if (it->second < cut_value_d[it->first].first ) return false;
    if (it->second > cut_value_d[it->first].second ) return false;
  }
  // floats
  for (map<TString,float>::iterator it = values_f.begin(); it != values_f.end(); it++){
    if (it->second < cut_value_f[it->first].first ) return false;
    if (it->second > cut_value_f[it->first].second ) return false;
  }
  // ints
  for (map<TString,int>::iterator it = values_i.begin(); it != values_i.end(); it++){
    if (it->second < cut_value_i[it->first].first ) return false;
    if (it->second > cut_value_i[it->first].second ) return false;
  }
  // bools
  for (map<TString,bool>::iterator it = values_b.begin(); it != values_b.end(); it++){
    if (it->second != cut_value_b[it->first] ) return false;
  }
  return true;
}
