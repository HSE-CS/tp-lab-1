#include "task3.h"
#include "task2.h"
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>


unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long sum = 0;
    int cheked = 0;
    unsigned long long now = 0;
    while (now < hbound)
    {
        now = nextPrime(now);
        sum += now;
    }
    return sum;
}
