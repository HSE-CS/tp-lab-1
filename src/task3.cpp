#include "task3.h"
#include "task2.h"
unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum = 0;
    hbound--;
    while(hbound!=1){
        if (checkPrime(hbound))
            sum+=hbound;
            hbound--;
    }

    return sum;
}