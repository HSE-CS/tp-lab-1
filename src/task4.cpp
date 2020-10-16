#include "task4.h"
#include <string.h>

char* sum(char* x, char* y)
{
	char* resault{ 0 };
	int lenx{ int(strlen(x)) }, leny{ int(strlen(y)) }, remember{ 0 };
	if (lenx >= leny) {
		char* fake_y = new char[lenx+1]; // fake_y = 000...00+y (length fake_y = length x)
		if (fake_y) {
			int zeros = lenx - leny - 1;
			for (int i = 0; i < lenx+1; i++)
			{
				if (i == lenx)
					fake_y[i] = '\0';
				if (i > zeros)
					fake_y[i] = y[i-zeros-1];
				else
					fake_y[i] = '0';
			}
		}

		resault = new char [lenx+2] ;
		for (int i = 0; i < lenx+2; i++) {
			if (i == lenx+1)
				resault[i] = '\0';
			else
				resault[i] = '0';
		}
		for (int i = lenx-1; i > -1 ; i--)
		{
			char a{ x[i] }, b{ fake_y[i] };
			int temp{ (a - '0' + b - '0') + remember };
			resault[i+1] = (temp % 10) + '0';
			remember = temp / 10;
		}
		delete(fake_y);
		if (remember == 1) {
			resault[0] = '1';
			return resault;
		}
		else
			return resault+1;
		
	}
	else {
		char* fake_x = new char [leny+1]; // fake_x = 000...00+x (length fake_x = length y)
		for (int i = 0; i < leny+1; i++)
		{
			if (i >= lenx)
				fake_x[i] = '0';
			else
				fake_x[i] = x[i];
		}

		resault = new char [leny+1];
		for (int i = 0; i < leny + 1; i++)
			resault[i] = 0;

		for (int i = lenx - 1; i > -1; i--)
		{
			char a{ fake_x[i] }, b{ y[i] };
			int temp{ (a - '0' + b - '0') + remember };
			resault[i] = (temp % 10) + '0';
			remember = temp / 10;
		}
		if (remember == 1)
			resault[lenx + 1] = 1;
		delete(fake_x);
	}
	return resault;
}
