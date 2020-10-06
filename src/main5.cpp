#include <iostream>
#include <cstring>
#include "task5.h"
using namespace std;

int main(){
    char **result;
    int N = 0;
    split(&result, &N, "123,456,789,", ',');
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < strlen(result[i]); ++j) {
            cout << result[i][j];
        }
        cout << endl;
    }
    return 0;
}

