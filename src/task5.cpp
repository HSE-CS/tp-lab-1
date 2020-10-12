#include "task5.h"

void split(char*** result, int* N, char* buf, char ch) {

	int i = 0;
	int k = 0;
	int j = 0;
	int _count = 0;
	int _amount = 0;

	while (buf[i] != '\0') {
		if (buf[i] == ch) {
			*N = *N + 1;
		}
		i++;
	}
	*N = *N + 1;

	*(result) = new char* [*N];
	i = 0;

	while (1) {

		if (buf[i] == '\0') {
			(*(result))[k] = new char[i - _amount + 1];
			((*(result))[k])[i - _amount] = '\0';
			int c = 0;
			while (j != i) {
				((*(result))[k])[c] = buf[j];
				j++;
				c++;
			}
			_amount = i + 1;
			k++;
			j = i + 1;
			break;
		}

		if (buf[i] == ch) {
			(*(result))[k] = new char[i - _amount + 1];
			((*(result))[k])[i - _amount] = '\0';
			int c = 0;
			while (j != i) {
				((*(result))[k])[c] = buf[j];
				j++;
				c++;
			}
			_amount = i + 1;
			k++;
			j = i + 1;
		}
		i++;
	}

}