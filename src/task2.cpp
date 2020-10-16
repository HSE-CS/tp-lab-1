
#include <iostream>
#include "task2.h"
using namespace std;

bool checkPrime(unsigned int value) {
	bool x;
	unsigned int j;
	if (value == 1) {
		return false;
	}
	else {
		for (j = 2; j < value; j++) {
			if (value % j == 0) {
				return false;
			}
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n) {
	unsigned long long step = 0;
	unsigned long long val = 0;
	while (step != n) {
		val++;
		if (checkPrime(val)) {
			step++;
		}
	}
	return val;
}

unsigned long long nextPrime(unsigned long long value) {
	if (checkPrime(value)) {
		value++;
	}
	while (!checkPrime(value)) {
		value++;
	}
	return value;
}