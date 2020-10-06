//
// Created by sharg on 06.10.2020.
//
#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max) {
    unsigned int currentDivisor = min;
    unsigned long currentNumber = max;
    while (currentDivisor <= max) {
        if (currentNumber % currentDivisor == 0) {
            currentDivisor++;
        } else {
            currentNumber++;
            currentDivisor = min;
        }
    }
    return currentNumber;
}