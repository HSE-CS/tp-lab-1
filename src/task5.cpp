
#include <cstring>

void split(char*** result, int* N, char* buf, char ch) {
	int count = 0;
	for (int i = 0; buf[i] < strlen(buf); i++) {
		if (buf[i] == ch)
			count++;
	}


	*result = new char* [count + 1];
	int last = 0;
	int i = 0;
	for (; buf[i] != strlen(buf) - 1; i++) {
		if (buf[i] == ch) {
			char* mas1 = new char[i - last + 1];
			for (int j = last; j < i; j++) {
				mas1[j - last] = buf[j];
			}
			(*result)[(*N)] = mas1;
			*N = *N + 1;
			last = i + 1;
		}
	}
	char* mas2 = new char[i - last + 1];
	for (int j = last; j < i; j++) {
		mas2[j - last] = buf[j];
	}
	(*result)[(*N)] = mas2;
	*N = *N + 1;
}