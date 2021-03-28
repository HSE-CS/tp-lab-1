#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long long number = 1;
	int i;
	while (1)
	{
		i = min;
		while (i <= max)
		{
			if (number % i == 0)
			{
				if (i == max)
					return number;
				i = i + 1;
			}
			else
				break;
		}
		number = number + 1;
	}
}