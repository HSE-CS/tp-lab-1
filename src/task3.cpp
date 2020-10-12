#include <iostream>
#include "task2.h"
#include "task3.h"
using namespace std;

unsigned long long sumPrime(unsigned int hbound)
{
    unsigned int sum = 0;
    for(unsigned int i=1; i<hbound; i++)
    {
        sum+=nPrime(i);
    }
    return sum;
}

