#include "task2.h"
#include <iostream>
#include <math.h>
using namespace std;

bool checkPrime(unsigned int value) {
    for (int i = 2; i <= sqrt(value); i++)
        if (value % i == 0)
            return false;
         return true;
        
} 
unsigned long long nPrime(unsigned long long  n) {
    unsigned int count = 0;
    bool found = false;
    int num = -1;
    int k = 2;
    while (!found) {
        int dels = 0;
        for (int i = 2; i < k; i++) {
            if (k % i == 0) {
                dels++;
            }
        }
        if (dels == 0) {
            count++;
            if (count == n) {
                found = true;
                num = k;
                break;
            }
        }
        k++;
    }
    return num;
}
unsigned long long nextPrime(unsigned long long value) {
    unsigned long long i = value + 1;
    while (!checkPrime(i))
    {
        i++;
    }
    return i;
}
