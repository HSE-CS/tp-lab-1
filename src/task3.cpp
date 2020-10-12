#include "../include/task2.h"
#include "../include/task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned int i = 2;
	unsigned long long sum = 0;
	while (i < hbound)
	{
		sum += i;
		i = nextPrime(i);
	}
	return sum;
}
