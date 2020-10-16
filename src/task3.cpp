#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

bool checkPrime_from3(unsigned int value)
{
	if (value > 1)
	{
		for (int i = 2; i <= pow(value,0.5); i++)
			if (value % i == 0)
				return false;
		return true;
	}
	else
		return false;
}
unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	unsigned long long int i = 2;
	for (i;i < hbound;++i){
		if (checkPrime_from3(i) == 1) {
			//cout << i << '\n';
			sum += i;
		}
	}
	return sum;
}
