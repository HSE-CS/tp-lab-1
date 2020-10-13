//#include <iostream>
//#include "task1.h"
//
//using namespace std;
//
//int main() {
//	unsigned int min;
//	unsigned int max;
//	cin >> min >> max;
//	int result = findValue(min, max);
//	if (result!=0) {
//		cout << result << endl;
//	}
//	else {
//		cout << "There's no such number at the interval" << endl;
//	}
//}


#include <iostream>
#include "task2.h"

using namespace std;

int main() {
	cout << checkPrime(13) << endl;
	cout << nPrime(5) << endl;
	cout << nextPrime(2265) << endl;
}