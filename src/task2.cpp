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
    int size = n;
    int* primes = (int*)malloc(n * sizeof(int));
    int* numbers = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        numbers[i] = i;

    primes[0] = 2;
    int i = 0;

    while (i < n) {
        int p = primes[i++];

        for (int j = p * 2; j < size; j += p)
            numbers[j] = 0;

        while (numbers[p + 1] == 0)
            p++;

        if (p + 1 >= size) {
            int* tmp = (int*)malloc(size * 2 * sizeof(int));
            for (int k = 0; k < size; k++)
                tmp[k] = numbers[k];

            free(numbers);

            size *= 2;
            numbers = tmp;

            for (int j = size / 2; j < size; j++)
                numbers[j] = j;

            i = 0;
        }
        else
            primes[i] = p + 1;
    }
    return(primes[n - 1]);
    free(numbers);
    free(primes);
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