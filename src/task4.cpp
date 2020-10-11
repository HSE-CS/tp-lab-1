#include "task4.h"
#include "math.h"
#include "string.h"

char * sum(char *x, char *y)
{
	char *bigSum, *newBigSum, *newx, *newy;
	int xlen = strlen(x), ylen = strlen(y), finLen = xlen > ylen ? xlen + 1 : ylen + 1;
	int minLen = abs(finLen - xlen - ylen - 1), index = 0, remaining = 0, current = 0;

	newBigSum = new char[finLen];
	newx = new char[xlen];

	for (int i = xlen - 1; i >= 0; i--) {
		newx[index++] = x[i];
	}

	index = 0;
	newy = new char[ylen];

	for (int i = ylen - 1; i >= 0; i--) {
		newy[index++] = y[i];
	}

	for (index = 0; index < minLen; index++) {
		current = newx[index] - 48 + newy[index] - 48 + remaining;
		newBigSum[index] = current % 10 + 48;
		remaining = current / 10;
	}

	if (xlen > ylen) {
		while (index < xlen) {
			current = newx[index] - 48 + remaining;
			newBigSum[index++] = current % 10 + 48;
			remaining = current / 10;
		}
	}
	else if (ylen > xlen) {
		while (index < ylen) {
			current = newy[index] - 48 + remaining;
			newBigSum[index++] = current % 10 + 48;
			remaining = current / 10;
		}
	}
	
	if (remaining > 0) {
		newBigSum[index++] = remaining + 48;
	}
	
	bigSum = new char[index + 1];
	int ind = 0;

	for (int i = index - 1; i >= 0; i--) {
		bigSum[ind++] = newBigSum[i];
	}
	bigSum[index] = '\0';

	delete[] newx;
	delete[] newy;
	delete[] newBigSum;
 
	return bigSum;
}