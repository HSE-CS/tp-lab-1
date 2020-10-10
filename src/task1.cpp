#include "task1.h"
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>


unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long maxul = 18446744073709551615;
	unsigned long i = max;
	while (i != maxul)
	{
		int s = 0;
		for (int j = min; j <= max; j++)
		{
			if (i % j == 0)
				s++;
			else break;
		}
		if (s == (max-min+1))
			return i;
		i++;
	}

	return 0;
}

