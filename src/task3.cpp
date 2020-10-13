#include "task3.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <string.h>

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
	unsigned long long sum = 0;
	unsigned int num = 2;
	while (num < hbound)
	{
		if (checkPrime(num))
			sum += num;
		num += 1;
	}
	return sum;
}