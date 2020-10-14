#include "task2.h"
#include <math.h>
#include <iostream>

bool checkPrime(unsigned int value)
{
    if (value > 2) {
        for (int i = 2; i <= sqrt(value); i++)
            if (value % i == 0)
                return false;
        return true;
    }
    else{
        if (value == 1 || value == 2 ) return true;
        else return false;
    }
}
unsigned long long nPrime(unsigned n)
{
    int pos = 0;
    for (int i = 1; i < n*n; i++) {
        if(checkPrime(i)) {
            pos++;
        }
        if(pos == n+1) return i;
    }
}

unsigned long long nextPrime(unsigned long long value)
{
    for(int i = value+1; i < value*value; i++ )
    {
        if(checkPrime(i)) return i;
    }
    /*int pos = nPrime(value);
    if(value == 1) return 2;
    if(value == 2) return 3;
    for (int i = pos+1; i < value*value; i++) {
        if(checkPrime(i)) return i;
    }*/
}