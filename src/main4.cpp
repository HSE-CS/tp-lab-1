#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "task4.h"
#include <string>

using namespace std;


int main()
{
    char* y = "2";
    char* x = "3";
    char* expected = "100000000000000000000";
    if(strlen(x) >= strlen(y))
        cout << sum(x, y) << endl;
    else
        cout << sum(y, x) << endl;
	return 0;
}