#include "task5.h"
#include <string.h>

void split(char*** result, int* N, char* buf, char ch)
{
	int len = strlen(buf);
	*N = 1;
	for (int i = 0; i < len; i++)
	{
		if (buf[i] == ch)
			(*N)++;
	}
	char** res = new char* [(*N)];
	int sym = 0;
	for (int i = 0; i < *N; i++)
	{
		int wordlen = 0;
		while (buf[sym] != ch && sym < len)
		{
			sym++;
			wordlen++;
		}
		sym -= wordlen;
		res[i] = new char[wordlen];
		res[i][wordlen] = '\0';
		for (int j = 0; j < wordlen; j++)
			res[i][j] = buf[sym + j];
		sym += wordlen + 1;
	}
	*result = res;
}