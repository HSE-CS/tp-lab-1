#include <math.h>
#include "task2.h"
#include <iostream>
using namespace std;

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

unsigned long long nPrime(unsigned n) {
	int count = 0;
	int num = 0;
	for (int i = 2; i < 1000000; i++) {
		if (checkPrime(i)) {
			count++;
		}
		if (count == n) {
			num = i;
			break;
		}
	}
	return num;
}

unsigned long long nextPrime(unsigned long long value) {
	int num = value;
	while (!checkPrime(num)) {
		num++;
	}
	return num;
}