#include "../include/task5.h"
#include <iostream>

using namespace std;

int main()
{
	char** res;
	char* buf = (char*)"123,456,789";
	int N;
	char spacer = ',';

	split(&res, &N, buf, spacer);
	for (int i = 0; i < N; ++i)
		cout << res[i] << endl;

	return 0;
}