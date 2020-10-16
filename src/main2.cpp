#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task2.h"
using namespace std;
//- простая демонстрация(сценарий)
int main() {
    int a;
    int n;
    int next;
    cout << "prime chek\n";
    cin >> a;
    cout << checkPrime(a)<<'\n';
    cout << "prime number\n";
    cin >> n;
    cout << nPrime(n) << '\n';
    cout << "next prime number\n";
    cin >> next;
    cout << nextPrime(next) << '\n';
	return 0;
} 