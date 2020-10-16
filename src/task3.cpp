#include "task2.h"
unsigned long long sumPrime(unsigned int hbound){
    unsigned long long result = 0;
    for (unsigned int i = 0; i < hbound; ++i) {
        if(checkPrime(i)){
            result += i;
        }
    }
    return result;
}