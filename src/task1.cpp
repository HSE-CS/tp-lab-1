#include "task1.h"

unsigned long findValue(unsigned int min,unsigned max)
{
    unsigned long ans = 1;
    for (auto i = min; i <= max; i++)
    {
        ans = LCM(ans, i);
    }
    return ans;
}
static unsigned long GCD(unsigned long a, unsigned long b)
{
    if (a < b)
    {
        swap(a, b);
    }
    while (true)
    {
        if (a % b == 0)
        {
            return b;
        }
        a %= b;
        if (a < b)
        {
            swap(a, b);
        }
    }
}

static unsigned long LCM(unsigned long a, unsigned long b)
{
    return a * b / GCD(a, b);
}

