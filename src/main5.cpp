#include <iostream>
#include "task5.h"

using namespace std;

int main() {
    char *buf="53,,434,5235,2314124,,";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');
    cout << N << endl;
    for (int i = 0; i < N; ++i) {
        cout << result[i] << endl;

    }
    return 0;
}