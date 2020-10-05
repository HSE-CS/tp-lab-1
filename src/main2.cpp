#include <iostream>
#include "task2.h"

int main() {
    unsigned long n = {10};
    if (checkPrime(n)){
        std::cout << nPrime(n);
    } else {
        std::cout << nextPrime(n);
    }
    return 0;
}
