#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

bool checkPrime(unsigned int value)
{
	if (value > 1)
	{
		for (int i = 2; i < value; i++)
			if (value % i == 0)
				return false;
		return true;
	}
	else
		return false;
}

unsigned long long nPrime(unsigned n) {
	unsigned long long i = 0;
	unsigned long long number = 2;
	while (i != n) {
		if (checkPrime(number)) {
			++i;
		}
		++number;
	}
	return number - 1;
}

unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long k = value + 1;
	while (true)
	{
		if (checkPrime(k) == 1)
			return k;
		else
			++k;
	}
}