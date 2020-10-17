#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
  unsigned long long s=0;
    for (unsigned int i = 2; i < hbound; i++)
    {
        s+=checkPrime(i)?i:0;
    }
    return s;	
};