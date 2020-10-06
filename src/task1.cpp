#include "task1.h"
using namespace std;

unsigned long findValue(unsigned min, unsigned max)
{
	unsigned long res = 1;
	for (int i = min; i <= max; i++)
		res = LCM(res, i);
	return res;
}

unsigned long LCM(unsigned res, unsigned i)
{
	unsigned long div = 1;
	while (1)
	{
		if (div % res == 0 && div % i == 0)
			return div;
		div++;
	}

}