#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
bool checkPrime(unsigned int value) {
	for (unsigned int i = 2; i < value; i++) {
		boll g = false;
		if (value% i = 0) {
			break;
		}
		if (i = value - 1) {
			g = true;
		}
	}
	return g;
}
unsigned long long sumPrime(unsigned int hbound) {
	int F = 2;
	for (unsigned int i = 3; i < hbound; i++) {
		if (checkPrime(i) = true) {
			F = F + i;
		}
	}
	return F;
}