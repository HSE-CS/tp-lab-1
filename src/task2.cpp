
#include "task2.h"

bool checkPrime(unsigned int value)
{
	int i;
	for (i = 2; i <= value / 2;i++)
	if (value % i == 0)
		break;
	if (i > value / 2)
		return true;
	else
		return false;
}

unsigned long long nPrime(unsigned n)
{
	unsigned long long res = 2;
	for (int i = 1; i < n; i++)
		res = nextPrime(res);
	return res;
}

unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long res;
	for (res = value + 1; !checkPrime(res); res++)
		;
	return res;
}