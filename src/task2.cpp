#ifndef TASK2_CPP
#define TASK2_CPP

#include "task2.h"

bool checkPrime(unsigned int value){
    for (int i = 2; i < sqrt(value); ++i)
        if (value % i == 0)
            return false;
    return true;
}

unsigned long long nPrime(unsigned n){
    int counter = 0;
    unsigned int num = 1;
    while (counter != n){
        ++num;
        if (checkPrime(num))
            ++counter;
    }
    return num;
}

unsigned long long nextPrime(unsigned long long value){
    ++value;
    while (!checkPrime(value))
        ++value;
    return value;
}

#endif // TASK2_CPP