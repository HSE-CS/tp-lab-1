#ifndef TASK3_CPP
#define TASK3_CPP

#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum = 0;
    for (unsigned int i = 2; i < hbound; ++i)
        if (checkPrime(i)) {
            sum += i;
        }
    return sum;
}

#endif //TASK3_CPP