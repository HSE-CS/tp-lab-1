#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "task2.h"
#include "task3.h"
using namespace std; 

unsigned long long sumPrime(unsigned int hbound){
    unsigned long long s=0;
    for(unsigned int x=hbound;x>1;x--){
        if (checkPrime(x)) s+=x;
    }
    return s;
}