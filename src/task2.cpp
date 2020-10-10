#include "task2.h"

bool checkPrime(unsigned int value){
    bool b = true;
    for (unsigned int i = 2; i < value; i++){
        if (value%i == 0){
            b = false;
            break;
        }
    }
    return b;
}

unsigned long long nPrime(unsigned n){
    unsigned long long prime = 2;
    for (unsigned i = 0; i < n; i++){
        while (!checkPrime(prime)){
            prime++;
        }
        prime++;
    }
    return --prime;
}
unsigned long long nextPrime(unsigned long long value){
        value++;
        while (!checkPrime(value)){
            value++;
        }
    return value;
}
