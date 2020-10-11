//
// Created by jmax on 05.10.2020.
//
#include <iostream>
#include <vector>

void getPrimes (std::vector<unsigned int> &primes, unsigned int maxValue, int exitComp(unsigned int, unsigned int)) {
    primes[0] = 2;
    unsigned int num = 2;
    bool isPrime;
    do {
        isPrime = true;
        for (unsigned int i : primes) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primes.push_back(num);

        num++;
    } while (exitComp(num, maxValue));
}

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