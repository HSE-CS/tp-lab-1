#include"task3.h"
#include"task2.h"

unsigned long long sumPrime(unsigned int hbound)
{

	unsigned long long sumPrime = 0;
	for (int i = 2; i < hbound; i++)
		if (checkPrime(i)) sumPrime += i;
	return sumPrime;


}