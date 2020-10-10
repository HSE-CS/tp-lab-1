#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

bool checkPrime(unsigned int value)
{
    if (value > 1)
    {
        for (int i = 2; i < value; i++)
            if (value % i == 0)
                return false;
        return true;
    }
    else 
        return false;
}

unsigned long long nPrime(unsigned n)
{
    unsigned long long c = 0, k = 0;
    while (true)
    {
        if (c < n)
        {
            if (checkPrime(k++))
            {
                c++;
            }
        }
        else
        {
            break;
        }
    }
    return --k;
}
unsigned long long nextPrime(unsigned long long value)
{
    unsigned long long i = value + 1;
    while (1)
    {
        if (checkPrime(i) == 1)
            return i;
        else
            i++;
    }
}