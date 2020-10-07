#include "task5.h"

void split(char*** result, int* N, char* buf, char ch)
{
	int i;
	int j = 0;
	int k, z;
	int length_buf = strlen(buf);

	for (i = 0; i < length_buf; i++)
	{
		if (buf[i] == ch)
		{
			*N = *N + 1;
		}
	}

	*N = *N + 1;

	int* places_ch = new int[*N];

	k = 0;
	z = 0;
	for (i = 0; i < length_buf; i++)
	{
		if (buf[i] == ch || i == length_buf - 1)
		{
			places_ch[z] = k;
			z++;
			k = 0;
		}
		else
			k++;
	}

	places_ch[*N - 1]++;

	char** res = new char* [*N];
	j = 0;
	for (i = 0; i < *N; i++)
	{
		res[i] = new char[places_ch[j] + 1];
		j++;
	}

	j = 0;
	for (i = 0; i < *N; i++)
	{
		k = 0;
		while (buf[j] != ch && j < length_buf)
		{
			res[i][k] = buf[j];
			j = j + 1;
			k = k + 1;
		}
		res[i][k] = '\0';
		j = j + 1;
	}

	*(result) = res;

	return;

};