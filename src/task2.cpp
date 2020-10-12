#include <cmath>
#include "task2.h"


bool checkPrime(unsigned int value){ 
	for(long long i = 2; i <= sqrt(value); i++)
		if(value % i == 0) return false;
	return true;
}

unsigned long long nPrime(unsigned n){
    int idx = 0;


    unsigned long long prime = 1;
    while (idx < n){
        prime = nextPrime(prime);
        idx++;
    }
    return prime;
}


unsigned long long nextPrime(unsigned long long value){
    while(!checkPrime(++value));
    return value;
}