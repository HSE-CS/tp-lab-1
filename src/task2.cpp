#ifndef TASK2_CPP
#define TASK2_CPP

#include "task2.h"

bool checkPrime(unsigned int value){
    if (value < 2)
        return false;
    for (int i = 2; i < sqrt(value); ++i)
        if (value % i == 0)
            return false;
    return true;
}

unsigned long long nPrime(unsigned n){
    int counter = 0;
    long long num = 0;
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

unsigned long long nextPrime2(unsigned long long value) {
    long long k = value;
    do {
        k++;
    } while (!checkPrime(k));
    return k;
}

#endif // TASK2_CPP