#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	bool aPrime;
	unsigned int index = 1, sent = 3;
	unsigned long long int sum = 0;
	unsigned int *primeNumbers;

	primeNumbers = new unsigned int[hbound];
	primeNumbers[0] = 2;
	sum += 2;

	while (sent < hbound) {
		aPrime = realPrimeStorage(primeNumbers, sent, index);
		if (aPrime) {
			sum += primeNumbers[index];
			index++;
		}
		sent += 2;
	}

	delete[] primeNumbers;

	return sum;
}
