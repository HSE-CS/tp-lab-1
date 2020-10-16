#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max)
{
	bool number_foundet = false;
	unsigned long number{ max-1 };
	while (1) {
		if (number_foundet)
			return number;
		else {
			number++;
			int count_unmodable{ 0 }; //count of numbers, which mod i != 0
			for (int i = min; i < max+1; i++)
			{
				if (!(number % i == 0))
					count_unmodable++;
			}
			if (!(count_unmodable))
				number_foundet = true;
		}
	}
}
