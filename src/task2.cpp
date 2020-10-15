
#include "task2.h"
#include <math.h>

bool checkPrime(unsigned int value) {
    if (value >= 2) {
        for (long long i = 2; i <= sqrt(value); i++) if (0 == value % i) return false;
        return true;
    }
    else return false;
}

unsigned long long nPrime(unsigned n) {
    unsigned long long count = { 0 };
    bool found = false;
    unsigned long long num;
    unsigned long long k = { 2 };
    while (!found) {
        int divisor = { 0 };
        for (int i = 2; i < k; i++) if (0 == k % i) divisor++;
        if (0 == divisor) {
            count++;
            if (count == n) {
                found = true;
                num = k;
                break;
            }
        }
        k++;
    }
    return num;
}

unsigned long long nextPrime(unsigned long long value) {
    value++;
    while (true) {
        int divisor = { 0 };
        for (int i = 2; i < value; i++) if (0 == value % i) divisor++;
        if (0 == divisor) return value;
        else value++;
    }
}