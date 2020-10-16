#include "task2.h"

bool checkPrime(unsigned int value)
{

	if (value == 0 || value == 1)
		return false;
	else {
		bool isPrime{ true };
		for (int i = 2; i < value; i++)
		{
			if (value % i == 0) {
				isPrime = false;
				break;
			}
		}
		return isPrime;
	}
}

unsigned long long nPrime(unsigned n)
{
	unsigned long long value{ 1 };
	for (int i = 0; i < n;)
	{
		value++;
		if (checkPrime(value))
			i++;
	}
	return value;
}

unsigned long long nextPrime(unsigned long long value)
{
	while (!(checkPrime(++value)));
	return value;
}
