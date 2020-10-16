//
// Created by toliman on 05.10.2020.
//

#include "task3.h"

using namespace std;


vector<unsigned long long> getPrimes() {
    vector<unsigned long long> primes;
    vector<unsigned long long> table(500000, 1);

    table[0] = 0;
    table[1] = 0;
    
    for (unsigned long long i = 2; i * i <= 500000; ++i) {
        for (unsigned long long j = i * i; j < 500000; j += i) {
            table[j] = 0;
        }
    }
    for (int i = 0; i < 500000; ++i) {
        if (table[i]) primes.push_back(i);
    }
    return primes;
}

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long answer = 0;
    auto primes = getPrimes();

    for (unsigned int digit = 2; digit < hbound; ++digit) {
        bool prime = true;
        for (auto x: primes) {
            if (x * x <= digit) {
                if (!(digit % x)) {
                    prime = false;
                    break;
                }
            } else { break; }
        }
        if (prime) answer += digit;
    }
    return answer;

}
