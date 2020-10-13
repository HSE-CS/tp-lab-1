#include "task1.h"

unsigned long NOD (unsigned long a, unsigned long b) {

	while ( a && b ) {
		if ( a >= b )
			a = a % b;
		else
			b = b % a;
	}
	return (a+b);
}

unsigned long NOK (unsigned long n, unsigned long b) {
	return n / NOD(n, b) * b;
}

unsigned long findValue(unsigned int min, unsigned max) {

	unsigned long n{min};

	for (auto i = min + 1; i <= max; i++) {
		n = NOK(n, i);
	}

	return n;
}
