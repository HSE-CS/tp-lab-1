#include "task5.h"


void split(char*** result, int* N, char* buf, char ch) {
	unsigned count = 0;
	*N = 0;
	for (unsigned i = 0; i < strlen(buf); i++) {
		if (buf[i] == ch) count++;
	}
	(*result) = new char*[count + 2];
	unsigned len = 0;
	//unsigned j = 0;
	for (unsigned i = 0; i < strlen(buf); i++) {
		if (buf[i] != ch) {
			len++;
		}
		else {
			(*result)[*N] = new char[len+1];
			strncpy((*result)[*N], buf + i - len, len);
			(*result)[*N][len] = '\0';
			len = 0;
			(*N)++;
		}
	}
	if (len != 0) {
		(*result)[*N] = new char[len+1];
		strncpy((*result)[*N], buf + strlen(buf) - len, len);
		(*result)[*N][len] = '\0';
		(*N)++;
	}
}