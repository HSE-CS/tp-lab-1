#include "task2.h"
using namespace std;

bool checkPrime(unsigned value)
{
	if (value < 2)
		return false;
	for (int i = 2; i <= value - 1; i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}

unsigned long long nPrime(unsigned n)
{
	unsigned long long res = 1;
	size_t order = 0;
	while (order != n)
	{
		res++;
		if (checkPrime(res))
			order++;
	}
	return res;
}

unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long res = value + 1;
	while (!checkPrime(res))
		res++;
	return res;
}