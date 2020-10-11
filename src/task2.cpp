#include "task2.h"
#include <iostream>
#include <math.h>

bool checkPrime(unsigned int value) {
	if (value < 2) {
		return false;
	}
	for (unsigned int i = 2; i <= value / 2; i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n) {
	unsigned int counter = 1;
	long long value = 2;
	while (counter <= n) {
		if (checkPrime(value)) {
			counter++;
		}
		value++;
	}
	return value-1;
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned long long result = value + 1;
	while (!checkPrime(result)) {
		result++;
	}
	return result;
}