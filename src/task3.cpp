#include <iostream>
#include "task2.h"
#include "task3.h"

using namespace std;


unsigned long long sumPrime(unsigned int hbound) {
    long s = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            s += i;
        }
    }
    return s;
}