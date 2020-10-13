#include "../include/task3.h"

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long sum = 0;
    for(unsigned int v = 2; v < hbound; v++) {
        int dels = 0;
        for(unsigned int i = 2; i < v; i++) {
            if(v % i == 0)
                    dels++;
            if(dels > 0)
                break;
        }
        if(dels == 0) {
            sum += v;
        }
    }
    return sum;
}