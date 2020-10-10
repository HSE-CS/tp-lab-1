#include "task1.h"

int main() {
	int min{ 0 }, max{ 0 };
	cout << "Enter range" << endl;
	cin >> min >> max;
	cout << findValue(min, max) << endl;

	return 0;
}