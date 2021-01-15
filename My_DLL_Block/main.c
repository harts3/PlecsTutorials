#include "DllHeader.h"


DLLEXPORT void plecsSetSizes(struct SimulationSizes* aSizes)
{
   aSizes->numInputs = 0;
   aSizes->numOutputs = 0;
   aSizes->numStates = 0;
   aSizes->numParameters = 0; //number of user parameters passed in
}


//This function is automatically called at the beginning of the simulation
DLLEXPORT void plecsStart(struct SimulationState* aState)
{
	//Example error message box
	//if (aState->parameters[0] < 0 )
	//	aState->errorMessage = "kp cannot be less than 0";
		
}


//This function is automatically called every sample time
//output is written to DLL output port after the output delay
DLLEXPORT void plecsOutput(struct SimulationState* aState)
{
	
}
