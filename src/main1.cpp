#include <iostream>
#include "task1.h"

using namespace std;

int main() {
	unsigned int min;
	unsigned int max;
	cin >> min >> max;
	unsigned long result = findValue(min, max);
	if (result!=0) {
		cout << result << endl;
	}
}