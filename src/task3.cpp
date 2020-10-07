#include "task3.h"
#include "task2.h"

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