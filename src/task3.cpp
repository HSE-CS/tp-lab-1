#include "task3.h"
#include <iostream>

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0;
	for (unsigned int i = 0; i < hbound; i++) {
		if (checkPrime(i)) {
			sum += i;
		}
	}
	return sum;
}