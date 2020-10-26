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
	unsigned c = 0;
	for (unsigned int i = 2; c != n; ++i) 
	{
		if (checkPrime(i)) 
		{
			c++;
		}
		if (c == n) 
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
		if (checkPrime(value))
			return value;
		else value++;
	}
}