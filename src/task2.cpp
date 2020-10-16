#include "task2.h"

bool checkPrime(unsigned int value)
{
    for (unsigned int i = 2; i <= sqrt(value); i++)
    {
        if (value % i == 0)
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