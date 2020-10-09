
#include "task2.h"
bool checkPrime(unsigned int value)
{

	for(int i = 2; i <= value/2; i++)
	{
		if(value % i == 0 )
			return false;
	}
	return true;
}
unsigned long long nPrime(unsigned n)
{
	int i = 0;
	int number = 2;
	while (i < n) 
	{
		if (checkPrime(number))
			i++;
		number++;

	}
	return number-1;
}
unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long i = value+1;
	while(!isPrime(i))
		i++;
	return i;

}
