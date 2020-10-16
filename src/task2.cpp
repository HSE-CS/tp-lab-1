#include "task2.h"
#include <math.h>

bool checkPrime(unsigned int value) 
{
	bool check = true;
	for (unsigned int i = 2; i <= value / 2; i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}

unsigned long long nPrime(unsigned int n) {
	int k = 0;
	for (int i = 2;; i++)
		if (checkPrime(i)) {
			k++;
			if (k == n)
				return i;
		}
	return 1;
}

unsigned long long nextPrime(unsigned long long n) {
	for (unsigned int i = n++;; i++)
		if (checkPrime(i)) {
			return n;
		}
	return 1;
}
