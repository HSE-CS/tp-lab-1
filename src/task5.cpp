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
	char lettercheck;
	int num = 0, counter = 1;
	int len = strlen(buf);
	for (int i = 0; i < len; i++)
	{
		if (i == 1)
			lettercheck = buf[i];
		if ((buf[i] == ch) && (buf[i] != lettercheck))
			counter++;
	}
	*N = counter;
	if (counter != 0)
	{
		*result = new char* [counter];
		int j = 0;
		for (int i = 0; i < counter; i++)
		{
			while (j < len)
			{
				int k = j;
				int counter2 = 0;
				while (buf[k] != ch)
				{
					k++;
					counter2++;
				}
				(*result)[i] = new char[counter2];
				int ns = 0;
				for (int v = j; v < k; v++)
				{
					(*result)[i][ns] = buf[v];
					ns++;
				}
				(*result)[i][counter2] = '\0';
				while ((buf[k] == ch) && (k < len))
					k++;
				j = k;
				if (j == len)
					break;
				i++;
				if (i == counter)
					break;
			}
			if (i == counter)
				break;
		}
	}
}