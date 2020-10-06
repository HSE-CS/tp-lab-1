#include "task1.h"

bool checkPrime(unsigned int value)
{
	if (value <= 1)
		return false;
	for (unsigned int i = 2; i < value; i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}
unsigned long long nPrime(unsigned n)
{
	long long num = 1; 
	int primeNumCounter = 0;
	while (primeNumCounter < n) {
		num++;
		if (checkPrime(num))
			primeNumCounter++;
	}
	return num;
}
unsigned long long nextPrime(unsigned long long value)
{
	int nextNumber = value + 1;
	while (true)
	{
		if (checkPrime(nextNumber))
			return nextNumber;
		nextNumber++;
	}
}