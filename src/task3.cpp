#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long sum = 0;
    unsigned long long currPrime = 2;
    while (1)
    {
        sum+=currPrime;
        currPrime = nextPrime(currPrime);
        if(currPrime>=hbound)
            break;
    }
    return sum;
}