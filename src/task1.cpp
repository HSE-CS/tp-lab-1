#include "task1.h"
#include <iostream>
using namespace std;

unsigned long findValue(unsigned int min, unsigned int max)
{
	unsigned int counter = 1, currentNumber = 3, i = 0, passed = 1, searchedNumber = 1, currentDivider;
	unsigned int *primeNumbers, *dividers;

	primeNumbers = new unsigned int[max * 2]; //сделать вектором?
	primeNumbers[0] = 2;

	while (currentNumber <= max) {
		passed = 1;
		i = 0;
		while (i < counter && passed) {
			if (currentNumber % primeNumbers[i] == 0) {
				passed = 0;
			}
			i++;
		}
		if (passed) {
			primeNumbers[counter] = currentNumber;
			counter++;
		}
		currentNumber += 2;
	}

	currentNumber = 0;
	i = 0;
	dividers = new unsigned int[counter];
	for (int k = 0; k < counter; k++) {
		dividers[k] = 0;
	}

	for (int k = min; k <= max; k++) {
		currentNumber = k;
		i = 0;
		while (currentNumber > 1 && i < counter) {
			currentDivider = 0;
			while (currentNumber % primeNumbers[i] == 0) {
				currentDivider++;
				currentNumber /= primeNumbers[i];
			}
			if (currentDivider > dividers[i]) {
				dividers[i] = currentDivider;
			}
			i++;
		}
	}

	for (i = 0; i < counter; i++) {
		for (int k = 0; k < dividers[i]; k++) {
			searchedNumber *= primeNumbers[i];
		}
	}

	delete[] primeNumbers;
	delete[] dividers;

	return searchedNumber;
}