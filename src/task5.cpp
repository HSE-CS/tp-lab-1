#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <iostream>
#include <cstdlib>
#include <string.h>

void split(char*** result, int* N, char* buf, char ch){
	unsigned int countDel = 0;
	*N = 0;
	for (unsigned int i = 0; i < strlen(buf); i++) {
		if (buf[i] == ch) {
			countDel ++;
		}
	}
	(*result) = new char* [countDel + 2];
	unsigned int len = 0;
	for (unsigned int i = 0; i < strlen(buf); i++) {
		if (buf[i] != ch) {
			len++;
		}
		else {
			(*result)[*N] = new char[len + 1];
			strncpy((*result)[*N], buf + i - len, len);
			(*result)[*N][len] = '\0';
			len = 0;
			(*N)++;
		}
	}
	if (len) {
		(*result)[*N] = new char[len + 1];
		strncpy((*result)[*N], buf + strlen(buf) - len, len);
		(*result)[*N][len] = '\0';
		(*N)++;
	}
}