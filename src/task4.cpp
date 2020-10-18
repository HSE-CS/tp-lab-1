#include "task4.h"
#include <string.h>

char* sum(char* x, char* y)
{
	char* lol{ 0 };
	int arx{ int(strlen(x)) }, ary{ int(strlen(y)) }, ness{ 0 };
	if (arx >= ary) {
		char* noty = new char[arx+1];
		if (noty) {
			int wer = arx - ary - 1;
			for (int i = 0; i < arx+1; i++)
			{
				if (i == arx)
					noty[i] = '\0';
				if (i > wer)
					noty[i] = y[i-wer-1];
				else
					noty[i] = '0';
			}
		}

		lol = new char [arx+2] ;
		for (int i = 0; i < arx+2; i++) {
			if (i == arx+1)
				lol[i] = '\0';
			else
				lol[i] = '0';
		}
		for (int i = arx-1; i > -1 ; i--)
		{
			char a{ x[i] }, b{ noty[i] };
			int at{ (a - '0' + b - '0') + ness };
			lol[i+1] = (at % 10) + '0';
			ness = at / 10;
		}
		delete(noty);
		if (ness == 1) {
			lol[0] = '1';
			return lol;
		}
		else
			return lol++;
		
	}
	else {
		char* notx = new char [ary+1]; 
		for (int i = 0; i < ary+1; i++)
		{
			if (i >= arx)
				notx[i] = '0';
			else
				notx[i] = x[i];
		}

		lol = new char [ary+1];
		for (int i = 0; i < ary + 1; i++)
			lol[i] = 0;

		for (int i = arx - 1; i > -1; i--)
		{
			char at{ notx[i] }, rb{ y[i] };
			int ra{ (at - '0' + rb - '0') + ness };
			lol[i] = (at % 10) + '0';
			ness = at / 10;
		}
		if (ness == 1)
			lol[arx + 1] = 1;
		delete(notx);
	}
	return lol;
}
