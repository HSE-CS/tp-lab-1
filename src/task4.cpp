#include <iostream>
#include <cstring>
#include "task4.h"

char* sum(char* x, char* y)
{
	unsigned int lenX{ strlen(x) }, lenY{ strlen(y) };
	unsigned int maxLen{ std::max(lenX, lenY) };

	// Translate <const char*> to <char*> as array on the heap
	char* x_{ new char[maxLen] };
	memcpy(x_, x, lenX);
	x = x_;

	char* y_{ new char[maxLen] };
	memcpy(y_, y, lenY);
	y = y_;

	// Resize the arrays to maxLen
	char* tmp{ new char[maxLen] };
	memset(tmp, '0', maxLen);
	if (lenX > lenY)
	{
		for (unsigned int i = 0; i < lenY; i++)
			tmp[lenX - lenY + i] = y[i];
		memmove(y, tmp, maxLen);
	}
	if (lenY > lenX)
	{
		for (unsigned int i = 0; i < lenX; i++)
			tmp[lenY - lenX + i] = y[i];
		memmove(x, tmp, maxLen);
	}
	delete[] tmp;

	// Main algorithm
	int excess = 0;
	char* answer{ new char[maxLen + 2] };
	memset(answer, '0', maxLen + 2);

	for (int i = maxLen - 1; i >= 0; i--)
	{
		answer[i] = x[i] + y[i] + excess - (int)'0';
		excess = 0;

		if (answer[i] > '9')
		{
			answer[i] -= 10;
			excess = 1;
		}

		if (i == 0 && excess)
		{
			for (int j = maxLen; j >= 0; j--)
				answer[j] = answer[j - 1];
			answer[0] = '1';
		}	

		if (i == 0 && !excess)
			answer[maxLen] = 0;
		else if (i == 0 && excess)
			answer[maxLen + 1] = 0;
	}

	delete[] x; delete[] y;
	return answer;
}
