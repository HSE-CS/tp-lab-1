#include "../include/task2.h"
/*
unsigned long long sumPrime(unsigned int hbound){
    long long sum = 0;
    int i=2;
    while(nPrime(i) < hbound){
        sum +=  nPrime(i);
        i++;
    }
    return sum;
}
*/
unsigned long long sumPrime(unsigned int hbound)
{
    unsigned long long* arr = new unsigned long long [hbound];
    unsigned long long sum = 0;

    for (unsigned long long i = 2; i < hbound; i++){
        if (arr[i] != -1) {
            sum += i;
            for (unsigned long long j = i * i; j < hbound; j += i){
                arr[j] = -1;
            }
        }
    }
    return sum;
}
