#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long sumPrime = 0;
    unsigned int next_prime = 2;
    while (next_prime < hbound)
    {
        sumPrime += next_prime;
        next_prime = nextPrime(next_prime);
    }
    return sumPrime;
};