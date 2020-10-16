#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task3.h"
using namespace std;

#define SIZE 20000

unsigned long long sumPrime(unsigned int hbound) {

    unsigned long long r[SIZE] = { 0 };
    unsigned long long sum = 0;

    r[0] = 0;
    r[1] = 0;

    for (unsigned long long i = 2; i < hbound; i++) {

        r[i] = 1;

    }

    for (unsigned long long i = 2; i < hbound; i++) {

        if (r[i] == 1) {

            sum += i;
            for (unsigned long long j = i * i; j < hbound; j += i)
                r[j] = 0;

        }

    }

    return sum;

}

