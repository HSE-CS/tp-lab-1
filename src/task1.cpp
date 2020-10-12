#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long target_value = max;

	while (true)
	{
		for (unsigned i = max; i >= min; i--)
		{
			if (target_value % i != 0)
				break;
			if (i==min)
				return target_value;
		}
		target_value += max;
	}

	
}
