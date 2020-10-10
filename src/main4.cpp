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
    /*Creating a symmetric case. It is not difficult to write symmetry in the function itself.*/
    char* x = "99999999999999999999";
    char* y = "1";
    if(strlen(x) >= strlen(y))
        cout << sum(x, y) << endl;
    else
        cout << sum(y, x) << endl;
	return 0;
}