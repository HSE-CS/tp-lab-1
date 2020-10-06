#include "task3.h"
#include <vector>
#include <iostream>
using namespace std;
unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long sum{ 0 };
    vector <int> primes(hbound  );
    for (int i = 0; i < hbound; i++) {
        primes[i] = i;
    }
    for (int div = 2; div < hbound  ; div++) {
        if (primes[div]){
            sum += primes[div];
            for (unsigned long long j = div * 1ll * div; j < hbound; j += div) {
                primes[j] = 0;
            }
        }
    }
    return sum;
}
    
 
