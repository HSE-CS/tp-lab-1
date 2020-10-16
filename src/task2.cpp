//
// Created by toliman on 05.10.2020.
//

#include "task2.h"

bool checkPrime(unsigned int value) {
    for (int divider = 2; divider * divider <= value; ++divider) if (!(value % divider)) return false;
    return true;
}

unsigned long long nPrime(unsigned n) {
    unsigned cnt = 0;
    for (long long candidate = 2;; ++candidate) {
        bool prime = true;
        for (long long divider = 2; divider * divider <= candidate; ++divider)
            if (!(candidate % divider)) {
                prime = false;
                break;
            }
        if (prime) cnt++;
        if (cnt == n) return candidate;
    }
}

unsigned long long nextPrime(unsigned long long value) {
    for (unsigned long long digit = value + 1;; ++digit) {
        bool prime = true;
        for (unsigned long long divider = 2; divider * divider <= digit; ++divider)
            if (!(digit % divider)) {
                prime = false;
                break;
            }
        if (prime) return digit;
    }
}
