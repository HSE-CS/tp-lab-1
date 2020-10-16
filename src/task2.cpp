#include <stdbool.h>

bool checkPrime(unsigned int value){
    bool is_prime = (value > 1);
    for(unsigned int number = 2; number * number <= value; number++){
        if(value % number == 0){
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

unsigned long long nPrime(unsigned n){
    unsigned long long number = 1;
    signed count = 0;
    while(count < n){
        number += 1;
        if(checkPrime(number)){
            count += 1;
        }
    }
    return number;
}

unsigned long long nextPrime(unsigned long long value){
    unsigned long long number = value + 1;
    while(checkPrime(number) == false){
        number += 1;
    }
    return number;
}
