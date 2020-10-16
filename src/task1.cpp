#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
    unsigned int value = max - 1;
    while (1)
    {
        value++;
        for (int i = min; i <= max; ++i)
            if (value % i)
                break;
            else if (i == max)
                return value;
    }
};