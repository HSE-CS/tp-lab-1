#include "task3.h"
#include <algorithm>
#include <map>
#include <iostream>

bool IsPrime(unsigned int value) {
	unsigned int d = 2;
	while (d * d <= value) {
		if (value % d == 0) return false;
		d++;
	}
	return true;
}

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0;
	unsigned int number = 2;
	while (number < hbound) {
		if (IsPrime(number)) sum += number;
		number++;
	}
	return sum;
}