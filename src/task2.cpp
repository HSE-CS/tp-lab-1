#include <math.h>
#include "task2.h"

bool checkPrime(unsigned int value) {
	if (value == 1) 
		return false;
	for (int i = 2; i * i <= value; i++) {
		if (value % i == 0)
			return false;
	}
	return true;
}

unsigned long long nPrime(unsigned n) {
	int kol = 0;
	int fl = -1;
	int i = 1;
	while (kol != n) {
		fl = checkPrime(i);
		if (fl == 1) {
			kol++;
		}
		if (kol == n) {
			return i;
		}
		i++;
	}
}

unsigned long long nextPrime(unsigned long long value) {
	value++;
	while (true) {
		int n = { 0 };
		for (int i = 2; i < value; i++) { 
			if (0 == value % i) n++;
		}
		if (0 == n) {
			return value;
		}
		else value++;
	}
}