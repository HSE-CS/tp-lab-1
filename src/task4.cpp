#include "task4.h"

int max(int a, int b)
{
	if (a < b)
		return b;
	else
		return a;
}

char* sum(char* x, char* y)
{
	int len_x = strlen(x);
	int len_y = strlen(y);
	int len_res = max(len_x, len_y) + 1;
	char* result = new char[len_res + 1]{ '\0' };
	int buff = 0;
	len_x--;
	len_y--;
	int i;
	for (i = len_res - 1; i > 0; i--)
	{
		if (len_x >= 0 && len_y >= 0)
		{
			int digit = x[len_x] + y[len_y] - 2 * 48;
			digit += buff;
			buff = 0;
			if (digit > 9)
			{
				result[i] = digit - 10 + 48;
				buff = 1;
			}
			else
				result[i] = digit + 48;
		}
		else if (len_x >= 0)
		{
			if (x[len_x] + buff == 48 + 10)
				result[i] = '0';
			else
			{
				result[i] = x[len_x] + buff;
				buff = 0;
			}
		}
		else if (len_y >= 0)
		{
			if (y[len_y] + buff == 48 + 10)
				result[i] = '0';
			else
			{
				result[i] = y[len_y] + buff;
				buff = 0;
			}
		}
		len_x--;
		len_y--;
	}
	if (buff == 1)
		result[i] = '1';
	else
	{
		int j = 0;
		for (j = 0; j < len_res - 1; j++)
			result[j] = result[j + 1];
		result[j] = '\0';
	}
	return result;
}
