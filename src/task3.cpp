#include <math.h>
#include "task3.h"
#include <iostream>
using namespace std;

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long s = 0;
	for (unsigned int i = 1; i < hbound; i++) {
		if (checkPrime(i)) {
			s += i;
		}
	}
	return s;
}

bool checkPrime(unsigned int value) {
	if (value >= 2) {
		for (long long i = 2; i < value; i++) {
			if (value % i == 0) {
				return false;
			}
		}
		return true;
	}
	else {
		return false;
	}
}