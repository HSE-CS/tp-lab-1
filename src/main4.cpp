#include <algorithm>
#include <iostream>
#include "task4.h"
using namespace std;

int main() {
    char a []= "123456789";
    char b []= "000000001";
    int len = strlen(a);
    cout << len << '\n';
    cout << a << '\n';
    cout << b << '\n';
    cout << sum(a, b);
    return 0;
}