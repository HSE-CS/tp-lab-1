#include <vector>
#include "task2.h"

//- проверка числа на простоту.
bool checkPrime(unsigned int value) {
    if (value <= 1) {
        return false;
    } else {
        for (int i = 2; i < value; i++) {
            if (value % i == 0) {
                return false;
            }
        }
        return true;
    }
}

//- нахождение n-ого простого числа (в ряду).
unsigned long long nPrime(unsigned n) {
    int count = 0;
    long long value = 0;
    while (count != n) {
        value++;
        if (checkPrime(value)) {
            count++;
        }
    }
    return value;
}


//- нахождение ближайшего следующего простого числа к value.
unsigned long long nextPrime(unsigned long long value) {
    for (unsigned long long num = value + 1; num <= value * value; ++num) {
        if (checkPrime(num)) {
            return num;
        }
    }
}
