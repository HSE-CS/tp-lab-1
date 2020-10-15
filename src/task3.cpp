#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long res = 2, num = 2;
    while (num < hbound)
    {
        num = nextPrime(num);
        res += num;
    }
    return res - num;
}
