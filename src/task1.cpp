#include <iostream>
#include <climits>
using namespace std;

unsigned long findValue(unsigned int min, unsigned max) {
	for (unsigned long divided_num = 1; divided_num < ULONG_MAX;divided_num++)
	{
		for (size_t divisor = min; divisor <= max; divisor++)
		{
			if ((divisor == max) && (divided_num % divisor == 0)) return divided_num;
			if (divided_num % divisor == 0) continue;
			else break;
		}
			
	}
}