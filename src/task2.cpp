#include "task2.h"

bool checkPrime(unsigned int value) {
    int r = 0;
    for (int j = 2; j < value; j++) {
        if (value % j == 0)
            r++;
    }
    if (r == 0)
        return true;
    return false;
}

unsigned long long nPrime(unsigned n) {
    unsigned int result = 1, i = 0;
    while (i != n) {
        result++;
        int r = 0;
        for (int j = 2; j < result; j++) {
            if (result % j == 0)
                r++;
        }
        if (r == 0) {
            i++;
        }
    }
    return result;
}

unsigned long long nextPrime(unsigned long long value) {
    unsigned int diff = 0;
    while (checkPrime(value + diff) == 0)
        diff++;
    return value + diff;
}
