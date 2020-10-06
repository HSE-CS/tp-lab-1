#include <iostream>
#include "task2.h"

int main(){
    std::cout << "check Prime: " << checkPrime(2) << std::endl; // y
    std::cout << "check Prime: " << checkPrime(3) << std::endl;  // n
    std::cout << "check Prime: " << checkPrime(12) << std::endl;  // n

    std::cout << "nPrime: " << nPrime(6) << std::endl;
    std::cout << "nPrime: " << nPrime(500) << std::endl;

    std::cout << "next Prime: " <<  nextPrime(1031) << std::endl;
    std::cout << "next Prime: " <<  nextPrime(3559) << std::endl;
    std::cout << "next Prime: " <<  nextPrime(2) << std::endl;

    return 0;
}

