#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long s = 0;
	for (unsigned int i = 1; i < hbound; i++) {
		if (checkPrime(i)) {
			s += i;
		}
	}
	return s;
}