#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdlib>
#include "task2.h"
#include "task3.h"


using namespace std;
#define SIZE 15000

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long a[SIZE] = { 0 };
    unsigned long long s = 0;
    a[0] = 0;
    a[1] = 0;

    for (unsigned long long i = 2; i < hbound; i++) {
 
        a[i] = 1;
    }

    for (unsigned long long i = 2; i < hbound; i++) {

        if (a[i] == 1) {

            s += i;
            for (unsigned long long j = i * i; j < hbound; j += i)
                a[j] = 0;
        }
    }

    return s;
}