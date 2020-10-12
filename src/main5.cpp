#include "task5.h"

using namespace std;

int main() {
    char buffer[] = "123,,,456,789,,,,,";
    int M = 0;
    char** result = nullptr;
    split(&result, &M, buffer, ',');
    cout << M << "\n";
    for (int i = 0; i < N; i++) {
        cout << result[i] << "\n";
    }
    return 0;
    for (int i = 0; i < N; i++) delete[] result[i];
    delete result;
} 