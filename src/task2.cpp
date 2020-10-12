#include "task2.h"

bool realPrimeStorage(unsigned int* primeNumbers, unsigned int value, unsigned int index)
{
	bool aPrime = true;
	unsigned int i = 0, passed = 1;

	while (i < index && passed) {
		if (value % primeNumbers[i] == 0) {
			passed = 0;
		}
		i++;
	}
	if (passed) {
		primeNumbers[index] = value;
		return aPrime;
	}

	return !aPrime;
}


bool checkPrime(unsigned int value)
{
	if (value < 2) {
		return false;
	}
	else if (value == 2) {
		return true;
	}

	bool aPrime;
	unsigned int index = 1, sent = 3;
	unsigned int *primeNumbers;

	primeNumbers = new unsigned int[value];
	primeNumbers[0] = 2;

	while (sent <= value) {
		aPrime = realPrimeStorage(primeNumbers, sent, index);
		if (aPrime) {
			index++;
		}
		sent++;
	}

	delete[] primeNumbers;
	return aPrime;
}


unsigned long long nPrime(unsigned n)
{
	if (n < 2) {
		return 2;
	}

	bool aPrime;
	unsigned int index = 1, searchedNumber = 0, sent = 3;
	unsigned int *primeNumbers;

	primeNumbers = new unsigned int[n]; //ñäåëàòü âåêòîðîì?
	primeNumbers[0] = 2;
	
	while (index < n) {
		aPrime = realPrimeStorage(primeNumbers, sent, index);
		if (aPrime) {
			index++;
		}
		sent += 2;
	}

	searchedNumber = primeNumbers[index - 1];
	delete[] primeNumbers;

	return searchedNumber;
}


unsigned long long nextPrime(unsigned long long value)
{
	if (value < 2) {
		return 2;
	}

	bool aPrime;
	unsigned int sent = 3, index = 0, searchedNumber = 0;
	unsigned int *primeNumbers;

	primeNumbers = new unsigned int[value]; //ñäåëàòü âåêòîðîì?
	primeNumbers[0] = 2;

	while (true) {
		aPrime = realPrimeStorage(primeNumbers, sent, index);
		if (aPrime) {
			if (primeNumbers[index] > value) {
				searchedNumber = primeNumbers[index];
				delete[] primeNumbers;
				return searchedNumber;
			}
			index++;
		}
		sent += 2;
	}
}
