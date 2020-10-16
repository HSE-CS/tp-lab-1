#include "task2.h"

bool checkPrime(unsigned int value)
{
    if (value == 2)
        return true;
    for (unsigned int i = 2; i < value / 2; i++)
    {
        if (value % i)
            return false;
    }
    return true;
};

unsigned long long nPrime(unsigned n)
{
    unsigned counter = 1;
    unsigned int prime_num = 2;
    while (counter < n)
    {
        ++prime_num;
        if (checkPrime(prime_num))
            ++counter;
    }
    return prime_num;
};

unsigned long long nextPrime(unsigned long long value)
{
    ++value;
    while (!checkPrime(value))
        ++value;
    return value;
};