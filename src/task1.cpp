#include <iostream>
#include "task1.h"

using namespace std;

unsigned long findValue(unsigned int min, unsigned max)
{
    unsigned int ans = 1;
    for (unsigned int i = min; i <= max; ++i)
    {
        ans = lcm(ans, i);
    }
    return ans;
}

unsigned long lcm(unsigned int ans, unsigned int i)
{
    unsigned long j = 1;
    while (1<2)
    {
        if (j % ans == 0 && j % i == 0)
        {
            return j;
        }
        j++;
    }
    return 0;
}
