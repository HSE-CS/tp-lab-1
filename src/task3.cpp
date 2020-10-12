#include "task3.h"

static bool checkPrime(unsigned long long value)
{
    if (value == 1)
        return false;
    if (value == 2)
        return true;
    for (auto i = 2; i <= sqrt(value); i++)
    {
        if (value % i == 0)
            return false;
    }
    return true;
}

unsigned long long sumPrime(unsigned long long hbound)
{
    unsigned long long ans = 0;
    for (auto i = 1; i < hbound; i++)
    {
        if (checkPrime(i))
            ans += i;
    }
    return ans;
}

