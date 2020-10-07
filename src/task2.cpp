#include "task2.h"

bool checkPrime(unsigned int value)
{
	for (unsigned int i = 2; i <= value / 2; i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}
unsigned long long nPrime(unsigned n)
{
	unsigned long long prime = 0, count = 1, cur = 2;
	while (count <= n)
	{
		if (checkPrime((unsigned int)cur))
		{
			prime = cur;
			count++;
		}
		cur++;
	}
	return prime;
}
unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long cur = value;
	do
	{
		cur++;
	} while (!checkPrime((unsigned int)cur));
	return cur;
}