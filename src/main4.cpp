#include "task4.h"
#include <iostream>

using namespace std;

int main() {
	 	char x[] = "99999999999999999999";
	 	char y[] = "1";
	 	char result[] = "100000000000000000000";
	 	char* res = sum(x, y);
	 	cout << result << " " << res << endl;

	return 0;
}