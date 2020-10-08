#include "../include/task2.h"
 

bool checkPrime(unsigned long long value) {
	for (unsigned int i = 2; i <= sqrt(value); i++) {
		if (value % i == 0) return false;
	}
	return true;
}
unsigned long long nPrime(unsigned n){
    unsigned long long count = 0;
    bool found = false;
    unsigned long long num = -1;
    unsigned long long k = 2;
    while (!found) {
        if (checkPrime(k)) {
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
    unsigned long long num = -1;
    unsigned long long k = value;
    while (1) {
        bool prime = true;
        k++;
        if (checkPrime(k)) {
                num = k;
                break;
            }
    }
    return num;
}
