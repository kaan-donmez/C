#include "Delay.h"

/*
 * @brief This function provides a delay in milliseconds.
 * @param count delay time in milisecond.
 */
void DelayMs(unsigned int count)
{
    count = count * 10000;
    register unsigned int i;
    for (i = 0; i < count; i++)
        ;
}
