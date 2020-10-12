#include "task2.h"

bool checkPrime(unsigned int value)
{
	if (value == 2 || value == 3 || value == 5)
		return true;
	if (value % 2 == 0)
		return false;
	unsigned int n = sqrt(value) ;
	for (unsigned int i = 3; i <= n; i+=2)
		if (value % i == 0)
			return false;
	return true;
}

unsigned long long nextPrime(unsigned long long value)
{
	if (value == 2)
		return 3;
	unsigned long long next_value = value;
	while (true)
	{
		next_value += 2;
		if (checkPrime(next_value))
			return next_value;
	}
}

unsigned long long nPrime(unsigned n)
{
	if (n == 1)
		return 2;
	int count = 2;
	unsigned long long target_value = 3;
	while(count!=n)
	{
		target_value = nextPrime(target_value);
		count++;
	}
	return target_value;
}

