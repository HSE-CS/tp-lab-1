#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <iostream>
#include <cstdlib>
#include <string.h>
void split(char*** result, int* N, char* buf, char ch) {
		char* temp = new char[10]();
		(*result) = new char* [20]();
		int count = 0;
		for (int i = 0; i < strlen(buf); i++){
			if (buf[i] != ch){
				temp[count] = buf[i];
				count++;
			}
			else {
				temp[count] = '\0';
				(*result)[*N] = new char[strlen(buf)]();
				strcpy((*result)[*N], temp);
				for (int j = 0; j <= count; j++)
					temp[j] = 0;
				count = 0;
				(*N) += 1;
			}
		}
		*N +=1;
		delete[]temp;
}