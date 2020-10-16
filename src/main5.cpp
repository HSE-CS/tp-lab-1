#include "task5.h"
#include <stdio.h>
#include <cmath>
#include <iostream>


using namespace std;

int main() {

    char *buf = "123,456,789";
    int N = 0;
    char** result = nullptr;
    split(&result, &N, buf, ',');

    cout << result[0] << endl;
    cout << result[1] << endl;
    cout << result[2] << endl;
    cout << N;


    return 0;
}