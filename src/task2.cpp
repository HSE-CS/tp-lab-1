#include "task2.h"

bool checkPrime(unsigned int value)
{
	for (unsigned int i = 2; i < value; i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
};

unsigned long long nPrime(unsigned n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
	{
		n--;
		int k = 2;
		while (n != 0)
		{
			k++;
			bool isPrime = true;
			for (unsigned int i = 2; i < k; i++)
			{
				if (k % i == 0)
					isPrime = false;
			}
			if (isPrime)
				n--;
		}
		return k;
	}
};

unsigned long long nextPrime(unsigned long long value)
{
	int nValue = value + 1;
	while (true)
	{
		bool f = 1;
		for (unsigned int i = 2; i < nValue; i++)
		{
			if (nValue % i == 0)
			{
				f = 0;
				break;
			}
		}
		if (f)
			return nValue;
		else
			nValue++;
	}
};