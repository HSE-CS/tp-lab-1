#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	int number = 1;
	int i;
	while (1)
	{
		for (i = min; i <= max; i++)
		{
			if (number % i == 0)
			{
				if (i == max)
				{
					return number;
				}
				else
				{
					number = number + 1;
				}
			}
			else
			{
				number = number + 1;
				break;
			}
		}
	}
}