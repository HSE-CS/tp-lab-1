#include <iostream>
#include "task1.h"

using namespace std;

unsigned long findValue(unsigned int min, unsigned max)
{
	int number = 1;
	while (true)
	{
		for (int i = min; i <= max; i++)
		{
			if (number % i != 0)
				break;
			if (number % i == 0)
				if (i == max)
					return number;
		}
		number++;
	}
}