#include"task4.h"
#include<string.h>
#include<iostream>
using namespace std;

int charToInt(char x) {
	return x - '0';
}

char intToChar(int x) {
	return x + '0';
}

char* add_zero(char* mas, int n)
{
	char* new_mass = new char[ strlen(mas) + n ];
	new_mass[strlen(mas) + n] = '\0';
	for (int i = 0; i < strlen(mas); i++)
	{

		new_mass[i] = mas[i];

	}
	for (int j = strlen(mas); j < strlen(mas) + n; j++)
	{

		new_mass[j] = '0';

	}

	return new_mass;
}
char* rev(char* mas)
{
	int l = strlen(mas);
	int k = l;
	char* n_mas = new char[l];
	n_mas[l] = '\0';
	for (int i = 0; i < l ; i++)
	{
		k--;
		n_mas[i] = mas[k];
	}
	return n_mas;
}

char* sum(char* x, char* y)
{
	int l;
	int	l_x = strlen(x);
	int	l_y = strlen(y);

	x = rev(x);
	y = rev(y);


	if (l_x > l_y)
	{

		y = add_zero(y, l_x - l_y);
		l = l_x;

	}
	else {

		x = add_zero(x, l_y - l_x);
		l = l_y;
	}

	char* new_mas = new char[l];
	new_mas[l] = '\0';

	int d = 0;

	for (int i = 0; i < l; i++)
	{

		new_mas[i] = intToChar((charToInt(x[i]) + charToInt(y[i]) + d ) % 10);
		d = ( charToInt(x[i]) + charToInt(y[i]) + d ) / 10;

	}

	if (d > 0)
	{
		char* new_mass = new char[l + 1];
		new_mass[l + 1] = '\0';
		for (int i = 0; i < l; i++)
				new_mass[i] = new_mas[i];
		new_mass[l] = intToChar(d);
		return rev(new_mass);
	}



	new_mas = rev(new_mas);
	return new_mas;




}
