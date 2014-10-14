///////////////////////////////////////
// PIDCalibBranches.h                //
// Author: Matthew Kenzie            //
// Auto-generated                    //
///////////////////////////////////////

#ifndef PIDCalibBranches_h
#define PIDCalibBranches_h
#include "../interface/BranchDef.h"

class PIDCalibBranches : public BranchDef {

	public:                                                                     
                                                                             
		PIDCalibBranches(); 																                               			
		~PIDCalibBranches(); 		                                                							 	
                                                                             
		virtual void initialiseVariables(Looper *l); 															
		virtual void cleanVariables(Looper *l); 							 										
		virtual void setInputBranches(Looper *l, TTree *tree); 										
		virtual void setOutputBranches(Looper *l, TTree *tree); 									


};

#endif
