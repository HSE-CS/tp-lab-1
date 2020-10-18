#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max)
{
	bool Per1 = false;
	unsigned long Per { max - 1 };
	while (1) {
		if (Per1)
			return Per;
		else {
			Per++;
			int Per2{ 0 }; 
			for (int i = min; i < max+1; i++)
			{
				if (!(Per % i == 0))
					Per2++;
			}
			if (!(Per2))
				Per1 = true;
		}
	}
}
