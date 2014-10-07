/////////////////////////////////////
//                                 //
// ApplyPIDCorrection.cc              	 //
// Author: Matthew Kenzie          //
// Auto-generated                  //
// Will execute analysis pre-sel   //
//                                 //
/////////////////////////////////////

#include "TMath.h"

#include "../interface/ApplyPIDCorrection.h"

using namespace std;

ApplyPIDCorrection::ApplyPIDCorrection(TString _name):
	BaseAnalyser(_name)
{}

ApplyPIDCorrection::~ApplyPIDCorrection(){

	// clean up operation
	for (map<int,map<TString,map<TString,TH1D*> > >::iterator it1=reweightVarHists.begin(); it1!=reweightVarHists.end(); it1++){
		for (map<TString,map<TString,TH1D*> >::iterator it2=it1->second.begin(); it2!=it1->second.end(); it2++){
			for (map<TString,TH1D*>::iterator it3=it2->second.begin(); it3!=it2->second.end(); it3++){
				delete it3->second;
			}
		}
	}
	for (map<int,map<TString,map<TString,TH1D*> > >::iterator it1=pidVarHists.begin(); it1!=pidVarHists.end(); it1++){
		for (map<TString,map<TString,TH1D*> >::iterator it2=it1->second.begin(); it2!=it1->second.end(); it2++){
			for (map<TString,TH1D*>::iterator it3=it2->second.begin(); it3!=it2->second.end(); it3++){
				delete it3->second;
			}
		}
	}
	for (map<int,map<TString,THnSparseD*> >::iterator it1=sparse.begin(); it1!=sparse.end(); it1++){
		for (map<TString,THnSparseD*>::iterator it2=it1->second.begin(); it2!=it1->second.end(); it2++){
			delete it2->second;
		}
	}

}

void ApplyPIDCorrection::Init(Looper *l){
	cout << Form("%-30s","ApplyPIDCorrection::Init()") << " " << "Initialising Analyser (" << name << ")." << endl;

	reweightVars.push_back("P");
	reweightVars.push_back("ETA");
	reweightVars.push_back("nTracks");

	particles.push_back("K");
	particles.push_back("Pi");

	pids.push_back("ProbNNK");
	pids.push_back("ProbNNpi");

	pidFiles.push_back("input/PIDHists_Strip20r1_MagDown.root");
	pidFiles.push_back("input/PIDHists_Strip20r1_MagUp.root");
	pidFiles.push_back("input/PIDHists_Strip20_MagDown.root");
	pidFiles.push_back("input/PIDHists_Strip20_MagUp.root");

	// relate itype to file index
	itypeToFileMap.insert(make_pair(-71,0));
	itypeToFileMap.insert(make_pair(-72,1));
	itypeToFileMap.insert(make_pair(-73,0));
	itypeToFileMap.insert(make_pair(-74,1));
	itypeToFileMap.insert(make_pair(-81,2));
	itypeToFileMap.insert(make_pair(-82,3));
	itypeToFileMap.insert(make_pair(-83,2));
	itypeToFileMap.insert(make_pair(-84,3));

	loadHistograms();
}

void ApplyPIDCorrection::Term(Looper *l){
	cout << Form("%-30s","ApplyPIDCorrection::Term()") << " " << "Terminating Analyser (" << name << ")." << endl;
}

bool ApplyPIDCorrection::AnalyseEvent(Looper *l){

	// MC only
	if ( l->itype < 0 ) {

		int fInd = getFileIndexFromType(l->itype);
		*l->Kplus_ProbNNkcorr = getResampledPID(*l->Kplus_P,0.5*TMath::Log( ( *l->Kplus_P + *l->Kplus_PZ ) / ( *l->Kplus_P - *l->Kplus_PZ) ),*l->nTracks,fInd,"K","ProbNNK",*l->Kplus_ProbNNk);
		*l->Kminus_ProbNNkcorr = getResampledPID(*l->Kminus_P,0.5*TMath::Log( ( *l->Kminus_P + *l->Kminus_PZ ) / ( *l->Kminus_P - *l->Kminus_PZ) ),*l->nTracks,fInd,"K","ProbNNK",*l->Kminus_ProbNNk);
		*l->Piplus_ProbNNkcorr = getResampledPID(*l->Piplus_P,0.5*TMath::Log( ( *l->Piplus_P + *l->Piplus_PZ ) / ( *l->Piplus_P - *l->Piplus_PZ) ),*l->nTracks,fInd,"Pi","ProbNNK",*l->Piplus_ProbNNk);
		*l->Piminus_ProbNNkcorr = getResampledPID(*l->Piminus_P,0.5*TMath::Log( ( *l->Piminus_P + *l->Piminus_PZ ) / ( *l->Piminus_P - *l->Piminus_PZ) ),*l->nTracks,fInd,"Pi","ProbNNK",*l->Piminus_ProbNNk);

		*l->Kplus_ProbNNpicorr = getResampledPID(*l->Kplus_P,0.5*TMath::Log( ( *l->Kplus_P + *l->Kplus_PZ ) / ( *l->Kplus_P - *l->Kplus_PZ) ),*l->nTracks,fInd,"K","ProbNNpi",*l->Kplus_ProbNNpi);
		*l->Kminus_ProbNNpicorr = getResampledPID(*l->Kminus_P,0.5*TMath::Log( ( *l->Kminus_P + *l->Kminus_PZ ) / ( *l->Kminus_P - *l->Kminus_PZ) ),*l->nTracks,fInd,"K","ProbNNpi",*l->Kminus_ProbNNpi);
		*l->Piplus_ProbNNpicorr = getResampledPID(*l->Piplus_P,0.5*TMath::Log( ( *l->Piplus_P + *l->Piplus_PZ ) / ( *l->Piplus_P - *l->Piplus_PZ) ),*l->nTracks,fInd,"Pi","ProbNNpi",*l->Piplus_ProbNNpi);
		*l->Piminus_ProbNNpicorr = getResampledPID(*l->Piminus_P,0.5*TMath::Log( ( *l->Piminus_P + *l->Piminus_PZ ) / ( *l->Piminus_P - *l->Piminus_PZ) ),*l->nTracks,fInd,"Pi","ProbNNpi",*l->Piminus_ProbNNpi);

	}
	// Data only
	//if ( l->itype > 0 ) {
	//}

	return true;
}

int ApplyPIDCorrection::getFileIndexFromType(int type){
	return itypeToFileMap[type];
}

void ApplyPIDCorrection::loadHistograms(){

	cout << Form("%-30s","ApplyPIDCorrection::loadHistograms()") << " " << "Loading histograms" << endl;
	// clone everything so that file can be closed
	// we then own the memory and can safely delete it at the end

	// loop over the PID files
	for (unsigned int f=0; f<pidFiles.size(); f++){
		TFile *tf = TFile::Open(pidFiles[f]);

		// within each file loop over the particle to reweight (K's and pi's)
		for (unsigned int p=0; p<particles.size(); p++){

			// loop over the reweight vars (P, ETA, nTracks)
			for (unsigned int v=0; v<reweightVars.size(); v++){
				reweightVarHists[f][particles[p]][reweightVars[v]] = (TH1D*)(tf->Get(Form("DEFAULT/%s/H1D_%s",particles[p].Data(),reweightVars[v].Data()))->Clone());
				reweightVarHists[f][particles[p]][reweightVars[v]]->SetName(Form("f%d_p%s_%s",f,particles[p].Data(),reweightVars[v].Data()));
				reweightVarHists[f][particles[p]][reweightVars[v]]->SetDirectory(0);
			}

			// loop over the pid vars (ProbNNK, ProbNNpi)
			for (unsigned int pid=0; pid<pids.size(); pid++){
				pidVarHists[f][particles[p]][pids[pid]] = (TH1D*)(tf->Get(Form("DEFAULT/%s/H1D_%s",particles[p].Data(),pids[pid].Data()))->Clone());
				pidVarHists[f][particles[p]][pids[pid]]->SetName(Form("f%d_p%s_%s",f,particles[p].Data(),pids[pid].Data()));
				pidVarHists[f][particles[p]][pids[pid]]->SetDirectory(0);
			}

			// get the sparse
			sparse[f][particles[p]] = (THnSparseD*)(tf->Get(Form("DEFAULT/%s/histo_PID",particles[p].Data()))->Clone());
			sparse[f][particles[p]]->SetName(Form("histo_PID_f%d_%s",f,particles[p].Data()));
		}
		tf->Close();
		delete tf;
	}

}

double ApplyPIDCorrection::getResampledPID(double P, double ETA, double nTracks, int fInd, TString part, TString pidVar, double originalPID) {

	int bin_P = reweightVarHists[fInd][part]["P"]->FindBin(P);
	int bin_ETA = reweightVarHists[fInd][part]["ETA"]->FindBin(ETA);
	int bin_nTracks = reweightVarHists[fInd][part]["nTracks"]->FindBin(nTracks);

	// set projection range
	sparse[fInd][part]->GetAxis(0)->SetRange(bin_P,bin_P);
	sparse[fInd][part]->GetAxis(1)->SetRange(bin_ETA,bin_ETA);
	sparse[fInd][part]->GetAxis(2)->SetRange(bin_nTracks,bin_nTracks);

	TObjArray *objArr = sparse[fInd][part]->GetListOfAxes();
	int varInd = objArr->IndexOf(objArr->FindObject(pidVar));
	TH1D* samplingHist = sparse[fInd][part]->Projection(varInd);

	double resampledPID = originalPID;
	if (samplingHist->GetNbinsX()>0 && samplingHist->ComputeIntegral()>0) {
		resampledPID = samplingHist->GetRandom();
	}

	delete samplingHist;

	return resampledPID;


}
