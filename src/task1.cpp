#include <iostream>
#include "task1.h"

using namespace std;

bool cycle(unsigned int min, unsigned max, unsigned int check) 
{
	for (unsigned int i = min; i <= max; i++) 
	{
		if (check % i != 0) 
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
	unsigned int check = max;
	while (!cycle(min, max, check)) 
	{
		check++;
	};
	return check;
}