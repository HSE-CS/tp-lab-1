//
// Created by sharg on 06.10.2020.
//
#include "task2.h"

bool checkPrime(unsigned int value) {
    bool isPrime = true;
    unsigned int currentDivisor = 2;
    while (isPrime && currentDivisor < value / 2 + 1) {
        if (value % currentDivisor == 0) {
            isPrime = false;
        } else {
            currentDivisor++;
        }
    }
    return isPrime;
}//проверка числа на простоту.
unsigned long long nPrime(unsigned n) {
    unsigned long  long iter = 2, numberOfPrimes = 0;
    while (numberOfPrimes != n) {
        if (checkPrime(iter)) {
            iter++;
            numberOfPrimes++;
        } else {
            iter++;
        }
    }
    return iter - 1;
}// - нахождение n-ого простого числа (в ряду).
unsigned long long nextPrime(unsigned long long value) {
    unsigned long  long next = value+1;
    while (true) {
        if(checkPrime(next)){
            return next;
        }else{
            next++;
        }
    }
}// - нахождение ближайшего следующего простого числа к value.