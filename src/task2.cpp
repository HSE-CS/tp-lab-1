#include "task2.h"
bool checkPrime(unsigned int value) {
    unsigned long i;
    if (value == 2) {
        return true;
    }
    if (value == 0 || value == 1 || value % 2 == 0)
        return false;
    for (i = 3; i * i <= value && value % i; i += 2);
    return (i * i > value);
}
unsigned long long nPrime(unsigned n)
{
    unsigned long k = 0;
    for (int i = 2; i <= n; i++)
    {
        if(checkPrime(i))
        {
            k++;
        }
    }
    return k;
}
unsigned long long nextPrime(unsigned long long value)
{
    for(int i = value + 1; ; i++)
    {
        if(checkPrime(i))
        {
            return i;
        }
    }
}