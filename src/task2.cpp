#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "task2.h"

bool checkPrime(unsigned int value)
{
	if (value > 1)
	{
		for (int i = 2; i <= sqrt(value); i++)
			if (value % i == 0) 
				return false;

		return true;
	}
	else 
		return false;
}
unsigned long long nPrime(unsigned n)
{
	int i = 1, k = 0;
	while (k<n)
	{
		i += 1;
		if (checkPrime(i))
			k += 1;
		
	}
	return i;
}
unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long resrg = value+1;
	while (true)
	{
		if (checkPrime(resrg))
		{
			break;
		}
		resrg += 1;

	}
	return resrg;
}