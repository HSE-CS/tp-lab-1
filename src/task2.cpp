#include "task2.h"
#include <iostream>
bool checkPrime(unsigned int value)
{
	bool result = true;
	int easyNum = 0;
	for (int i = 2; i <= sqrt(value); i++) {
		if (value % i == 0) {
			result = false;
			break;
		}

		
	}
	return result;
}

unsigned long long nPrime(unsigned n)
{
	int *ar = new int[10000];
	int result = 0, count = 0;
	for (int i = 0; i < 10000; i++)
		ar[i] = i;
	for (int i = 2; i < 10000; i++) {

		if (ar[i] != 0) {
			count++;
			if (count == n) {
				return ar[i];
				break;
			}
			for (int j = i * i; j < 10000; j += i)
				ar[j] = 0;
		}

	}
}

unsigned long long nextPrime(unsigned long long value)
{
	int* ar = new int[10000];
	int next = 0, last = 0;

	for (int i = 0; i < 10000; i++)
		ar[i] = i;

	for (int i = 2; i < 10000; i++) {

		if (ar[i] != 0) {
			last = next;
			next = ar[i];
	
			if (value >= last && value < next ) {
				return next;
				break;
			}
			for (int j = i * i; j < 10000; j += i)
				ar[j] = 0;
		}

	}
	return 0;
}
