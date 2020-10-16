#include"task1.h"
unsigned long findValue(unsigned int min, unsigned max)
{
	int k = 0, ch = 0;
	for (int i = 1; ; i++)
	{


		for (int j = min; j <= max; j++)
		{

			if (i % j == 0)
			{
				k++;
				ch = i;
			}
			else break;
		}

		if (k == max - min + 1) return ch;
		else k = 0;

	}
}

