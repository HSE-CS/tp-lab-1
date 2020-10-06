#include <iostream>
#include "task5.h"


// - разбиение строки buf на подстроки и запись результата в result, с присвоением по адресу N количества полученных подстрок.
int main() {
    char **result = nullptr;
    int N = 0;
    char *buf = "123,456,789";

    split(&result, &N, buf, ',');

    std::cout << result[0] << std::endl;
    std::cout << result[1] << std::endl;
    std::cout << result[2] << std::endl;
//    std::cout << result[3] << std::endl;
    std::cout << N;


    return 0;
}
