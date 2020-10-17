#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task5.h"
using namespace std;

int main() {
    char* buf = "583,196,204";
    int N = 0;
    char** res = nullptr;
    split(&res, &N, buf, ',');
    cout << res[0] << "\n";
    cout << res[1] << "\n";
    cout << res[2] << "\n";
    cout << N << "\n";
    return 0;
}