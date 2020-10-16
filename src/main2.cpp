#include <iostream>
#include "task2.h"

int main() {
    int value = {4};
    std::cout << checkPrime(value) << "\n";
    std::cout << nPrime(value) << "\n";
    std::cout << nextPrime(value) << "\n";
    return 0;
}