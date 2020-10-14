#include "task4.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <string.h>

using namespace std;

int* reverc(int* ar, int n)
{
	int temp;
	int i, j;
	for (j = 0, i = n - 1; j < i; --i, ++j)
	{
		temp = ar[i];
		ar[i] = ar[j];
		ar[j] = temp;
	}
	return ar;
}

char* sum(char* x, char* y)
{
	int i = 0, j = 0, count = 0, flag = 0;
	int temp = 0;
	int* arr = new int[50]();
	char* res = new char[50]();
	int* xi = new int[50]();
	int* yi = new int[50]();
	for (i = 0; i < strlen(x); i++)
		xi[i] = x[i] - '0';
	for (i = 0; i < strlen(y); i++)
		yi[i] = y[i] - '0';
	if (strlen(x) > strlen(y))
	{
		for (i = strlen(y); i < strlen(x); i++)
			yi[i] = 0;
		int c = strlen(x) - 1;
		for (i = strlen(y) - 1; i >= 0; i--)
		{
			temp = yi[i];
			yi[i] = yi[c];
			yi[c] = temp;
			c -= 1;
		}
	}
	else if (strlen(x) < strlen(y))
	{
		for (i = strlen(x); i < strlen(y); i++)
			xi[i] = 0;
		int c = strlen(y) - 1;
		for (i = strlen(x) - 1; i >= 0; i--)
		{
			temp = xi[i];
			xi[i] = xi[c];
			xi[c] = temp;
			c -= 1;
		}
	}
	


	for (i = strlen(x)-1; i >= 0; i--)
	{
		if (arr[count] == 0)
			flag = 0;
		else flag = 1;

		if (xi[i] + yi[i] + flag < 10)
		{
			arr[count] = xi[i] + yi[i] + flag;
			if( i!= 0)
				count += 1;
		}
		else
		{
			arr[count] = (xi[i] + yi[i] + flag) - 10;
			count += 1;
			arr[count] = 1;
		}		
	}
	arr = reverc(arr, count+1);
	for (i = 0; i <= count; i++)
		res[i] = arr[i] + '0';
	return res;
}

