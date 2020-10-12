#include "include/task2.h"
bool checkPrime(unsigned int x) {
	for (int i = 2; i * i <= x; i++) {
		if (!(x % i)) {
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned long long x) {
	int test = 1, count = 0, prime = 2;

	while (count < x) {
		test++;
		if (checkPrime(test)) {
			count++;
			prime = test;
		}
	}
	return prime;
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned long long int num = value;
	do {
		num++;
	} while (!checkPrime(num));

	return num;
}