
#include "task4.h"
#include <cstring>
#include <stdlib.h>
#include "string.h"

char * sum(char *x, char *y)
{
	char* res;
	int lenx = strlen(x), leny = strlen(y), maxlen = lenx > leny ? lenx : leny;
	res = new char[maxlen + 1];
	int xi = lenx - 1, yi = leny - 1, ri = maxlen - 1;
	int um = 0;
	for (; xi >= 0 && yi >= 0; xi--, yi--, ri--)
	{
		res[ri] = '0' + (x[xi] - '0' + y[yi] - '0' + um) % 10;
		um = (x[xi] - '0' + y[yi] - '0' + um) / 10;
	}
	if (xi<0)
	for (; yi >= 0;yi--,ri--)
	{
		res[ri] = '0' + (y[yi] - '0' + um) % 10;
		um = (y[yi] - '0' + um) / 10;
	}
	else
	for (; xi >= 0; xi--, ri--)
	{
		res[ri] = '0' + (x[xi] - '0' + um) % 10;
		um = (x[xi] - '0' + um) / 10;
	}
	if (um > 0)
	{
		res = (char*)realloc(res, (maxlen + 2)*sizeof(char));
		for (int i = maxlen; i > 0; i--)
			res[i] = res[i - 1];
		res[0] = '0' + um;
		maxlen++;
	}
	res[maxlen] = '\0';
	return res;
}