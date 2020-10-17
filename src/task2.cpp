#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "task2.h"

using namespace std; 

bool checkPrime(unsigned int value){
     unsigned long i;
    if (value == 2) {
        return true;
    }
    if (value == 0 || value == 1 || value % 2 == 0)
        return false;
    for (i = 3; i * i <= value && value % i; i += 2);
    return (i * i > value);
}

unsigned long long nPrime(unsigned n){
    unsigned long long x=2;
    unsigned p=1;
    while (p!=n){
        x++;
        if (checkPrime(x)) p++;
    }
    return x;
}
unsigned long long nextPrime(unsigned long long value){
    unsigned long long x=value+1;
    while (!(checkPrime(x))){
        x++;
    }
    return x;

}