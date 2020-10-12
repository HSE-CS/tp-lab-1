#include "../include/task4.h"
#include <string>
#include <cstring>

void DelFirst(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i + 1];
		++i;
	}
}

char* sum(char* x, char* y)
{
	int szX = strlen(x);
	int szY = strlen(y);
	unsigned int size = (szX > szY ? szX + 2 : szY + 2);
	char* res = new char[size];
	res[size - 1] = '\0';
	int i = size - 2;
	int inMind = 0;
	int jX = szX - 1;
	int jY = szY - 1;
	res[0] = '!';
	while (jX >= 0 || jY >= 0)
	{
		int yInt = (jY < 0 ? 0 : y[jY] - '0');
		int xInt = (jX < 0 ? 0 : x[jX] - '0');

		if (inMind + yInt + xInt < 10)
		{
			res[i] = (xInt + yInt + inMind) + '0';
			inMind = 0;
		}
		else
		{
			res[i] = (yInt + xInt + inMind - 10 * ((yInt + xInt + inMind) / 10)) + '0';
			inMind = (yInt + xInt + inMind) / 10;
		}
		--i;
		--jX;
		--jY;
	}
	if (inMind != 0)
		res[0] = inMind + '0';
	if (res[0] == '!')
		DelFirst(res);
	

	return res;
	
}
