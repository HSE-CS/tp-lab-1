#include "task2.h"

bool checkPrime(unsigned int value)
{
	int k = 0;
	for ( int i = 1; i <= value; i++)
	{
		if (value % i == 0) k++;
}
	if (k == 2) return true;
	else return false;
}
unsigned long long nPrime(unsigned n)
{



	int k = 0;
	unsigned long long number = 0;
		for (int i = 1; k != n; i++)
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