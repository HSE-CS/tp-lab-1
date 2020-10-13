/*
    Реализовать функцию разбиения строки на подстроки с использованием символа - разделителя.
Пояснение

В результате работы функции split должен появиться НОВЫЙ массив строк в динамической памяти.

Состав проекта

  - void split(char ***result, int *N, char *buf, char ch) - разбиение строки buf на подстроки и запись
    результата в result, с присвоением по адресу N количества полученных подстрок.
  - main()

 */

#include <iostream>
#include "task5.h"

int main(){
    char *buf = "123,456,789";
    int N = 0;
    char **result = nullptr;
    split(&result, &N, buf, ',');

    for (int i = 0; i < N; i++){
        std::cout << result[i] << std::endl;
    }
    return 0;
}
