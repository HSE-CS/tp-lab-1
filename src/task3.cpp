#include <math.h>
#include <iostream>

bool checkPrime(unsigned int value){
    for(long i=2;i<=sqrt(value);i++)
        if(value%i==0)
            return false;
    return true;
}


unsigned long long nextPrime(unsigned long long value){
    if (checkPrime(value+1)) return value+1;
    else nextPrime(value+1);
}

unsigned long long sumPrime(unsigned int hbound){

    unsigned long long summ=0;

    int n = 1;
    while (nextPrime(n)<hbound){
        n=nextPrime(n);
        summ+=n;
    }

    return summ;
}


