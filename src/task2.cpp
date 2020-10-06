#include "task2.h"

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
};

unsigned long long nPrime(unsigned n)
{
    int i, j;
    int a = 0;
    for (i = 2;; i++)
    {

        for (j = 2; j * j <= i; j++)
            if ((i % j) == 0) break;

        if (j * j > i) {
            a++;
            if (a == n) {
                return i;
                break;
            }
        }
    }

};

unsigned long long nextPrime(unsigned long long value)
{
    long long i, j;
    int a = 0;
    for (i = value;; i++) {

        for (j = 2; j * j <= i; j++)
            if ((i % j) == 0) break;

        if (j * j > i) {
            a++;
            if (a == 1) {
                return i;
                break;
            }
        }
    }
};