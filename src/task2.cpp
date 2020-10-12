#include <iostream>
#include <cmath>

bool checkPrime(unsigned int value) {
    if (value <= 1)
        return false;

    for (unsigned int i = 2; i <= (int)(sqrt(value)); i++){
        if (value % i == 0)
            return false;
    }

    return true;
}

unsigned long long nPrime(unsigned n) {
    unsigned long long current = 1;
    unsigned int counter = 0;

    while (!checkPrime(current) || counter < n - 1) {
        if (checkPrime(current)) {
            counter++;
            current++;
        }
        else {
            current++;
        }
    }

     return current;
}

unsigned long long nextPrime(unsigned long long value) {
    unsigned int next = value + 1;
    while (!checkPrime(next))
        next++;

    return next;
}
