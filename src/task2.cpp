#include "task2.h"
#include <algorithm>
#include <iostream>

bool checkPrime(unsigned int value) {
    if (value > 1) {
        for (long long i = 2; i <= sqrt(value); i++) {
            if (value % i == 0) {
                return false;
            }
        }
            return true;
        
    }
    else return false;
}
unsigned long long nPrime(unsigned n) {
    unsigned long long count = 0;
    bool found = false;
    unsigned long long num = 0;
    unsigned long long k = 2;
    while (!found) {
        int div = 0;
        for (int i = 2; i < k; i++) {
            if (0 == k % i) {
                div++;
            }
        }
        if (0 == div) {
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
    while (1) {
        int divisor = { 0 };
        for (int i = 2; i < value; i++)
            if (0 == value % i) {
                divisor++;
            }
        if (0 == divisor) {
            return value;
        }
        else value++;
    }
}