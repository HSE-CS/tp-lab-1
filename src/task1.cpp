#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

unsigned long findValue(unsigned int min, unsigned max)
{
	int n = 1;
	while (1)
	{
		for (int i = min; i <= max; i++)
		{
			if (n % i != 0)
				break;
			if ((n % i == 0) && (i == max))
				return n;
		}
		n++;
	}
}