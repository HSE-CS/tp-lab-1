
#include "task2.h"
#include "task3.h"
#include <iostream>

using namespace std;

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long res = 0;
	for (unsigned long long i = 1; (i = nextPrime(i)) < hbound;)
	{
		res += i;
	}
	return res;
}