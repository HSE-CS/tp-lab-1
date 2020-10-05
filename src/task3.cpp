//
// Created by jmax on 05.10.2020.
//
#include <iostream>
#include "task2.h"

static int exitComp(unsigned int num, unsigned int maxValue) {
    return (int)(maxValue - num);
}

unsigned long long sumPrime(unsigned int hbound) {
    std::vector<unsigned int> primes(1);
    getPrimes(primes, hbound, exitComp);
    unsigned long long sum = 0;
    for (unsigned int i : primes)
        sum += i;
    return sum;
}