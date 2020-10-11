#include <math.h>
#include <iostream>

bool checkPrime(unsigned int value){
    for(long i=2;i<=sqrt(value);i++)
        if(value%i==0)
            return false;
    return true;
}


unsigned long long sumPrime(unsigned int hbound){
    unsigned int summ=0;
    for(int i=2;i<hbound;i++){
        if (checkPrime(i)){}
        summ+=i;
    }

    return summ;
}


