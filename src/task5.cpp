#include <cstring>
#include <string.h>
void split(char*** result, int* N, char* buf, char ch) {
	int count = 0;
	for (int i = 0; buf[i] < strlen(buf); i++)
		if (buf[i] == ch)
			count++;
	*result = new char* [count + 1];
	int last = 0;
	int i = 0;
	for (; buf[i] != = '\0'; i++) {
		if (buf[i] == ch) {
			char* mas = new char[i - last + 1];
			mas[i - last] = '\0';
			for (int j = last; j < i; j++)
				mas[j - last] = buf[j];
			(*result)[(*N)] = mas;
			*N = *N + 1;
			last = i + 1;
		}
	}
	char* mas = new char[i - last + 1];
	mas[i - last] = '\0';
	for (int j = last; j < i; j++)
		mas[j - last] = buf[j];
	(*result)[(*N)] = mas;
	*N = *N + 1;
}
