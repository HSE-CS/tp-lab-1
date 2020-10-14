#include "task2.h"

bool checkPrime(unsigned int value)
{
    if (value == 2)
        return true;
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        long long a = (rand() % (value - 2)) + 2;
        if (gcd(a, value) != 1)
            return false;
        if (pows(a, value - 1, value) != 1)
            return false;
    }
    return true;
};

unsigned long long nPrime(unsigned n)
{
    int size = n;
    int *primes = new int[n];
    int *numbers = new int[size];
    for (int i = 0; i < size; i++)
        numbers[i] = i;
    primes[0] = 2;
    int i = 0;
    while (i < n)
    {
        int p = primes[i++];
        for (int j = p * 2; j < size; j += p)
            numbers[j] = 0;
        while (numbers[p + 1] == 0)
            p++;
        if (p + 1 >= size)
        {
            int *tmp = new int[size * 2];

            for (int k = 0; k < size; k++)
                tmp[k] = numbers[k];
            delete[] numbers;
            size *= 2;
            numbers = tmp;
            for (int j = size / 2; j < size; j++)
                numbers[j] = j;
            i = 0;
        }
        else
            primes[i] = p + 1;
    }
    return primes[n - 1];
    delete[] numbers;
    delete[] primes;
};

unsigned long long nextPrime(unsigned long long value)
{
    ++value;
    while (!checkPrime(value))
        ++value;
    return value;
};