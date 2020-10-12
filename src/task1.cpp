#include "task1.h"


unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned int result = min;
	for (unsigned int i = min; i < max; i++)
	{
		if (result < i)
		{
			int a = i, b = result;
			while (a % b != 0)
			{
				int temp = a;
				a = b;
				b = temp % a;
			}
			result = result * i / b;
		}
		else
		{
			int a = result, b = i;
			while (a % b != 0)
			{
				int temp = a;
				a = b;
				b = temp % a;
			}
			result = result * i / b;
		}
	}
	return result;
};