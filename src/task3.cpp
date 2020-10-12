#include "task3.h"
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound)
{
	vector<int> sieve(hbound);
	int border = sqrt(hbound);
	unsigned long long result = 0;
	for (unsigned int i = 2; i <= border; i++)
		if (sieve[i] == 0)
		{
			result += i;
			for (unsigned int j = i + 1; j < hbound; j++)
				if (j % i == 0)
					sieve[j] = 1;
		}
	for (unsigned int i = border + 1; i < hbound; i++)
		if (sieve[i] == 0)
			result += i;
	sieve.clear();
	return result;
}