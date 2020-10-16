#include"task5.h"
#include<cstring>

void split(char*** result, int* N, char* buf, char ch)
{
	int L = strlen(buf);
	*N = 1;

	for (int i = 0; i < L; i++)
		if ( buf[i] == ch ) (*N)++;

	(*result) = new char*[*N];

	for (int i = 0; i < (*N); i++)
	{
		(*result)[i] = new char[L];
		(*result)[i][L] = '\0';
	}

	int x = 0, y = 0, k = 0;
	for (int j = 0; j <= L; j++)
	{
		if (buf[j] != ch && j != L) continue;
		else
		{
			y = j - x;

			for (int j = 0; j < y; j++) 
					(*result)[k][j] = buf[x++];

			(*result)[k][y] = '\0';
			k++;
			x = ++j;
		}
	}
}
