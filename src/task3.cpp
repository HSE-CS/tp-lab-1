#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long sumPrime = 0;
    unsigned long long next_prime = 2;
    while ((unsigned int)nextPrime < hbound)
    {
        sumPrime += next_prime;
        next_prime = nextPrime(next_prime);
    }
    return sumPrime;
};