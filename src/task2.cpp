//
// Created by kasya on 11.10.2020.
//
#include <cmath>

bool checkPrime(unsigned int value) {
    for (int i = 2; i <= sqrt(value); ++i){
        if (value % i == 0){
            return false;
        }
    }
    return true;
}

unsigned long long nPrime(unsigned n){
    unsigned long long i = 0;
    unsigned long long number = 2;
    while(i != n){
        if (checkPrime(number)){
            ++i;
        }
        ++number;
    }
    return number - 1;
}

unsigned long long nextPrime(unsigned long long value) {
    value++;
    while(!checkPrime(value)){
        value++;
    }
    return value;
}

