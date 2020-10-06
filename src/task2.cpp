#include "task2.h"
#include <vector>
using namespace std;

bool checkPrime(unsigned int value) {
    if (value == 1) {
        return false;
    }
    if (value % 2 == 0) {
        return value == 2;
    }
    auto div{ 3 };
    while (((div * div) <= value) &&( (value % div )!= 0)) {
        div += 2;
    }
    return div * div > value;
}
unsigned long long nPrime(unsigned n) {
    vector<unsigned long long> primes;
    if (n > 0) {
        primes.push_back(2);
    }
    for (int i = 3; primes.size() < n; i += 2) {
        if (checkPrime(i))
            primes.push_back(i);
    }
    return primes.back();
}
unsigned long long nextPrime(unsigned long long value) {
    while (true) {
        value++;
        if (checkPrime(value)) {
            return value;
        } 
    }
}

