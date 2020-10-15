#include"task5.h"
#include<string>

void split(char*** result, int* N, char* buf, char ch)
{
	//int k = 0;
	int l = strlen(buf);
	*N = 1;
	int k = 0;

	for (int i = 0; i < l; i++)
	{

		if (buf[i] == ch) (*N)++;


	}
	int s = *N;
	int* size = new int[s];
	(*result) = new char* [s];
	int t = 0;
	for (int i = 0; i < l; i++)
	{

		if (buf[i] != ch) k++;
		else {
			size[t] = k+1;
			(*(result))[t] = new char[size[t]]{ '\0' };
			k = 0;
			t++;
		}
		(*(result))[t] = new char[k + 1]{ '\0' };


	}
	t = 0;
	int x = 0;
	for (int i = 0; i < l; i++)
	{
		
		if (buf[i] != ch)
		{

			(*result)[t][x++] = buf[i];

		}
		else {
			x = 0;
			t++;
		}

	}



}