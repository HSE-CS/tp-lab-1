#include "task3.h"
#include "task2.h"
#include <iostream>

unsigned long long sumPrime(unsigned int hbound){
    unsigned int i = 1;
    unsigned long long prime_sum = 0;
    unsigned int c_prime = 2;
    while (c_prime < hbound){
        prime_sum += c_prime;
        c_prime = nextPrime(c_prime);
    }
    return prime_sum;
}