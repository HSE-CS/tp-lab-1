#include "../include/task3.h"

bool checkPrime(unsigned int value){
    for(unsigned int i = 2; i <= value/2; i++)
        if((value%i) == 0)
            return false;
    return true;
}

unsigned long long sumPrime(unsigned int hbound){
    unsigned int challenger = 2;
    unsigned int sum = 0;
    while (challenger < hbound){
        if (checkPrime(challenger)){
            sum += challenger;
        }
        challenger++;
    }
    return sum;
}