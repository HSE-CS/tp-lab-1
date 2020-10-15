#include "task1.h"



unsigned long findValue(unsigned int min, unsigned max)
{
	//int b = 0;
	int k = 0;
	unsigned int  ch = 0;
	for (int i = 1; ; i++)
	{
		for (int j = min; j <= max; j++)
		{
			if (i % j == 0) {
				ch = i;
				k++;

			}
			else {
				k = 0; 
				break;
			}
			if (k == max - min + 1) return ch;
		}
	}




}