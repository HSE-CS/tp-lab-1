#include <iostream>
#include "task2.h"
using namespace std;

int main() {

	unsigned int number(50);
	unsigned long long big_number(270200);
	cout << checkPrime(number) << endl;
	cout << nPrime(number) << endl;
	cout << nextPrime(big_number) << endl;
	for (size_t i = 0; i < 100; i++)
	{
		cout << nPrime(i) << endl;
	}
}