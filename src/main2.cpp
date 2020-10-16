#include <iostream>
#include "task2.h"

int main() {
    unsigned long n = {3};
    if (checkPrime(n)){
        std::cout << n <<" is prime number \n";
    } 
	else {
        std::cout << nextPrime(n)<<" is next prime number after n" << "\n";
    }
    return 0;
}
