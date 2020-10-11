#include <iostream>
#include "task5.h"

int main() {
    char* buf = "123,456,789";
    int N = 0;
    char** result = nullptr;
    split(&result, &N, buf, ',');
    std::cout << result[0] << "\n" << result[1] << "\n" << result[2] << "\n" << N << "\n";
    return 0;
}