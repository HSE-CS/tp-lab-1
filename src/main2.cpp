#include <iostream>
#include "task2.h"

int main(){
    for (int i = 1; i <= 1000; ++i){
        if (checkPrime(i)){
            std::cout << i << ", ";
        }
    }
    std::cout << '\n';
    for (int i = 1; i < 100; ++i){
        std::cout << nPrime(i) << ", ";
    }
    std::cout << '\n';
    std::cout << nextPrime(100099) << '\n';
    return 0;
}