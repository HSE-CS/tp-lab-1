//
// Created by Vadim Makarov on 03.10.2020.
//

#include <iostream>
#include "task2.h"
#include "task3.h"

using namespace std;


unsigned long long sumPrime(unsigned int hbound){
    long sum = 0;
    for (int i = 2; i < hbound; i++){
        if (checkPrime(i)){
            sum += i;
        }
    }
    return sum;
}