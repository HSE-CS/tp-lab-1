#include "../include/task5.h"
#include <iostream>

int main(){

    char buf[] = "test1,test2,test3,test4";
    char** result;
    int N = 0;
    char ch = ',';

    split(&result, &N, buf, ch);

    for (int i = 0; i < N; i++)
        std::cout << result[i] << std::endl;

    return 0;
}