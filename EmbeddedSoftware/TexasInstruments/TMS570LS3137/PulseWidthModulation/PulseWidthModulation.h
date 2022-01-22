#ifndef __PULSE_WIDTH_MODULATION__
#define __PULSE_WIDTH_MODULATION__

#include "het.h"

#define PWMHANDLER hetRAM1

void InitiliazePwm();
void SetPwmDutyCycle(uint32 pwmDuty);
void setPwmFequency(uint32 pwmDuty, float64 pwmPeriod);

#endif /* __PULSE_WIDTH_MODULATION__ */
