#include "task4.h"

char* sum(char* x, char* y){
	char* res = 0;
	int len_x = strlen(x);
	int len_y = strlen(y);
	char a = '', b = '';
	int tmp = 0;
	int sp = 0;

	if (len_x >= len_y) {
		char* new_y = (char*)calloc(len_x + 1, sizeof(char));
		for (int i = 0; i < len_x; i++) {
			if (i >= len_y) {
				new_y[i] = '0';
			}
			else {
				new_y[i] = y[i];
			}
		}
		res = (char*)calloc(len_x + 1, sizeof(char));
		for (int i = len_x - 1; i > -1; i--){
			a = x[i];
			b= new_y[i];
			tmp = (a - '0' + b - '0') + sp;
			res[i] = (temp % 10) + '0';
			sp = tmp / 10;
		}
		if (sp == 1) {
			res[len_x + 1] = 1;
		}
		else {
			res++;
		}
		free(new_y);
	}
	else {
		char* new_x = (char*)calloc(len_y + 1, sizeof(char));
		for (int i = 0; i < len_y; i++) {
			if (i >= len_x) {
				new_x[i] = '0';
			}
			else {
				new_x[i] = x[i];
			}
		}

		res = (char*)calloc(len_y + 1, sizeof(char));
		for (int i = len_x - 1; i > -1; i--) {
			a = new_x[i];
			b = y[i];
			tmp = (a - '0' + b - '0') + sp;
			res[i] = (tmp % 10) + '0';
			sp = tmp / 10;
		}
		if (sp == 1) {
			res[len_x + 1] = 1;
		}
		else {
			res++;
		}
		free(new_x);
	}
	return res;
}