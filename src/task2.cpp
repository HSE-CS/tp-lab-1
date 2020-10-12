#include <iostream>
#include "task2.h"

bool checkPrime(unsigned int value)
{
    for(unsigned int i = 2; i < value; i++)
    {
        if(value%i == 0)
            return false;
    }
    return true;
}

unsigned long long nPrime(unsigned n)
{
    unsigned int num = 1;
    unsigned int count = 0;
    while(count < n)
    {
        num++;
        if (checkPrime(num) == true)
            count++;
    }
    return num;
}

unsigned long long nextPrime(unsigned long long value)
{
    while (true)
    {
        value++;
        if (checkPrime(value)) {
            return value;
        }
    }
}
