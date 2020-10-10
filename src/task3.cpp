#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	int i = 1;
	unsigned long long sum = 0;
	while (i <= hbound)
	{
		if (checkPrime(i))
		{
			sum += i;
		}
		i+=1;
	}
	return sum;

}