#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"task5.h"
using namespace std; 

void split(char*** result, int* N, char* buf, char ch) {
	*N = 0;
	unsigned int len = 0;
	for (int i = 0; i < strlen(buf); i++) {
		if (buf[i] == ch) {
			len++;
		}
	}
	*result = new char*[len + 2];
	len = 0;
	for (int i = 0; i < strlen(buf); i++) {
		if (buf[i] != ch) {
			len++;
		}
		else if(len){
			(*result)[*N] = new char[len + 1];
			strncpy((*result)[*N], buf + i - len, len);
			(*result)[*N][len] = '\0';
			(*N)++;
			len = 0;
		}
	}
	if (len) {
		(*result)[*N] = new char[len + 1];
		strncpy((*result)[*N], buf + strlen(buf) - len, len + 1);
		(*N)++;
	}
	for (int i = 0; i < *N; i++) {
		cout << (*result)[i] << endl;
	}
}