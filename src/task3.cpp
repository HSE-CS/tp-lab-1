#include <iostream>
#include <cmath>
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0;
	for (int i = 2; i < hbound; i++) {
		sum += checkPrime(i) ? i : 0;
	}
	return sum;
}