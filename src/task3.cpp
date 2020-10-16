#include "task2.h"
unsigned long long sumPrime(unsigned int hbound) {
    int long long a = 0;
    for (int i = 0; i< hbound; i++) {
        if (checkPrime(i))
            a = a + i;
    }
    
    return a;
}