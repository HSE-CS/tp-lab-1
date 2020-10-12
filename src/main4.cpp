#include <iostream>
#include <string.h>
#include "task4.h"

int main() {
	char* result = sum("999", "101");
	for(int i = 0; i <= strlen(result); i++)
		cout << result[i];
	cout << endl;
	return 0;
}