#include "task1.h"


unsigned long findValue(unsigned int min, unsigned int max)
{
    for (long long i = min; ; i++)
    {
        int n = 0;
        for (unsigned int j = min; j <= max; j++)
        {
            if (i % j != 0)
            {
                n = 1;
                break;
            }
        }
        if (n == 0)
        {
            return i;
        }
    }
}