#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0;
	unsigned int challenger = 2;
	while (challenger < hbound) {
		if (checkPrime(challenger)) 
            sum += challenger;
		challenger++;
	}
	return sum;
} 