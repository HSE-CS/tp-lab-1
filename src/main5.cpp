#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "task5.h"
#include <string>

using namespace std;


int main()
{
    char* buf = "123,456,789";
    int N = 0;
    char** result = nullptr;
    split(&result, &N, buf, ',');
	return 0;
}