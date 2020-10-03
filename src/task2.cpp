//
// Created by Vadim Makarov on 03.10.2020.
//

#include <iostream>
#include "task2.h"
#include <cmath>

using namespace std;

bool checkPrime(unsigned int value){
    for(unsigned int i = 2; i <= sqrt(value); i++)
        if(value % i == 0)
            return false;
    return true;
}

unsigned long long nPrime(unsigned n){
    unsigned counter = 0;
    for (unsigned int i = 2; counter != n; ++i){
        if (checkPrime(i)){
            counter++;
        }
        if (counter == n){
            return i;
        }
    }
}

unsigned long long nextPrime(unsigned long long value){
    for (++value; true; ++value){
        if (checkPrime(value)){
            return value;
        }
    }

}