#include <iostream>
#include "task2.h"

int main(){

    int n;

    std::cin >> n;
    std::cout << checkPrime(n) << "\n" << nPrime(n) << "\n" << nextPrime(n) << std::endl;

    return 0;
}
