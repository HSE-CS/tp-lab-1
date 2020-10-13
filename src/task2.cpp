#include "task2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <string.h>

using namespace std;

bool checkPrime(unsigned int value)
{
	for (unsigned int i = 2; i < value; i++)
		if (value % i == 0)
			return false;
	return true;
}

bool checkPrimeLong(unsigned long long value)
{
	for (unsigned long long i = 2; i < value; i++)
		if (value % i == 0)
			return false;
	return true;
}

unsigned long long nPrime(unsigned n)
{
	int count = 0;
	unsigned long long num = 1;
	while (count != n)
	{
		num += 1;
		if (checkPrimeLong(num))
			count += 1;
	}
	return num;

}

unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long num = value;
	while(!checkPrimeLong(num))
	{
		num += 1;
	}
	return num;
}