#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned int value = max;
	bool found = false;
	while (!found)
	{
		for (unsigned int i = min; i <= max; i++)
		{
			if (value % i == 0)
				found = true;
			else
			{
				found = false;
				break;
			}
		}
		if(!found)
			value++;
	}
	return value;
}