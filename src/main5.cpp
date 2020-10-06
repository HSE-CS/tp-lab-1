#include <iostream>
#include"task5.h"
using namespace std;
int main() {

	char buf[] = "123,456,789";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');

	cout << "(3)" << N << endl;
	cout << "(123)" << result[0] << endl;
	cout << "(456)" << result[1] << endl;
	cout << "(789)" << result[2] << endl;

	return 0;
}