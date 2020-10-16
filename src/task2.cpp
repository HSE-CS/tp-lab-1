#include "task2.h"

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long mul(long long a, long long b, long long m)
{
    if (b == 1)
        return a;
    if (b % 2 == 0)
    {
        long long t = mul(a, b / 2, m);
        return (2 * t) % m;
    }
    return (mul(a, b - 1, m) + a) % m;
}

long long pows(long long a, long long b, long long m)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        long long t = pows(a, b / 2, m);
        return mul(t, t, m) % m;
    }
    return (mul(pows(a, b - 1, m), a, m)) % m;
}

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
    unsigned counter = 0;
    unsigned int prime_num = 2;
    while (counter < n)
    {
        if (checkPrime(prime_num))
            ++counter;
    }
    return prime_num;
};

unsigned long long nextPrime(unsigned long long value)
{
    ++value;
    while (!checkPrime(value))
        ++value;
    return value;
};