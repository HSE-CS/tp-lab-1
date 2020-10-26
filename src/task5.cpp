#include <iostream>
#include <cmath>
#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <iterator>
#include "task5.h"

using namespace std;

void split(char*** result, int* N, char* buf, char ch)
{
	char letter;
	int n = 0, c = 1;
	int len = strlen(buf);
	for (int i = 0; i < l; i++)
	{
		if (i == 1)
			letter = buf[i];
		if ((buf[i] == ch) && (buf[i] != letter))
			c++;
	}
	*N = c;
	if (c != 0)
	{
		*result = new char* [c];
		int j = 0;
		for (int i = 0; i < c; i++)
		{
			while (j < len)
			{
				int k = j;
				int c2 = 0;
				while (buf[k] != ch)
				{
					k++;
					c2++;
				}
				(*result)[i] = new char[c2];
				int ns = 0;
				for (int v = j; v < k; v++)
				{
					(*result)[i][ns] = buf[v];
					ns++;
				}
				(*result)[i][c2] = '\0';
				while ((buf[k] == ch) && (k < len))
					k++;
				j = k;
				if (j == len)
					break;
				i++;
				if (i == c)
					break;
			}
			if (i == c)
				break;
		}
	}
}
