#include "task2.h"

bool checkPrime(unsigned int value)
{
    if (value == 1)
        return false;
    for (long long i = 2; i <= sqrt(value); i++)
        if (value % i == 0)
            return false;
    return true;
}
unsigned long long nPrime(unsigned n)
{
    int k = 0;
    for (int i = 2;; i++)
        if (checkPrime(i)) {
            k++;
            if (k == n)
                return i;
        }
    return 1;
}
unsigned long long nextPrime(unsigned long long value)
{
    value++;
    for (;; value++)
        if (checkPrime(value)) {
            return value;
        }
    return 1;
}