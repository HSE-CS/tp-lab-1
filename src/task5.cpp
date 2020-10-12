
#include "task5.h"
#include <cstring>
#include <stdlib.h> 

void split(char ***result, int *N, char *buf, char ch)
{
	int start = 0, fin;
	char razd[2];
	razd[0] = ch;
	razd[1] = '\0';
	char* tmp;
	*N = 0;
	*result = NULL;
	while ((tmp = strstr(&(buf[start]), razd)) != NULL)
	{
		*result = (char**)realloc(*result, ((*N) + 1)*sizeof(char*));
		fin = tmp - buf;
		(*result)[*N] = new char[fin - start + 1];
		for (int i = 0; i < fin - start; i++)
			(*result)[*N][i] = buf[start + i];
		(*result)[*N][fin - start] = '\0';
		(*N)++;
		start = fin + 1;
	}
	*result = (char**)realloc(*result, ((*N) + 1)*sizeof(char*));
	fin = strlen(buf);
	(*result)[*N] = new char[fin - start + 1];
	for (int i = 0; i < fin - start; i++)
		(*result)[*N][i] = buf[start + i];
	(*result)[*N][fin - start] = '\0';
	(*N)++;
}