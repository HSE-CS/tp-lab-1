#include "task4.h"


char * sum(char* x, char* y) {
	
	auto len_x = strlen(x);
	auto len_y = strlen(y);

	char* reverse_x = new char[len_x];
	char* reverse_y = new char[len_y];

	for (int i = 0; i < len_x; ++i)
	{
		reverse_x[i] = x[len_x - i - 1];

	}

	for (int i = 0; i < len_y; ++i)
	{
		reverse_y[i] = y[len_y - i - 1];
	}


	if (len_x >= len_y) {
		char* result = new char[len_x + 1];

		int ostatok = 0;
		for (int i = 0; i < len_x; i++) {

			int sum_digits = 0;

			int digit_x = reverse_x[i] - '0';

			sum_digits = digit_x + ostatok;

			if (i < len_y) {
				int digit_y = reverse_y[i] - '0';
				sum_digits += digit_y;
			}

			ostatok = sum_digits / 10;
			result[i] = '0' + (sum_digits % 10);
		}



		if (ostatok) {
			result[len_x] = '0' + ostatok;

			char* reverse_result = new char[len_x + 1 + 1];
			for (int i = 0; i < len_x + 1; ++i)
			{
				reverse_result[i] = result[len_x + 1 - i - 1];

			}

			reverse_result[len_x + 1] = '\0';
			delete[] reverse_x;
			delete[] reverse_y;
			delete[] result;


			return reverse_result;
		}
		else {

			char* reverse_result = new char[len_x + 1];

			for (int i = 0; i < len_x; ++i)
			{
				reverse_result[i] = result[len_x - i - 1];

			}

			reverse_result[len_x] = '\0';

			delete[] reverse_x;
			delete[] reverse_y;
			delete[] result;


			return reverse_result;
		}
	}

	else if (len_y > len_x) {

		char* result = new char[len_y + 1];

		int ostatok = 0;
		for (int i = 0; i < len_y; i++) {

			int sum_digits = 0;

			int digit_y = reverse_y[i] - '0';

			sum_digits = digit_y + ostatok;

			if (i < len_x) {
				int digit_x = reverse_x[i] - '0';
				sum_digits += digit_x;
			}

			ostatok = sum_digits / 10;
			result[i] = '0' + (sum_digits % 10);
		}

		if (ostatok) {
			result[len_y] = '0' + ostatok;

			char* reverse_result = new char[len_y + 1 + 1];
			for (int i = 0; i < len_y + 1; ++i)
			{
				reverse_result[i] = result[len_y + 1 - i - 1];

			}

			reverse_result[len_y + 1] = '\0';
			delete[] reverse_x;
			delete[] reverse_y;
			delete[] result;


			return reverse_result;
		}
		else {

			char* reverse_result = new char[len_y + 1];

			for (int i = 0; i < len_y; ++i)
			{
				reverse_result[i] = result[len_y - i - 1];

			}

			reverse_result[len_y] = '\0';

			delete[] reverse_x;
			delete[] reverse_y;
			delete[] result;


			return reverse_result;
		}

	}

}
