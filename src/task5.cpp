#include "task5.h"
#include <iostream>
#include <cstring>

using namespace std;

void split(char*** result, int* N, char* buf, char ch) {
	int size = 10000;
	int count = 0;
	int len = strlen(buf);

	(*result) = new char* [size]();
	for (int i = 0; i < size; i++) {
		(*result)[i] = new char[size]();
	}

	for (int j = 0; j <= len; j++) {
		if (buf[j] == ch) {
			(*result)[(*N)++][count] = '\0';
			count = 0;
		}
		else
			(*result)[(*N)][count++] = buf[j];
	}

	(*N)++;

}