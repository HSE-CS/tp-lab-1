#include <iostream>
#include "task4.h"

int main() {
    char* summa = sum("99999999999999999999", "1");  // РАВНЫ
    for (int i = 0; i < strlen(summa); ++i) {
        std::cout << summa[i];
    }

//    char* summa = sum("115887", "3");
//    for (int i = 0; i < strlen(summa); ++i) {
//        std::cout << summa[i];
//    }

//    char* summa = sum("3", "115887");
//    for (int i = 0; i < strlen(summa); ++i) {
//        std::cout << summa[i];
//    }
    return 0;
}
