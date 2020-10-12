﻿#include <iostream>
#include <cstring>
#include "task5.h"

using namespace std;

int main() {
    char* buf = "486,234,894";
    int N = 0;
    char** result = nullptr;



    split(&result, &N, buf, ',');

    cout << result[0] << endl;
    cout << result[1] << endl;
    cout << result[2] << endl;
    cout << N << endl;

    for (int i = 0; i < sizeof(result) / sizeof(int); ++i) {
        cout << result[i] << endl;

    }

    if (strcmp(result[0], "486") == 0) {
        cout << "yes" << endl;
    }


    for (int i = 0; i < 3; i++)
    {
        delete[] result[i];
    }
    delete[] result;


}