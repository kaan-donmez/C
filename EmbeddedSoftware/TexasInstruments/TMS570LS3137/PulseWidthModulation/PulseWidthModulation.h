#ifndef APPLICATION_PULSEWIDTHMODULATION_PULSEWIDTHMODULATION_H_
#define APPLICATION_PULSEWIDTHMODULATION_PULSEWIDTHMODULATION_H_

#include "het.h"

#define PWMHANDLER hetRAM1

void InitiliazePwm();
void SetPwmDutyCycle(uint32 pwmDuty);
void setPwmFequency(uint32 pwmDuty, float64 pwmPeriod);

#endif /* APPLICATION_PULSEWIDTHMODULATION_PULSEWIDTHMODULATION_H_ */
