#include "task1.h"
#include <iostream>

using namespace std;

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long res = 1;
	bool find = false;
	int i;
	while (!find)
	{
		for (i = min; i <= max;i++)
		if (res%i != 0)
			break;
		if (i > max)
			find = true;
		else
			res++;
	}
	return res;
}