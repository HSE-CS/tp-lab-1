#include <iostream>
#include "task2.h"

using namespace std;

int main() {
    cout << checkPrime(2) << '\n';
    cout << checkPrime(3) << '\n';
    cout << checkPrime(12) << '\n';
    cout << nPrime(6) << '\n';
    cout << nPrime(500) << '\n';
    cout << nextPrime(1031) << '\n';
    cout << nextPrime(3559) << '\n';
    cout << nextPrime(2) << '\n';

    return 0;
}
