#include <iostream>
#include <cmath>
#include "task2.h"
#include "task3.h"

using namespace std;

unsigned long long sumPrime(unsigned int hbound) 
{
	long summa = 0;
	for (int i = 2; i < hbound; i++) 
	{
		if (checkPrime(i)==true) 
		{
			summa =summa+i;
		}
	}
	return summa;
}