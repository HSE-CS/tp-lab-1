
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound) {
    long long summ = 0;
    for (long long i = 2; i < hbound; i++) {
        if (checkPrime(i))
            summ += i;
    }
    return summ;
}
