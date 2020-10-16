#include <iostream>
#include "task5.h"

using namespace std;

int main() {
    
	char* buf = strdup("I,4,you!");
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; result[i][j] != '\0'; j++)
			std::cout << result[i][j];
		std::cout << endl;
	}
	return 0;
}