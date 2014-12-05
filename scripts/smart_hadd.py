#!/usr/bin/env python

import os
import sys

dir = sys.argv[1]
indiv_names = {}

for root, dirs, files in os.walk(dir):
  for f in files:
    if f.endswith('.root'):
      fname = os.path.join(root,f.split('_j')[0])
      f = os.path.join(root,f)
      if fname in indiv_names.keys():
        indiv_names[fname].append(f)
      else:
        indiv_names[fname] = [ f ]

for name, files in indiv_names.items():
  hadd_str = 'hadd %s.root'%name
  print name
  files.sort()
  for f in files:
    print '\t --', f
    hadd_str += ' %s'%f

  os.system(hadd_str)

