#include "task3.h"
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>


unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long sum = 0;
    int cheked = 0;
    for (unsigned long long j = 2; j < hbound; j++)
    {
        cheked = 0;
        for (unsigned long long  i = 2; i < j; i++)
        {
            if (j % i == 0)
                cheked++;
            if (cheked > 0)
                break;
        }
        if (!cheked)
            sum += j;
    }
    return sum;
}
