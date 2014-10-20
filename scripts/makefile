
USERINCLUDES += -I$(ROOTSYS)/include
USERINCLUDES += -I$(ROOFITSYS)/include
USERINCLUDES += -I$(BOOSTPATH)/include
USERLIBS += -L$(ROOTSYS)/lib -lRooFit -lRooFitCore -lRooStats
USERLIBS += $(shell root-config --glibs) -lTMVA -lMinuit -lFoam -lRooFit -lRooFitCore -lRooStats
CXXFLAGS = -Wall -g #-Wl,-rpath=$(BASEDIR)/lib
LDFLAGS = -shared -W -g

CXX=g++
LD=g++

all:
	$(CXX) $(CXXFLAGS) -o mcclass $(USERLIBS) $(USERINCLUDES) MCClass.cc execute.cpp
