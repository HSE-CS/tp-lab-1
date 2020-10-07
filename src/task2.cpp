#include "task2.h"

bool checkPrime(unsigned int value)
{
	if (value == 1 || value == 0)
		return false;

	for (unsigned int i = value - 1; i > 1; i--)
	{
		if (value % i == 0)
			return false;
	}

	return true;
}

unsigned long long nPrime(unsigned n)
{
	unsigned long long prime_number = 1;

	while (n != 0)
	{
		prime_number = nextPrime(prime_number);
		n--;
	}
	return prime_number;
}
unsigned long long nextPrime(unsigned long long value)
{
	value++;
	while (!checkPrime(value++));

	return --value;
}
