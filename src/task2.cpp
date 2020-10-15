#include "task2.h"

bool checkPrime(unsigned int value)
{
    unsigned int i;
    for (i = 2; i <= sqrt(value); i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned long long nextPrime(unsigned long value)
{
    value++;
    while (!checkPrime(value)) {
        value++;
    }
    return value;
}

unsigned long long nPrime(unsigned n)
{
    long k = 1;
    long num = 2;
    while (k < n)
    {
        num = nextPrime(num);
        k++;
    }
    return num;
}
