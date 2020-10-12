#include "../include/task2.h"

bool checkPrime(unsigned long long value)
{
	if (value <= 1) return false;
	for (unsigned int i = 2; i < value; ++i)
		if (value % i == 0) return false;
	return true;
}

unsigned long long nPrime(unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	while (j != n)
	{
		++i;
		if (checkPrime(i))
			++j;
	}
	return i;
}

unsigned long long nextPrime(unsigned long long value)
{
	++value;
	while (!checkPrime(value))
		++value;
	return value;
}
