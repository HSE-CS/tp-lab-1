#include "task5.h"

void split(char*** result, int* N, char* buf, char ch)
{
	int length = strlen(buf);
	*N = countStrings(length);													//result = (char***)malloc(sizeof(char**));
	*result = (char**)calloc(*N, sizeof(char*));
	for (int k = 0; k < *N;) { // sozdaem stroki
		for (int i = 0; i < length; i++) { // start podstroki
			for (int j = i; j < length; j++) {  //  end podstroki
				if (j == i) {
					(*result)[k] = (char*)calloc(1, sizeof(char));
					const char temp = buf[i];
					(*result)[k][0] = temp;
					k++;
				}
				else {
					int len = j - i + 1;  //dlina podstroki
					(*result)[k]= (char*)calloc(len, sizeof(char));
					for (int l = 0; l < len; l++) {
						(*result)[k][l] = buf[i + l];
					}
				}
			}
		}
	}

}

int countStrings(int length) {
	return ((1 + length) * length) / 2;
}
