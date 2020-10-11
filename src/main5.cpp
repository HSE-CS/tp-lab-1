//
// Created by jmax on 05.10.2020.
//
#include <iostream>
#include <cstring>
#include "task5.h"
using namespace std;

int main() {

    char *buf="193,456,789";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < strlen(result[i]); j++)
            cout << result[i][j];
        cout << std::endl;
    }
    cout << "" << endl;
    return 0;
}
