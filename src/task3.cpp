#include "task2.h"
#include "task3.h"
using namespace std;

unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long sum = 0;
    for(unsigned int i = 2; i < hbound; i++)
    {
        sum += checkPrime(i) ? i : 0;
    }
    return sum;
}

