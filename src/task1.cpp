#include "task1.h"
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>


//Написать программу, определяющую, какое самое маленькое положительное целое
//число делится на все числа из диапазона[1...20] без остатка.

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

