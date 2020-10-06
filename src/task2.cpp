#include "../include/task2.h"

bool checkPrime(unsigned int value){
    for(unsigned int i = 2; i <= value/2; i++)
        if((value%i) == 0)
            return false;
    return true;
}

unsigned long long nPrime(unsigned n){
    unsigned long long challenger = 2;
    int count = 0;
    while (count != n){
        if (checkPrime(challenger)){
            count++;
        }
        challenger++;
    }
    return challenger-1;
}

unsigned long long nextPrime(unsigned long long value){
    while (1){
        if (checkPrime(++value))
            return value;
    }
}