#include "ProcessInputAndSend.h"

void (*GetParameters)(void) = GenerateRandParams;

void SendDataToConsole(void)
{
  (*GetParameters)();
  const tyBatteryParams_t* SensorParams = GetSensorArrayParameters();
  for(unsigned int DataSet = 0; DataSet < 50; ++DataSet)
  {
    /*The data will be output in console as following example
    
      3.7 -This represents voltage of the battery
      -3.2 - This represnts current (- means discharge, + means charge)
      
      3.9
      +0.1
      
      4.1
      +0.1
      
      This way, it will be easy for the receiver to read the data by simply reading lines
      and next line carriage for the next dataset
    */
    printf("%f\n%f\n\n",SensorParams[DataSet].BattVoltage,SensorParams[DataSet].BattCurrent); 
  }
}
