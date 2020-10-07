#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned int step = max;
	unsigned long int target_value = max;

	while (true)
	{
		int counter = 0;
		for (int i = max; i >= min; i--)
		{
			if (target_value % i == 0)
				counter += 1;
			else
				break;
		}

		if (counter == max - min + 1)
			return target_value;
		else
			target_value += step;
	}
}