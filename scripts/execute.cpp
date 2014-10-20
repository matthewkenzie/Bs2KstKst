#include <cstdlib>
#include <iostream>
#include "MCClass.h"
#include "TFile.h"
#include "TTree.h"

using namespace std;

int main(int argc, char *argv[]) {

  if (argc!=4 && argc!=6) {
    cout << "Pass 3 options: <infilename> <outfilename> <pidhistdir> <first> <last>" << endl;
    exit(0);
  }

  Long64_t first = -1;
  Long64_t last = -1;
  if (argc==6) {
    int tempFirst = atoi(argv[4]);
    int tempLast = atoi(argv[5]);
    first = tempFirst;
    last = tempLast;
  }

  TFile *tf = TFile::Open(argv[1]);
  TTree *tree = (TTree*)tf->Get("Bs2Kst0Kst0/DecayTree");

  MCClass mc(tree,argv[2]);
  mc.Loop(argv[3],first,last);
  mc.Save();

  return 0;
}
