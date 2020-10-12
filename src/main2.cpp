#include"task2.h"
#include <iostream>

using namespace std;

int main() {
	unsigned long long ans = nPrime(3);
    cout << checkPrime(2) << "\n";
    cout << ans<< "\n";
    cout << checkPrime(12) << "\n";
    cout << nPrime(6) << "\n";
    cout << nPrime(500) << "\n";
    cout << nextPrime(1029) << "\n";
    cout << nextPrime(3) << "\n";
    cout << nextPrime(2) << "\n";
} 