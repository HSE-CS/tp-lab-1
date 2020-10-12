#include <iostream>
#include "task2.h"

using namespace std;

int main(){

    int n;

    //std::cin >> n;
    //std::cout << checkPrime(n) << "\n" << nPrime(n) << "\n" << nextPrime(n) << std::endl;

    cout << checkPrime(2)<< '\n';
    cout << checkPrime(3)<< '\n';
    cout << checkPrime(12)<< '\n';
    cout << nPrime(6)<< '\n';
    cout << nPrime(500)<< '\n';
    cout << nextPrime(1031)<< '\n';
    cout << nextPrime(3559)<< '\n';
    cout << nextPrime(2)<< '\n';




    return 0;
}
