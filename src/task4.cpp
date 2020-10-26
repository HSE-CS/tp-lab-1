#include <iostream>
#include <cstring>
#include <cmath>
#include "task4.h"

using namespace std;

char* sum(char* x, char* y) 
{
	int l = max(strlen(x), strlen(y));
	int l1 = strlen(x);
	int l2 = strlen(y);
	char* buf = new char[len + 1];
	char* z = new char[len];
	int o = 0;
	if (l1 > l2) 
	{
		for (int i = 0; i < l1 - l2; i++) 
		{
			z[i] = '0';
		}
		for (int j = 0; j < l2; j++) 
		{
			z[l1 - l2 + j] = y[j];
		}
		y = z;
	}
	if (l2 > l1) 
	{
		for (int i = 0; i < l2 - l1; i++) 
		{
			z[i] = '0';
		}
		for (int j = 0; j < l1; j++) 
		{
			z[l2 - l1 + j] = x[j];
		}
		x = z;
	}
	for (int i = l - 1; i > -1; --i) 
	{
		buf[i] = x[i] + y[i] + o - '0';
		o = 0;
		if (buf[i] > 57) 
		{
			buf[i] = buf[i] - 10;
			o=o+1;
			if ((i == 0) && (o > 0))
			{
				for (int i = len; i > -1; --i) 
				{
					buf[i] = buf[i - 1];
				}
				buf[0] = '1';
			}
		}
		if ((i == 0 ) && (o == 0))
		{
			buf[len] = '\0';
		}
	}
	delete[] z;
	return buf;
}