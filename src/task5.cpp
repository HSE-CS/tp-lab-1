#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task5.h"
#include <queue>

using namespace std;

void split(char*** result, int* N, char* buf, char ch) {
	char raz[] = { ' ', '\t', '\0' };
	char* s = strtok(buf, raz);
	*result = (char**)malloc(sizeof(char) * (strlen(buf) + 1));
	int i = 0;
	while (s) {
		(*result)[i] = (char*)malloc(sizeof(char) * (strlen(s) + 1));
		strcpy((*result)[i], s);
		cout << (*result)[i] << endl;
		s = strtok(NULL, raz);
		++i;
	}
	*N = i;
}