
#include "task2.h"

bool checkPrime(unsigned int value) {
    for (int i = 2; i <= value - 1; i++) {
        if (value % i == 0)
            return false;
    }
    if (value < 2)
        return false;
    return true;
}

unsigned long long nPrime(unsigned n) {
    int k;
    k = 0;
    long long value = 0;
    do {
        value++;
        if (checkPrime(value)) {
            k++;
        }
    } while (k != n);
    return value;
}

unsigned long long nextPrime(unsigned long long value) {
    long long k = value;
    do {
        k++;
    } while (!checkPrime(k));
    return k;
}