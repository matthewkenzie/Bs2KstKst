import os
import ROOT as r

import sys

fileDict = {
      'MC2011_HighMass_magDown'  : 'ntuples/Bs2Kst0Kst01430_wide_MC2011_magnetDown_Job13.root',
      'MC2011_HighMass_magUp'    : 'ntuples/Bs2Kst0Kst01430_wide_MC2011_magnetUp_Job12.root',
      'MC2012_HighMass_magDown'  : 'ntuples/Bs2Kst0Kst01430_wide_MC2012_magnetDown_Job15.root',
      'MC2012_HighMass_magUp'    : 'ntuples/Bs2Kst0Kst01430_wide_MC2012_magnetUp_Job14.root',
      'MC2011_LowMass_magDown'   : 'ntuples/Bs2Kst0Kst0_wide_MC2011_magnetDown_Job7.root',
      'MC2011_LowMass_magUp'     : 'ntuples/Bs2Kst0Kst0_wide_MC2011_magnetUp_Job6.root',
      'MC2012_LowMass_magDown'   : 'ntuples/Bs2Kst0Kst0_wide_MC2012_magnetDown_Job11.root',
      'MC2012_LowMass_magUp'     : 'ntuples/Bs2Kst0Kst0_wide_MC2012_magnetUp_Job10.root'
    }

pidDict = {
      'MC2011_HighMass_magDown'  : 'PIDHists_Strip20r1_MagDown',
      'MC2011_HighMass_magUp'    : 'PIDHists_Strip20r1_MagUp',
      'MC2012_HighMass_magDown'  : 'PIDHists_Strip20_MagDown',
      'MC2012_HighMass_magUp'    : 'PIDHists_Strip20_MagUp',
      'MC2011_LowMass_magDown'   : 'PIDHists_Strip20r1_MagDown',
      'MC2011_LowMass_magUp'     : 'PIDHists_Strip20r1_MagUp',
      'MC2012_LowMass_magDown'   : 'PIDHists_Strip20_MagDown',
      'MC2012_LowMass_magUp'     : 'PIDHists_Strip20_MagUp'
    }

def configureJobSplitting(fname,tname,splitJobs):

  tf = r.TFile.Open(fname)
  tree = tf.Get(tname)
  if not tree:
    sys.exit('Tree %s does not exist in file %s'%(tname,fname))

  nentries = tree.GetEntries()
  tf.Close()

  splittingOpts = {}

  nJobs = int(r.TMath.Ceil(float(nentries)/splitJobs))

  for j in range(nJobs):
    firstEntry = splitJobs*j
    lastEntry = splitJobs*(j+1)
    if lastEntry > nentries:
      lastEntry = nentries
    splittingOpts[j] = (firstEntry,lastEntry)

  print 'Splitting file:', fname, 'into', len(splittingOpts.keys()), 'jobs'
  for key, item in splittingOpts.items():
    print  '\t', '[',item[0],'-',item[1], ']'

  return splittingOpts


def writeScript(dir, name, jobN, infile, outfile, pidDir, first, last):

  os.system('mkdir -p %s/%s'%(os.getcwd(),dir))
  f = open('%s/%s/%s_j%d.sh'%(os.getcwd(),dir,name,jobN),'w')
  f.write('#!/bin/bash\n')
  f.write('touch %s.run\n'%f.name)
  f.write('rm -f %s.fail\n'%f.name)
  f.write('rm -f %s.done\n'%f.name)
  f.write('rm -f %s.log\n'%f.name)
  f.write('mkdir -p scratch\n')
  f.write('cd scratch\n')
  f.write('cp %s/mcclass .\n'%(os.getcwd()))
  f.write('cp %s/PIDHists.root .\n'%(os.getcwd()))
  f.write('cp %s/%s .\n'%(os.getcwd(),infile))
  f.write('cp %s/../setup_lxplus.sh .\n'%os.getcwd())
  f.write('cd %s\n'%os.getcwd())
  f.write('source /afs/cern.ch/group/z5/group_login.sh\n')
  f.write('source setup_lxplus.sh\n')
  f.write('cd -\n')
  exec_line = './mcclass %s %s %s %d %d'%(os.path.basename(infile),outfile,pidDir,first,last)
  f.write('if ( %s ) then\n'%exec_line)
  f.write('\tcp %s %s/%s/\n'%(outfile,os.getcwd(),dir))
  f.write('\ttouch %s.done\n'%f.name)
  f.write('else\n')
  f.write('\ttouch %s.fail\n'%f.name)
  f.write('fi\n')
  f.write('rm -f %s.run\n'%f.name)
  f.close()
  os.system('chmod +x %s'%f.name)
  if len(sys.argv)>1:
    print 'bsub -q %s -o %s.log %s'%(sys.argv[1],f.name,f.name)
    os.system('bsub -q %s -o %s.log %s'%(sys.argv[1],f.name,f.name))


for name, file in fileDict.items():

  pidDir = pidDict[name]
  jobsplitting = configureJobSplitting(file,'Bs2Kst0Kst0/DecayTree',1000)

  for job, jrange in jobsplitting.items():
    dir = 'sub'
    outfile = '%s_j%d.root'%(name,job)

    writeScript(dir,name,job,file,outfile,pidDir,jrange[0],jrange[1])
