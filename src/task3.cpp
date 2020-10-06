#include <iostream>
#include <cmath>

bool checkPrime(unsigned int value) {
	for (int i = 2; i <= int(sqrt(value)); i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long  int sum = 0;
	for (int i = 2; i < hbound; i++) {
		sum += checkPrime(i) ? i : 0;
	}
	return sum;
}