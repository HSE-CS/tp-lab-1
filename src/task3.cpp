#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include "task3.h"
using namespace std;

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long sum = 2;
    for (int i = 3; i < hbound; i++)  {
        if (checkPrime(i))  {
            sum += i;
        }
    }
    return sum;
}