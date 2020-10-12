#include "task2.h"
bool checkPrime(unsigned int value){
    for(long long i=2;i<=sqrt(value);i++)
        if(value%i==0)
            return false;
    return true;
}
unsigned long long nPrime(unsigned n){
    int j,k;
    int a = 0;
    for (j = 2;; j++) {
        for (k = 2; k * k <= j; k++)
            if ((j % k) == 0) break;
        if (k * k > j) {
            a++;
            if (a == n) {
                return j;
                break;
            }
        }

    }
}
unsigned long long nextPrime(unsigned long long value){
    do {
        value++;
    } while ( !checkPrime(value) );
    return value;
}