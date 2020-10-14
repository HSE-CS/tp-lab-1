#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
    unsigned long value = max - 1;
    bool flag = true;
    while (flag)
    {
        value++;
        for (unsigned i = min; i <= max; ++i)
            if (value % i)
                break;
            else if (i == max)
                flag = false;
    }
    return value;
};