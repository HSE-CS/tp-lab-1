#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum =0, num =2;
    while (nextPrime(num) < hbound){
        sum+=num;
        num = nextPrime(num);
    }
    sum+=num;
    return sum;
}