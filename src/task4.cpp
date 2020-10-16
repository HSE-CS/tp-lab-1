#include <string.h>

char* sum(char* x, char* y) {
	unsigned int size_a = strlen(x);
	unsigned int size_b = strlen(y);
	unsigned int lenght = 0;
	if (size_a > size_b) {
		lenght = size_a + 1;
	}
	else lenght = size_b + 1;
	char* res = new char[lenght];
	memset(res, ' ', lenght);
	res[lenght] = '\0';
	int a, b, z = 0;
	for (int i = 1; i <= lenght; i++) {
		if (i > size_a)
			a = 0;
		else a = x[size_a - i] - '0';
		if (i > size_b)
			b = 0;
		else b = y[size_b - i] - '0';

		int c = a + b + z;
		res[lenght - i] = '0' + c % 10;
		z = c / 10;
	}
	if (res[0] == '0' && res[1] != '0') {
		for (int i = 0; i < lenght - 1; i++)
			res[i] = res[i + 1];
		res[lenght - 1] = '\0';
	}
	return res;
}




	