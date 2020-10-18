#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long k{ 0 };
	for (int i = 2; i < hbound; i++)
	{
		if (checkPrime(i))
			k += i;
	}
	return k;
}
