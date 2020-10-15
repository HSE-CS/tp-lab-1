#include "task2.h"

bool checkPrime(unsigned int value)
{
	for (unsigned int i = 2; i <= value / 2; i++)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}
unsigned long long nPrime(unsigned n)
{



	int k = 0;
	unsigned long long number = 0;
		for (int i = 2; k != n; i++)
		{
			if (checkPrime(i))
			{
				number = i;
				k++;
			}
		}
		return number;


}
unsigned long long nextPrime(unsigned long long value)
{

	for (unsigned long long  i = value + 1; ; i++)
	{

		if (checkPrime(i)) return i;

	}
}
