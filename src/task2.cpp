#include "task2.h"

using namespace std;

bool checkPrime(unsigned int value) {
    for (unsigned int i = 2; i <= sqrt(value); i++) {
        if (value % i == 0) {
            res = false;
            return res;
        }
    }
    return true;
}


unsigned long long nPrime(unsigned int n) {
    int sum = 0;
    for (int i = 2; ; i++) {
        if (checkPrime(i) == true) {
            sum++;
            if (sum == n){
                return i;
            }
        }
    }
    return 1;
}


unsigned long long nextPrime(unsigned long long value) {
    value++;
    for (int i = value+1; ; i++) {
        if (checkPrime(i) == true) {
            return i;
        }
    }
    return 1;
}

