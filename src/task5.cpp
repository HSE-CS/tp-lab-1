#include "task5.h"
#include <cstring>
#include <stdlib.h>

void split(char ***result, int *N, char *buf, char ch)
{
	char *token;
	int len = 0, i = 0;

	*N = 0;
	(*result) = (char**)calloc(strlen(buf) / 2 + 1, sizeof(char*));
	token = (char*)calloc(strlen(buf) + 1, sizeof(char));

	while (i < strlen(buf)) {
		len = 0;
		while (buf[i] != ch && i < strlen(buf)) {
			token[len++] = buf[i++];
		}
		i++;
		token[len] = '\0';
		(*result)[(*N)] = (char*)calloc(strlen(token) + 1, sizeof(char));
		strcpy((*result)[(*N)++], token);
	}

	free(token);

	return;
}