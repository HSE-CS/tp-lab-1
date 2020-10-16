#include <cmath>

bool checkPrime(unsigned int value) {
    if (value < 2) {
        return false;
    }
    if (value == 2) {
        return true;
    }
    for (unsigned int i = 2; i <= sqrt(value); ++i) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned long long nPrime(unsigned n) {
    unsigned primeCounter = 0;
    unsigned long long i = 2;
    while (primeCounter < n) {
        if (checkPrime(i)) {
            ++primeCounter;
        }
        if (primeCounter < n) {
            ++i;

        }
    }
    return i;
}

unsigned long long nextPrime(unsigned long long value) {
    for (unsigned long long i = ++value;; ++i) {
        if (checkPrime(i)) {
            return i;
        }
    }
}