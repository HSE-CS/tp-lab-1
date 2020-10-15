#include <iostream>
#include <cstring>
using namespace std;
#include "task5.h"

void split(char*** result, int* N, char* buf, char ch) {
	int length = strlen(buf);
	*N = length * (length + 1) / 2;
	char** array = { 0 };
	array = (char**)malloc((*N) * sizeof(char*));
	for (int i = 0; i < *N; i++) {
		array[i] = (char*)malloc(length * sizeof(char));
		array[i] = 0;
	}
	
	for (int n = 0; n < *N;) {
		for (int i = 0; i < length; i++) {
			for (int j = i; j < length; j++) {
				char* tmp = { NULL };
				int tmp_len = j - i + 1;
				tmp = (char*)malloc(tmp_len * sizeof(char));
				for (int k = i; k < tmp_len; k++) {
					tmp[k] = buf[i + k];
				}
				array[n] = tmp;
				array[n][tmp_len] = 0;
				n++;
				/*for (int l = 0; l < tmp_len; l++) {
					array[n][l] = *tmp[l];
				}*/
			}
		}
	}

	for (int i = 0; i < *N; i++) {
		for (int j = 0; j < length; j++) {
			std::cout << array[i][j];
		}
		std::cout << "\n";
	}

	/*for (int i = 0; i < *N; i++) {
		for (int j = 0; j < length; j++) {
			*result[i][j] = array[i][j];
		}
	}*/

	*result = array;
	for (int i = 0; i < *N; i++) {
        free(array[i]);
    }
    //free(array);
}