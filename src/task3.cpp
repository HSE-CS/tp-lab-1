#include "task2.h"
#include "task3.h"
#include <algorithm>
#include <iostream>

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long sum = 0;
    for (unsigned int i = 1; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i; 
        }
    }
    return sum;
}