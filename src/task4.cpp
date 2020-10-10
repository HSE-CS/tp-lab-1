#include "task4.h"

char* sum(char* x, char* y)
{
	char* resault{ 0 };
	int lenx{ int(strlen(x)) }, leny{ int(strlen(y)) }, remember{ 0 };
	if (lenx >= leny) {
		char* fake_y = (char*)calloc(lenx+1, sizeof(char)); // fake_y = 000...00+y (length fake_y = length x)
		for (int i = 0; i < lenx; i++)
		{
			if (i >= leny)
				fake_y[i] = '0';
			else
				fake_y[i] = y[i];
		}
		
		resault = (char*)calloc(lenx+1, sizeof(char)) ;
		for (int i = lenx-1; i > -1 ; i--)
		{
			char a{ x[i] }, b{ fake_y[i] };
			int temp{ (a - '0' + b - '0') + remember };
			resault[i] = (temp % 10) + '0';
			remember = temp / 10;
		}
		if (remember == 1)
			resault[lenx + 1] = 1;
		else
			resault++;
		free(fake_y);
	}
	else {
		char* fake_x = (char*)calloc(leny+1, sizeof(char)); // fake_x = 000...00+x (length fake_x = length y)
		for (int i = 0; i < leny; i++)
		{
			if (i >= lenx)
				fake_x[i] = '0';
			else
				fake_x[i] = x[i];
		}

		resault = (char*)calloc(leny + 1, sizeof(char));
		for (int i = lenx - 1; i > -1; i--)
		{
			char a{ fake_x[i] }, b{ y[i] };
			int temp{ (a - '0' + b - '0') + remember };
			resault[i] = (temp % 10) + '0';
			remember = temp / 10;
		}
		if (remember == 1)
			resault[lenx + 1] = 1;
		else
			resault++;
		free(fake_x);
	}
	return resault;
}
