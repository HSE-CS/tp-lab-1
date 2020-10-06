#include "task5.h"
#include <string.h>
#define MAX 10
using namespace std;

void split(char*** result, int* N, char* buf, char ch)
{
	*N = 1;
	size_t len = strlen(buf);
	for (size_t i = 0; i < len; i++)
		if (buf[i] == ch)
			(*N)++;

	char** res = new char* [(*N)];
	for (size_t i = 0; i < (*N); i++)
		res[i] = new char[MAX];

	size_t k = 0;
	size_t c = 0;
	for (size_t i = 0; i < (*N); i++)
	{
		c = 0;
		while (buf[k] != ch && k != len)
		{
			res[i][c] = buf[k];
			k++;
			c++;
		}
		res[i][c] = '\0';
		if (buf[k] == ch)
			k++;
	}

	*result = res;
}