#include"task1.h"

bool IsDel(unsigned int min,unsigned max,unsigned int number)
{
	for(int i = min; i <= max; i++ )
	{
		if(number % i != 0)
			return false;
	}
	return true;
}

unsigned long findValue(unsigned int min,unsigned max)
{
	unsigned int number = max;
	while(!IsDel(min,max,number))
		number++;


}

