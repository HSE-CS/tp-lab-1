#include "task2.h"
#include <vector>
#include <math.h>

using namespace std;

bool checkPrime(unsigned int value){
    if (value == 1) return false;
    else if (value == 2) return true;
    else if (value % 2 == 0) return false;
    bool prime = true;
    for (int i = 3; i <= (unsigned int)ceil(sqrt(value)); i += 2){
        if (value % i == 0){
            prime = false;
            break;
        }
    }
    return prime;
}

unsigned long long nPrime(unsigned int n){
    static vector<bool> prime_cache = {};

    if (n == 1) return 2;

    unsigned int left = n;
    unsigned int i = 0;
    while (left > 1){
        if (i < prime_cache.size()){
            if (prime_cache[i]) left -= 1;
        } else {
            bool is_prime = checkPrime(i*2+3);
            prime_cache.push_back(is_prime);
            if (is_prime) left -= 1;
        }
        i += 1;
    }
    return (i-1)*2+3;
}

unsigned long long nextPrime(unsigned long long value){
    if (value % 2 == 0) value -= 1;
    bool prime = false;
    while (!prime){
        value += 2;
        prime = checkPrime(value);
    }
    return value;
}