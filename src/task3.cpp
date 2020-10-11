//
// Created by freeb on 11.10.2020.
//

#include "task2.h"
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long result = 0;
    for (unsigned int w = 2; w < hbound; w++) {
        if (checkPrime(w)) result += w;
    }
    return result;
}

