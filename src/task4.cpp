#include"task4.h"
#include<string.h>
using namespace std;
char* add_0(char* arr, int x)
{
	int lg = strlen(arr);
	char* array = new char[ lg + x ];
	array[lg + x] = '\0';

	for (int a = 0; a < lg; a++)
	{
		array[a] = arr[a];
	}
	for (int b = lg; b < lg + x; b++)
	{
		array[b] = '0';
	}
	return array;
}
char* r(char* array)
{
	int x = strlen(array);
	char* arr = new char[strlen(array)];
	arr[strlen(array)] = '\0';


	for (int i = 0; i < strlen(array); i++)
	{
		x = x-1;
		arr[i] = array[x];
	}
	return arr;
}

char* sum(char* x, char* y)
{
	int	length_x = strlen(x);
	int	length_y = strlen(y);


	int L = 0;
	x = r(x);
	y = r(y);


	if (length_y > length_x)
	{
		L = length_y;
		x = add_0(x, length_y - length_x);
	}
	else
	{
		L = length_x;
		y = add_0(y, length_x - length_y);
	}

	char* n_mas = new char[L]; n_mas[L] = '\0';

	int remain = 0;
	for (int i = 0; i < L; i++)
	{

		n_mas[i] = ((((x[i]) - '0') + ((y[i]) - '0') + remain ) % 10) + '0';
		remain = ((((x[i]) - '0') + ((y[i]) - '0') + remain ) / 10);

	}
	if (remain > 0)
	{
		char* n_arr = new char[L + 1]; n_arr[L + 1] = '\0';
		for (int i = 0; i < L; i++) n_arr[i] = n_mas[i];
		n_arr[L] =  remain + '0';
		return r(n_arr);
	}
	return r(n_mas);
}
