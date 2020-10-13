#include "task2.h"
#include <iostream>
#include <cmath>

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
	int i = 2;
	while (counter <= n)
	{
		if (checkPrime(i)) 
		{
			counter++;
		}
		if (counter == n) 
		{
			return i;
		}
		i++;
	}
}

unsigned long long nextPrime(unsigned long long value) 
{
	value = value + 1;
	for (value; true; value++) 
	{
		if (checkPrime(value)) 
		{
			return value;
		}
	}
}