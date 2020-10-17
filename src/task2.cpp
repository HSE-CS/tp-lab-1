#include "task2.h"

using namespace std;

bool checkPrime(unsigned int value) {
	for (unsigned int i = 2; i <= sqrt(value); i++) {
		if (value % i == 0) {
			return false;
		}
	}
	return true;
}


unsigned long long nPrime(unsigned int n) {
	int count = 0;
	for (int i = 2; ; i++) {
		if (checkPrime(i)) {
			count++;
			if (count == n){
				return i;
			}
		}
	}
	return 1;
}


unsigned long long nextPrime(unsigned long long value) {
	value++;
	for (; ; value++) {
		if (checkPrime(value)) {
			return value;
		}
	}
	return 1;
}