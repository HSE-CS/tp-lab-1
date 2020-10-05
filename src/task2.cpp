//
// Created by jmax on 05.10.2020.
//
#include <math.h>
#include <vector>

static void getPrimes (std::vector<unsigned int> &primes, unsigned int maxValue) {
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
        if (isPrime) {
            primes.push_back(num);
        }
        num++;
    } while (num <= sqrt(maxValue));
}

bool checkPrime(unsigned int value) {
    if (value <= 2)
        return true;

    std::vector<unsigned int> primes(1);
    getPrimes(primes, value);

    for (unsigned int i : primes) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned long long nPrime(unsigned n) {
    unsigned counter = 0;
    unsigned long long num = 1;
    while (counter < n) {
        num++;
        if(checkPrime(num))
            counter++;
    }
    return num;
}

unsigned long long nextPrime(unsigned long long value) {
    int i = 1;
    while (nPrime(i) != value)
        i++;
    return nPrime(i+1);
}