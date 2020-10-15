#include "task2.h"

bool checkPrime(unsigned int value)
{
    if(value==1)
		return 0;
	for (unsigned i = 2; i<value-1; i++) 
		if (value % i == 0) 
			return 0;
	return 1;
} 

unsigned long long nPrime(unsigned n)
{
    if(n==1)
		return 2;
	unsigned long long prime = 2;
	for(unsigned i=1; i<n;i++)
		prime = nextPrime(prime);
	return prime;
} 

unsigned long long nextPrime(unsigned long long value)
{
    do
		value++;
	while(!checkPrime(value));
	return value;
} 