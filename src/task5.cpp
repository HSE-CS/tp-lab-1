#include <iostream>
#include "task5.h"
#include <string.h>
#include <cstring>
#include "task5.h"
using namespace std;

void split(char*** result, int* N, char* buf, char ch) {
	int m = 0;
	int k = 0;
	int z = 0;
	while (*(buf + m) != '\0') {
		if (*(buf + m) == ch) {
			(*N)++;
		}
		m++;
	}
	(*N)++;

	*result = new char* [*N];
	char* str = new char[strlen(buf)];

	for (int i = 0; i <= strlen(buf); i++) {
		if ((buf[i] != '\0') && (buf[i] != ch)) {
			str[k] = buf[i];
			k++;
		}

		//if ((*(buf + i) == '\0') || (*(buf + i) == ch)) {
		if ((buf[i] == '\0') || (buf[i] == ch)) {
			*(str + k) = '\0';
			*(*result + z) = str;
			k = 0;
			str = new char[strlen(buf)];
			z++;
		}

	}
}