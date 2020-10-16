#include "../include/task2.h"
#include <iostream>
using namespace std;

unsigned long long nextPrime(unsigned long long value) {
    unsigned long long i = value + 1;
    for(;!checkPrime(i);i++);
    return i;
}

unsigned long long nPrime(unsigned long long  n) {
    unsigned int count = 0;
    bool found = false;
    unsigned long long num = -1;
    int k = 2;
    while( !found) {
        int dels = 0;
        for(int i = 2; i < k; i++){
            if(k % i == 0) {
                dels++;
            }
        }
        if(dels == 0) {
            count++;
            if(count == n) {
                found = true;
                num = k;
                break;
            }
        }
        k++;
    }
    return num;
}
bool checkPrime(unsigned int value) {
    int dels = 0;
    for(unsigned int i = 2; i < value; i++) {
        if(value % i == 0)
                dels++;
    }
    return dels == 0 ? true: false;
}