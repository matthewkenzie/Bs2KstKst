import ROOT as r

namingDict = { '2011_MagDown' : 'input/PIDHists_Strip20r1_MagDown.root',
               '2011_MagUp'   : 'input/PIDHists_Strip20r1_MagUp.root',
               '2012_MagDown' : 'input/PIDHists_Strip20_MagDown.root',
               '2012_MagUp'   : 'input/PIDHists_Strip20_MagUp.root'
             }

tf = r.TFile('input/PIDHists.root','RECREATE')

for name, file in namingDict.items():
  inf = r.TFile.Open(file)
  dir = inf.Get('DEFAULT')
  newdir = dir.Clone(name)
  tf.cd()
  newdir.Write()
  inf.Close()

tf.Close()
