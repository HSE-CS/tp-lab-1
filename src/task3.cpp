#include "task3.h"
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>


unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long sum = 0;
    int cheked = 0;
    unsigned long long now = 0;
    while (now < hbound)
    {
        now = nextPrime(now);
        sum += now;
    }
    return sum;
}

unsigned long long nextPrime(unsigned long long value)
{
    unsigned long long k = value + 1;
    while (!checkPrime(k))
        k++;
    return k;
}

bool checkPrime(unsigned int value)
{
    if (value <= 1)
        return 0;

    for (int i = 2; i <= sqrt(value); i++)
        if (value % i == 0)
            return false;
    return true;
}