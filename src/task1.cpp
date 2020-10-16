#include "task1.h"
unsigned long  findValue(unsigned min, unsigned max) {
	unsigned long  ans = 1;
	unsigned long prime = min;
	for (unsigned long i = min; i <= max; i++) {
		if (isPrime(i)) {
			for (unsigned long k = 1; k < max; k++) {
				if (pow(i, k) >= min && pow(i, k) <= max) ans *= i;
				else break;
			}
		}
	}
	if (ans == 1) return 0;
	else return ans;
}
bool isPrime(unsigned long n) {
	for (unsigned long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}