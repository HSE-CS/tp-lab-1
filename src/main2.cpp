#include "task2.h"

int main () {

	unsigned long long a = 123;

	if ( !checkPrime(a) ) {
		a = nextPrime(a);
	}
	else {
		a = nPrime(a);
	}

	return 0;
}
