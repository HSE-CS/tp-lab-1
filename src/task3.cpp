#include "task3.h"
unsigned long long sumPrime(unsigned int hbound)
{
    int sum = 0;
	for (int i = 2; i < hboubd; i++)
	{
		if(checkPrime(i) == true)
			sum = sum + i;
	}
    return sum;
};

