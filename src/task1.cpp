#include <iostream>
#include "task1.h"

using namespace std;

unsigned long findValue(unsigned int min, unsigned max)
{
	int n = 1;
	while(1)
	{
		for(int i = min; i <= max; i++)
		{
			if (n % i != 0)
				break;
			if (n % i == 0)
				if (i == max)
					return number;
		}
		n++;
	}
}