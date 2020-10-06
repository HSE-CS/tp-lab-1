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

unsigned long long nPrime(unsigned n) {
	unsigned long long int num = 1;
	for (int i = 0; i < n;) {
		++num;
		if (checkPrime(num)) {
			++i;
		}
	}
	return num;
}

unsigned long long nextPrime(unsigned long long value) {
	for (int i = value + 1; ; i++) {
		if (checkPrime(i)) {
			return i;
		}
	}
	return 0;
}