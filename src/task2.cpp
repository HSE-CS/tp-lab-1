#include "task2.h"
#include <iostream>
#include <math.h>
using namespace std;

bool checkPrime(unsigned int value){
    if(value == 2)
        return true;
    if (value%2 == 0) //even numbers >2 aren't prime
        return false;
    for (int i=2;i<=sqrt(value);i++) //sqrt is enough
        if (value % i == 0)
            return false;
    return true;
}

unsigned long long nPrime(unsigned n){
    unsigned long long ans = 2;
    unsigned long long number = 1;
    for (int i=3;number<n;i+=2){
        if(checkPrime(i)) {
            number++;
            ans = i;
        }
    }
    return ans;
}

unsigned long long nextPrime(unsigned long long value){
    if(value==2)
        return 3;
    while(true){
        value += 2;
        if(checkPrime(value))
            return value;
    }
}