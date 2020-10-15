#include <iostream>
#include "task2.h"

bool checkPrime(unsigned int value){
    if(value >1)
        for (int i = 2; i < value/2+1; ++i) {
            if(!(value % i))
                return false;
        }
    else
        return false;
    return true;
}
unsigned long long nPrime(unsigned n){
    unsigned count = 0;
    unsigned long long var = 2;
    while (count != n) {
        while (!checkPrime(var)) {
            var++;
        }
        var++;
        count++;
    }
    var--;
    return var;
}

unsigned long long nextPrime(unsigned long long value){
    unsigned long long left = value-1;
    unsigned long long right = value+1;
    while (!checkPrime(left) and !checkPrime(right)) {
        left--;
        right++;
    }
    if(checkPrime(left))
        return left;
    else
        return right;
}
