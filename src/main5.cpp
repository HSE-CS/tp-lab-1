#include "task5.h"
#include <iostream>

using namespace std;

int main()
{
	char str[50] = "Hello, World";
	char** result = NULL;
	int n = 0;
	char ch = ',';

	split(&result, &n, str, ch);
	for (int i = 0; i < n; i++)
		cout << result[i] << endl;

	return 0;
}