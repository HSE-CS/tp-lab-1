#include "../include/task2.h"

unsigned long long sumPrime(unsigned int hbound){
    long long sum = 0;
    int i=1;
    while(nPrime(i) < hbound){
        sum +=  nPrime(i);
        i++;
    }
    return sum;
}