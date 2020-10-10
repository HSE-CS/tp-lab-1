#include "task2.h"
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>



bool checkPrime(unsigned int value)
{
    if (value <= 1)
        return 0;

    for (int i = 2; i <= sqrt(value); i++)
        if (value % i == 0)
            return false;
    return true;
}

unsigned long long nPrime(unsigned n)
{
    unsigned long long c = 0, k = 0;
    while (true) 
    {
        if (c < n) 
        {
            if (checkPrime(k++)) 
            {
                c++;
            }
        }
        else 
        {
            break;
        }
    }
    return --k;
}

unsigned long long nextPrime(unsigned long long value)
{
    unsigned long long k = value + 1;
    while (!checkPrime(k))
        k++;
    return k;
}