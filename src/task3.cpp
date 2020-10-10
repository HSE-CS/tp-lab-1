#include <iostream>
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long* ar = new unsigned long long [2000000];
	for (unsigned long i = 0; i < hbound; i++) {
		ar[i] = i;
	}

	unsigned long long sum = 0;
	for (unsigned long long i = 2; i < hbound; i++) {
		
		if (ar[i] != 0) {
			sum += ar[i];
			for (unsigned long long j = i * i; j < hbound; j += i) {
				ar[j] = 0;
			}
		}
	}
	return sum;
}


