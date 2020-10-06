#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
#include "task5.h"

// - разбиение строки buf на подстроки и запись результата в result, с присвоением по адресу N количества полученных подстрок.

void split(char ***result, int *N, char *buf, char ch) {
    int size = 1010;
    int count = 0;

    (*result) = new char* [size]();
    for (int i = 0; i < size; ++i) {
        (*result)[i] = new char [size]();
    }

//    char *first_word = new char[size + 1]();
    char *other_string = new char[size + 1]();

    int first_word_len = 0, other_str_len = 0;
    std::string separator;
    separator += ch;
    separator += '\0';
    const char *cstr = separator.c_str();

    while (buf && (strlen(buf) > 0)){
        char *first_word = new char[size + 1]();

        // Ищем разделитель и длинну строк
        char *space = strstr(buf, cstr);
        if (space == nullptr){
            first_word = other_string;
            (*result)[count++] = first_word;  // присваиваю в result
            (*N)++; // считаем сколько слов получилось
            buf = NULL;
            continue;
        }
        first_word_len = space - buf;
        other_str_len = strlen(buf) - first_word_len - 1;

        // Копируем первое слово
        strncpy(first_word, &buf[0], first_word_len);
        first_word[first_word_len] = '\0';

        // Копируем остальную строку
        strncpy(other_string, &space[1], other_str_len + 1);

        (*result)[count++] = first_word;  // присваиваю в result
        (*N)++; // считаем сколько слов получилось
        buf = other_string;
    }
}



