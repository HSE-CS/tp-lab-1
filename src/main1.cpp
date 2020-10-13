#include <iostream>
#include "task1.h"

using namespace std;

int main() {
	unsigned int min;
	unsigned int max;
	cin >> min >> max;
	int result = findValue(min, max);
	if (result!=0) {
		cout << result << endl;
	}
	else {
		cout << "There's no such number at the interval" << endl;
	}
}
