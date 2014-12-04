#!/usr/bin/env python

import ROOT as r

r.gROOT.ProcessLine('.x ~/Scratch/lhcb/lhcbStyle.C')

r.TH1.SetDefaultSumw2()

tf = r.TFile('CutBasedFitterOut.root')
w = tf.Get('w')

canvs = []

def dsetToHist(name,w,data,var, bins=-1,low=-1.,high=-1., reweightVar=None, reweightHist=None):

  if bins==-1: bins = w.var(var).getBins()
  if low<0:    low  = w.var(var).getMin()
  if high<0:   high = w.var(var).getMax()

  th1f = r.TH1F(name,'',bins,low,high)
  th1f.GetXaxis().SetTitle(w.var(var).GetTitle())
  th1f.GetXaxis().SetTitleOffset(0.85)
  for ev in range(w.data(data).numEntries()):
    value = w.data(data).get(ev).getRealValue(var)
    weight = w.data(data).weight()
    if reweightVar and reweightHist:
      reweightValue = w.data(data).get(ev).getRealValue(reweightVar)
      reweightWeight = reweightHist.GetBinContent(reweightHist.FindBin(reweightValue))
      weight *= reweightWeight
    th1f.Fill(value,weight)
  return th1f

def plotDataMCDiff(var,bins=-1,low=-1.,high=-1., reweightVar=None, withReweight=False, reweightHist=None):
  canvs.append(r.TCanvas())
  leg = r.TLegend(0.6,0.6,0.89,0.89)
  dataH = dsetToHist('th1f_data_'+var,w,'Data_sweight_sig_y',var,bins,low,high)
  mcH   = dsetToHist('th1f_mc_'+var,  w,'MC',var,bins,low,high)
  dataH.Scale(1./dataH.Integral())
  mcH.Scale(1./mcH.Integral())
  dataH.SetMarkerStyle(r.kFullCircle)
  mcH.SetLineColor(r.kRed)
  mcH.SetLineWidth(2)
  mcH.Draw("HIST")

  leg.AddEntry(mcH,'MC Raw','L')

  if withReweight:
    if not reweightHist:
      reweightHist = dataH.Clone('th1f_reweight_'+var)
      reweightHist.Divide(mcH)
    mcrwH = dsetToHist('th1f_mc_rw_'+var,w,'MC',var,bins,low,high,reweightVar,reweightHist)
    mcrwH.Scale(1./mcrwH.Integral())
    mcrwH.SetMarkerStyle(r.kFullCircle)
    mcrwH.SetLineColor(r.kBlue)
    mcrwH.SetLineWidth(2)
    mcrwH.SetLineStyle(r.kDashed)
    mcrwH.SetMarkerStyle(r.kBlue)
    mcrwH.Draw("HISTsame")
    leg.AddEntry(mcrwH,'MC Reweight','L')

  leg.AddEntry(dataH,'Data','LEP')
  leg.Draw("same")
  dataH.Draw("LEPsame")
  canvs[-1].Update()
  canvs[-1].Modified()

  canvs[-1].Print("plots/tr_rw_%s.pdf"%var)
  return reweightHist

plotDataMCDiff('B_s0_MM')
rwH = plotDataMCDiff('max_track_chi2',30,0,3, 'max_track_chi2', True)

plotDataMCDiff('Kplus_ProbNNkcorr',25,0,1, 'max_track_chi2', True, rwH)
plotDataMCDiff('Kminus_ProbNNkcorr',25,0,1, 'max_track_chi2', True, rwH)
plotDataMCDiff('Piplus_ProbNNkcorr',25,0,1, 'max_track_chi2', True, rwH)
plotDataMCDiff('Piminus_ProbNNkcorr',25,0,1,'max_track_chi2', True, rwH)

outf = r.TFile('input/track_chi2_weights.root','RECREATE')
rwH.SetName('track_chi2_weights')
rwH.Write()
outf.Close()
raw_input()
