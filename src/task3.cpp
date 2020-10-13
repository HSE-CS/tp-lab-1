#include "task2.h"
#include "task3.h"


unsigned long long sumPrime(unsigned int hbound) {

	unsigned long long sum{0};

	do {
		hbound--;
		if (checkPrime(hbound))
			sum+=hbound;

	} while ( hbound );

	return sum;
}