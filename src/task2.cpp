#include "task2.h"
bool checkPrime(unsigned long long value)
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
unsigned long long nPrime(unsigned n)
{
    unsigned long long value = 1;
    unsigned long long i = 0;
    while (i < n)
    {
        if (checkPrime(value))
            i++;
        value++;
    }
    return --value;
}
unsigned long long nextPrime(unsigned long long value)
{
    unsigned long long temp = value + 1;
    while (!checkPrime(temp))
        temp++;
    return temp;
}

