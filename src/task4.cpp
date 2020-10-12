#include <iostream>
#include <cstring>
#include "task4.h"

char* sum(char* x, char* y)
{
	/*if (strlen(y) > strlen(x)) {
		char* buf =new char[strlen(y) + 1];
		buf = y;
		y = x;
		x = buf;
	}*/

	char* sum = new char[strlen(x) + 2];
	for (int i = 0; i <= strlen(x); i++)
		sum[i] = '\0';

	int div = 0, index_sum = 0;
	int index_x = strlen(x) - 1, index_y = strlen(y) - 1;

	while (index_y >= 0) {
		int sumRazryada = (x[index_x--] - '0') + (y[index_y--] - '0') + div;
		sum[index_sum++] = '0' + sumRazryada % 10;
		div = sumRazryada / 10;
	}

	while (index_x >= 0)
	{
		int sumRazryada = (x[index_x--] - '0') + div;
		sum[index_sum++] = '0' + sumRazryada % 10;
		div = sumRazryada / 10;
	}

	if (div)
		sum[index_sum++] = '0' + div;

	sum[index_sum] = '\0';

	char* reverSum = new char[strlen(sum)];

	for (int i = strlen(sum) - 1; i >= 0; i--)
		reverSum[index_sum - i - 1] = sum[i];

	reverSum[index_sum] = '\0';

	return reverSum;
}