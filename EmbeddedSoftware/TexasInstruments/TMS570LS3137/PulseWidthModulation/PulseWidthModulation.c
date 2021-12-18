#include "PulseWidthModulation.h"

hetSIGNAL_t pwmSignal;

void InitiliazePwm()
{
    hetInit();
}

void SetPwmDutyCycle(uint32 pwmDuty)
{
    pwmSetDuty(PWMHANDLER, pwm0, pwmDuty);
}

void setPwmFequency(uint32 pwmDuty, float64 pwmPeriod)
{
    pwmSignal.duty = pwmDuty;
    pwmSignal.period = pwmPeriod;
    pwmSetSignal(PWMHANDLER, pwm0, pwmSignal);
}
