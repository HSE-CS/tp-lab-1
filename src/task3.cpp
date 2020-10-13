#include <iostream>
#include "task3.h"

using namespace std;

bool checkPrime(unsigned int value)
{
	for (unsigned int i = 2; i <= sqrt(value); i++)
		if (value % i == 0)
			return false;
	return true;
}

unsigned long long sumPrime(unsigned int hbound) 
{
	long sumprime = 0;
	for (int i = 2; i < hbound; i++) 
	{
		if (checkPrime(i)==true) 
		{
			sumprime =sumprime+i;
		}
	}
	return sumprime;
}