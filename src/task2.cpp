#include"task2.h"
#include<math.h>

bool checkPrime(unsigned int value)
{
	bool prime = true;
	if (value == 1) return false;
	for (unsigned int i = 2; i <= ( (value) / 2 ); i++)
	{
		if (value % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}
unsigned long long nPrime(unsigned n)
{
	unsigned count = 0;
	unsigned long long ch = 0;

		for (int i = 2 ; count != n ; i++)
		{
			if (checkPrime(i))
			{
				ch = i;
				count++;
			}
		}

	return ch;
}
unsigned long long nextPrime(unsigned long long value)
{

	unsigned long long nPrime = 0;
	for ( unsigned long long i = value + 1 ;; i++)
		if (checkPrime(i)) return i;

}
