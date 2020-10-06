//
// Created by victor on 06.10.2020.
//
#include "task2.h"

bool checkPrime(unsigned int value){
    for (unsigned int i = 2; i < value; i ++){
        if (value % i == 0)
            return false;
    }
    return true;
}

unsigned long long nextPrime(unsigned long long value){
    value++;
    for (;!checkPrime(value); value++){
    }
    return value;
}

unsigned long long nPrime(unsigned n){
    unsigned int num = 1, easy_nums_counter = 0;
    while (easy_nums_counter < n) {
        num ++;
        if (checkPrime(num))
            easy_nums_counter++;
    }
    return num;
}
