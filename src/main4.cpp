#include <iostream>
#include "task4.h"
using namespace std;

int main(){
    char *a = (char*)"000000000099999999999999999999";
    char *b = (char*)"10000000000000000000000000001";

    cout << sum(a, b);

    return 0;
}
