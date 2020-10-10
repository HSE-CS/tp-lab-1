#include <iostream>
#include "task4.h"
using namespace std;

int main() {

	char* first = new char[12]{ "14285616234" };
	char* second = new char[21]{ "273694539896647472" };
	cout << sum(first, second) << endl;
	delete[] first;
	delete[] second;
}