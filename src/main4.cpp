#include <iostream>
#include "task4.h"

using namespace std;

int main() {
    char *x1="123456789";
    char *y1="000000001";
    char *y = new char [strlen(y1) + 1];
    char *x = new char [strlen(x1) + 1];
    strcpy(y,y1);
    strcpy(x, x1);
    cout << sum(x, y) << endl;

    return 0;
}
