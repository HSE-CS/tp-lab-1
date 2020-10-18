#include "task5.h"
#include <string.h>

char* fstr(char* buf, int rt, int n)
{
	char* a = 0;
	a = new char[n + 1];
	for (int i = 0; i < n; i++)
	{
		a[i] = buf[rt + i];
	}
	a[n] = '\0';
	return a;
}

void split(char*** result, int* N, char* buf, char ch)
{
	int dl = strlen(buf);
	char** ares{ 0 };
	int meanin{ 0 };
	for (int i = 0; i < dl; i++) {
		if (buf[i] == ch)
			meanin++;
	}
	*N = meanin + 1;

	ares = new char* [*N];
	for (int i = 0; i < *N; i++) {
		ares[i] = 0;
	}
	int i_n{ 0 };
	int k{ 0 };
	for (int i = 0; i < dl; i++) {
		if (buf[i] == ch) {
			int lal = i - i_n;
			ares[k] = new char[lal + 1];
			for (int i = 0; i < lal; i++)
			{
				ares[k][i] = buf[i_n + i];
			}
			ares[k][lal] = '\0';
			i_n = i + 1;
			k++;
		}
	}
	int lal = dl - i_n;
	ares[k] = new char[lal + 1];
	for (int i = 0; i < lal; i++)
	{
		ares[k][i] = buf[i_n + i];
	}
	ares[k][lal] = '\0';
	(*result) = ares;
}




