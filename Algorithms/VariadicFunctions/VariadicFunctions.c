#include "VariadicFunctions.h"

/*
 * @brief This function is a interface for variadic function.
 * @param n : input data.
 *      ... : next data.
 */
uint32_t VariadicFunction(int n, ...)
{
    uint32_t value;
    va_list ptr;

    va_start(ptr, n);

    for (int i = 0; i < n; i++)
    {
        //Write code here
    }

    va_end(ptr);

    return value;
}
