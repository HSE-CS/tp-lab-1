#include "task3.h"
#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	unsigned long long int i = 2;
	while (i < hbound)
	{
		sum+=i;
		i= nextPrime(i);
	}
	return sum;
}