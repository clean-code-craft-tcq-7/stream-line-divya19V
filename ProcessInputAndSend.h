
#ifndef PROCESSINPUTANDSEND_H
#define PROCESSINPUTANDSEND_H

#include "GenerateSensorData.h"
#include <stdio.h>

enum enumParamType {
  PARAM_VOLTAGE,
  PARAM_CURRENT
}

void ChangeTheGetParamType(void (*GetTypeFunction)());
float GetElement(const unsigned int ArrayElement,enumRequestParam Parameter);

void SendDataToConsole(void);

#endif
