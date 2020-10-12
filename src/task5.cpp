#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>

void split(char*** result, int* N, char* buf, char ch)
{
	(*result) = (char**)calloc(strlen(buf), sizeof(char*));
	char* tmp = (char*)calloc(strlen(buf), sizeof(char));
	int j = 0;
	for (int i = 0; i <= strlen(buf); i++)
	{
		if (buf[i] != ch && buf[i] != '\0')
		{
			tmp[j] =  buf[i];
			j++;
		}
		else {
			tmp[j] = '\0';
			(*result)[*N] = (char*)calloc(strlen(buf), sizeof(char));
			strcpy((*result)[*N], tmp);
			*N += 1;
			j = 0;
		}
	}
	free(tmp);
}