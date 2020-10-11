#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
bool checkPrime(unsigned int value) {
	for (unsigned int i = 2; i < value; i++) {
		bool g = false;
		if (value % i = 0) {
			break;
		}
		if (i = value - 1) {
			g=true;
		}
	}
	return g;
}
unsigned long long nPrime(unsigned int n) {
	unsigned int g = 0;
	int chislo = 2;
	while (g != n) {
		if (checkPrime(chislo) = true) {
			g++;
		}
		chislo++;
	}
	return chislo--;
}
unsigned long long nextPrime(unsigned long long value) {
	unsigned long long chislo = value++;
	while (checkPrime(chislo) = false) {
		chislo++;
	}
	return chislo;
}