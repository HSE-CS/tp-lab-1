#include "task1.h"

unsigned long long sumPrime(unsigned int hbound)
{
	long long sum = 0;
	bool isSimple = true;
	for (int i = 2; i < hbound; i++)
	{
		for(int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isSimple = false;
				break;
			}
		}
		if (isSimple)
			sum += i;
		isSimple = true;
	}
	return sum;
}