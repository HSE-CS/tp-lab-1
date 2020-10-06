#include "task4.h"
#include <string.h>
#include <algorithm>
using namespace std;

char* sum(char* x, char* y)
{
	size_t len_x = strlen(x);
	size_t len_y = strlen(y);

	char* temp = x;
	size_t min = (len_x >= len_y) ? len_y : len_x;
	size_t max;
	if (len_x < len_y)
	{
		max = len_y;
		temp = y;
		y = x;
		x = y;
		swap(len_x, len_y);
	}
	else
		max = len_x;

	char* res = new char[max + 2];

	int i = 0, rem = 0, tmp = 0;
	char c;
	while (i != min)
	{
		tmp = (x[len_x - 1 - i] - '0') + (y[len_y - 1 - i] - '0') + rem;
		if (tmp > 9)
			c = tmp % 10 + '0';
		else
			c = tmp + '0';
		res[i] = c;
		rem = tmp / 10;
		i++;
	}

	while (rem != 0 && i != max)
	{
		tmp = x[i] - '0' + rem;
		if (tmp > 9)
			c = tmp % 10 + '0';
		else
			c = tmp + '0';
		res[i] = c;
		rem = tmp / 10;
		i++;
	}

	if (rem != 0)
	{
		res[i] = rem + '0';
		i++;
	}

	int j = i;
	for (j; j < max; j++)
		res[j] = x[max - 1 - j];
	
	res[j] = '\0';
	reverse(res, res + strlen(res));

	return res;
}