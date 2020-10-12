#include "task2.h"

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long sum = 0;
    unsigned int counter = 0;

    while (counter < hbound) {
        if (checkPrime(counter)) {
            sum += counter;
        }

        counter++;
    }

    return sum;
}