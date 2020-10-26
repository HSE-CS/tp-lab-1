#include <iostream>
#include <cmath>
#include "task2.h"
#include "task3.h"

using namespace std;

unsigned long long sumPrime(unsigned int h) 
{
	long sum = 0;
	for (int i = 2; i < h; i++) 
	{
		if (checkPrime(i)==true) 
		{
			sum =sum+i;
		}
	}
	return sum;
}