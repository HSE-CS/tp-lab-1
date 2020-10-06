#include <iostream>
#include "task2.h"
#include <cmath>

using namespace std;

bool checkPrime(unsigned int value)
{
    for(unsigned int i = 2; i <= sqrt(value); i++)
        if(value % i == 0)
            return false;
    return true;
}

unsigned long long nPrime(unsigned n)
{
    unsigned num = 0;
    for (unsigned int i = 2; num != n; ++i)
    {
        if (checkPrime(i))
            num++;
        if (num == n)
            return i;
    }
}

unsigned long long nextPrime(unsigned long long value)
{
    for (++value; true; ++value)
        if (checkPrime(value))
            return value;
}