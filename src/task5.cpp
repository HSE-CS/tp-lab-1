#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>
#include "task5.h"

void split(char*** result, int* N, char* buf, char ch) {

	*N = 1;
	int s = 0;
	int k = 0;
	int t = 0;
	int x = 0;

	for (int i = 0; i < strlen(buf); i++) {

		if (buf[i] == ch)
			(*N)++;

	}

	s = *N;
	int* size = (int*)malloc(s * sizeof(int));
	(*result) = (char**)malloc(s * sizeof(char*));

	for (int i = 0; i < strlen(buf); i++) {

		if (buf[i] != ch)
			k++;
		else {

			size[t] = k + 1;
			(*(result))[t] = (char*)malloc(size[t] * sizeof(char));
			(*(result))[t][size[t] - 1] = '\0';
			k = 0;
			t++;

		}

		(*(result))[t] = (char*)malloc((k + 1) * sizeof(char));
		(*(result))[t][k] = '\0';

	}

	t = 0;

	for (int i = 0; i < strlen(buf); i++) {

		if (buf[i] != ch)
			(*result)[t][x++] = buf[i];
		else {

			x = 0;
			t++;

		}

	}

}
