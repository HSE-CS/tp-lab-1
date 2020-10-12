#include "task2.h"
#include "task3.h"
unsigned long long sumPrime(unsigned int hbound){
    unsigned long long summ=0;
    for (unsigned int i=2;i<=hbound;i++)
    {
        if(checkPrime(i)) {
            summ += i;
        }
    }
    return summ;
}