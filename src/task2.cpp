#include "task2.h"
#include <algorithm>
#include <map>
#include <iostream>

bool checkPrime(unsigned int value) {
	unsigned int d = 2;
	while (d * d <= value) {
		if (value % d == 0) return false;
		d++;
	}
	return true;
}

unsigned long long nPrime(unsigned n) {
	unsigned index = 0;
	unsigned int number = 2;
	while (index < n) {
		if (checkPrime(number)) index++;
		number++;
	}
	return number - 1;
}

unsigned long long nextPrime(unsigned long long value) {
	unsigned int number = value + 1;
	while (!checkPrime(number)) {
		number++;
	}
	return number;
}