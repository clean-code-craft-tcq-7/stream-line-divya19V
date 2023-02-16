#include "GenerateSensorData.h"
#include <stdio.h>
#include <stdlib.h>

const unsigned int BufferSizePerSession = 50U;
const unsigned int UpperBoundaryVoltage = 43U, LowerBoundaryVoltage = 29U;
const unsigned int UpperBoundaryCurrent = 100U;

static tyBatteryParams_t BattParamBuffer[BufferSizePerSession];
tyBatteryParams_t* const BattParamPointer = BattParamBuffer;

void GenerateRandParams(void)
{
  
}

void GetSensorParamsFromFile(void)
{

}

}
