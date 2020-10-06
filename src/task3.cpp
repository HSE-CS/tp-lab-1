//
// Created by sharg on 06.10.2020.
//
#include "task2.h"
#include "task3.h"
unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum=0;
    for (unsigned int currentNumber=2;currentNumber<=hbound;currentNumber++)
    {
        if(checkPrime(currentNumber)) {
            sum += currentNumber;
        }
    }
    return sum;
}//сумма всех чисел до hbound (не включая его)