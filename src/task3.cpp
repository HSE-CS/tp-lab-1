//
// Created by victor on 06.10.2020.
//
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum = 0;
    for(unsigned int i = 1;i < hbound; i++){
        if (checkPrime(i))
            sum += i;
    }
    return sum;
}