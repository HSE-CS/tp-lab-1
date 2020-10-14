#include <iostream>
#include <cmath>
#include "task2.h"

using namespace std;

bool checkPrime(unsigned int value) 
{
	for (unsigned int i = 2; i <= sqrt(value); i++)
		if (value % i == 0)
			return false;
	return true;
}

unsigned long long nPrime(unsigned n) 
{
	unsigned counter = 0;
	for (unsigned int i = 2; counter != n; ++i) 
	{
		if (checkPrime(i)) 
		{
			counter++;
		}
		if (counter == n) 
		{
			return i;
		}
	}
}

unsigned long long nextPrime(unsigned long long value) 
{
	value = value + 1;
	while (true)
	{
		if (checkPrime(i))
			return i;
		else i++;
	}
}