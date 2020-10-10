#include "task5.h"
#include <iostream>
#include <cstring>
void split(char*** result, int* N, char* buf, char ch)
{
	for (int i = 0; i < strlen(buf); i++)
		if (buf[i] == ch)
			++*N;
	*N++;
	(*result) = new char* [*N + 1];
	for (int i = 0; i <= *N; i++) {
		(*result)[i] = new char[strlen(buf)];
		(*result)[i][0] = '\0';
	}



	int i = 0, counter_result = 0;
	while (i < strlen(buf)) {
		int counter = 0;
		while (buf[i] && buf[i] != ch)
			(*result)[counter_result][counter++] = buf[i++];
		i++;
		(*result)[counter_result][counter++] = '\0';
		counter_result++;
	}

}
