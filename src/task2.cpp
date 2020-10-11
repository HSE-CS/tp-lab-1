#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "task2.h"

using namespace std; 

bool checkPrime(unsigned int value){
    bool f=true;
    for (unsigned int t=value-1;t>1;t--){
        if (value%t==0) f=false;
    }
    return f;
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