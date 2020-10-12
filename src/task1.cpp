#include "../include/task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long smallest = max - 1;
	bool found = false;

	while (!found)
	{
		++smallest;
		found = true;
		for(unsigned int i = min; i <= max; ++i)
			if (smallest % i != 0)
			{
				found = false;
				break;
			}
	}
	return smallest;
}