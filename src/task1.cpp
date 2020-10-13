#include <iostream>
#include "task1.h"

using namespace std;

bool cycle(unsigned int min, unsigned max, unsigned int number) 
{
	for (unsigned int i = min; i <= max; ++i) 
	{
		if (number % i != 0) 
		{
			return false;
		}
		if (i == max) 
		{
			return true;
		}
	}
}

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned int number = max;
	while (!cycle(min, max, number)) 
	{
		number++;
	};
	return number;
}