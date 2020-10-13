#include <cmath>
#include "task2.h"


bool checkPrime(unsigned int value) {

	if ( value < 2 )
		return false;

	unsigned int v = (unsigned int) sqrt( (double) value) + 1;

	for (auto i = 2U; i < v; i++) {
		if ( value % i == 0 )
			return false;
	}

	return true;
}

unsigned long long nPrime(unsigned n) {

	unsigned long long t{1};

	 do {
	 	t++;
		if ( checkPrime(t) )
			n--;

	} while ( n );

	return t;
}

unsigned long long nextPrime(unsigned long long value) {

	do {
		value++;

	} while ( !checkPrime(value) );

	return value;
}