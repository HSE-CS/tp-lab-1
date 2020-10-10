//
// Created by freeb on 11.10.2020.
//

#include <task2.h>

bool checkPrime(unsigned int value) {
    if (value % 2 == 0) { return value == 2; }
    unsigned int d = 3;
    while (d * d <= value && value % d != 0) {
        d += 2;
    }
    return d * d > value;
}

unsigned long long nPrime(unsigned int n) {
    unsigned int i = 0, c = -1;
    while (c != n) {
        i++;
        if (checkPrime(i)) c++;
    }
    return i;
}

unsigned long long nextPrime(unsigned long long int value) {
    while (!checkPrime(++value));
    return value;
}
