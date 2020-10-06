#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max)
{
	unsigned long answer{ max };
	bool flag{ 0 };
	for (;;answer++)
	{
		for (unsigned int divider{ min }; divider <= max; divider++)
		{
			if (answer % divider != 0)
			{
				flag = 0;
				break;
			}
			flag = 1;
		}
		if (flag) return answer;
	}
}
