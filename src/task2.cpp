//
// Created by islam on 29.09.2020.
//

#include "task2.h"

bool checkPrime(unsigned int value)
{
    for (int i = 2; i < value; i++) {
        if (value % i == 0 && value != 2)
            return false;
    }
    return true;
}

unsigned long long nPrime(unsigned n)
{
    int buck = 0;
    int check = 1;
    int f = 0;
    int t = 2;
    while (buck != n)
    {

        for (int i = 2; i < t; i++)

        {
            if (t % i == 0 && t != 2)
            {
                check = 0;
                break;
            }

        }

        if (check != 0)
            buck++;

        if (buck == n)
            break;

        check = 1;
        t++;
    }

    return t;
}

unsigned long long nextPrime(unsigned long long value)
{
    value = value + 1;
    while(1)
    {
        if(checkPrime(value) == true)
        {
            return value;
        }
        else
            value = value + 1;
    }
}