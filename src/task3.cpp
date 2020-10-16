#include <algorithm>
#include <iostream>
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound) {
    long long sum = 0;
    long long result = 1;

        while (result<hbound) {
            int k = 0;
            result++;
            for (long long i = 2; i < result; i++) {
                if (result % i == 0) {
                    k++;
                }
            }
            if (k == 0) {
                sum = sum + result;
                
            }
        }
   
    return sum;
}