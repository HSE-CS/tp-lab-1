#include <iostream>
#include <string>
#include "task4.h"

char* sum(char* x, char* y)
{
	if (strlen(y) > strlen(x)) {
		char* buf = y;
		y = x;
		x = buf;
	}

	char* sum = new char[strlen(x)];

	int div = 0, index_sum = 0;
	int index_x = strlen(x) - 1, index_y = strlen(y) - 1;

	while (y[index_y] >= 0) {
		int sumRazryada = (x[index_x--] - '0') + (y[index_y--] - '0') + div;
		sum[index_sum++] = '0' + sumRazryada % 10;
		div = sumRazryada / 10;
	}

	while (x[index_x] >= 0)
	{
		int sumRazryada = (x[index_x--] - '0') + div;
		sum[index_sum++] = '0' + sumRazryada % 10;
		div = sumRazryada / 10;
	}

	if (div)
		sum[index_sum++] = '0' + div;

	sum[index_sum] = '\0';

	char* reverSum = new char[index_sum - 1];

	for (int i = strlen(sum) - 1; i >= 0; i--)
		reverSum[index_sum - i - 1] = sum[i];

	reverSum[index_sum] = '\0';

	return reverSum;
}

