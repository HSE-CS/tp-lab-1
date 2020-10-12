#include"task2.h"
#include <iostream>

using namespace std;

int main() {
	unsigned long long ans = nPrime(31);
    cout << checkPrime(2) << "\n";
    cout << checkPrime(3) << "\n";
    cout << checkPrime(12) << "\n";
    cout << nPrime(6) << "\n";
    cout << nPrime(500) << "\n";
    cout << nextPrime(1031) << "\n";
    cout << nextPrime(3559) << "\n";
    cout << nextPrime(2) << "\n";
}