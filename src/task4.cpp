#include <iostream>
using namespace std;

int ctoi(char x) {
	return x - 48;
}

char itoc(int x) {
	return x + 48;
}

char* max(char* one, char* two) {
	if (strlen(one) >= strlen(two)) return one;
	else return two;
}

char* min(char* one, char* two) {
	if (strlen(one) < strlen(two)) return one;
	else return two;
}

char* sum(char* x, char* y) {
	int left_size(strlen(x)), right_size(strlen(y)), shared(left_size), tail(0);
	bool overflow(false);

	if (left_size != right_size) {
		if (left_size < right_size) {
			shared = left_size;
			tail = right_size - left_size;
		}
		else {
			shared = right_size;
			tail = left_size - right_size;
		}
	}

	int res_index = shared + tail - 1;

	int test = ctoi(x[0]) + ctoi(y[0]);
	if (test >= 9) res_index += 1;

	char* result = new char[res_index + 1 + 1]{ 0 };
	int digit(0);

	for (int shared_ind = shared - 1; shared_ind >= 0; shared_ind--, res_index--)
	{
		digit = ctoi(max(x, y)[shared_ind + tail]) + ctoi(min(x, y)[shared_ind]);
		if (overflow) {
			digit++;
			overflow = false;
		}
		if (digit >= 10) {
			digit %= 10;
			overflow = true;
		}
		result[res_index] = itoc(digit);
	}

	for (int i = tail - 1; i >= 0; i--, res_index--)
	{
		digit = ctoi(max(x, y)[i]);
		if (overflow) {
			digit++;
			overflow = false;
		}
		if (digit >= 10) {
			digit %= 10;
			overflow = true;
		}
		result[res_index] = itoc(digit);
	}
	if (overflow) {
		result[res_index] = itoc(1);
	}
	return result;
}