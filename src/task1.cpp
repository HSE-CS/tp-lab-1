#include <iostream>
#include "task1.h"

using namespace std;

unsigned long findValue(unsigned int min, unsigned max)
{
	int i, ans = 0, result = 1;
	while (ans==0)
	{
		for (i = min; i <= max; i++)
		{
			if (result % i != 0)
				break;
		}
		if (i >= max)
			ans = 1;
		else
			result++;
	}
	return (result);
}