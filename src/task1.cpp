#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	long x = 1; int y = min;
	while (y <= max)
	{
		if (x % y == 0)
			y++;
		else
		{
			x++;
			y = min;
		}
	}
	return x;
}