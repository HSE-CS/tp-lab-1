#include "task5.h"
#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;

int main() {

    char buf[] = "111.222.333";
    int N = 0;
    char** result = nullptr;
    split(&result, &N, buf, '.');
    for (int i = 0; i < N; i++)
        cout << result[i]<< endl;



    return 0;
}