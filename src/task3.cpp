#include "task2.h"

unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum = 0;
    for(unsigned int number = 2; number < hbound; number++){
        if(checkPrime(number)){
            sum += number;
        }
    }
    return sum;
}
