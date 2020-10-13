#include "task5.h"
#include <stdlib.h>
#include <iostream>
#include <string.h>

#define CHECK(x) if (!x) {std::cout << "[split] malloc failed" << '\n'; exit(1);}

void split(char ***result, int *N, const char *buf, char ch){
    char **splits = (char**)malloc(strlen(buf)*sizeof(char*));
    CHECK(splits);
    char *current_split = (char*)malloc(strlen(buf)*sizeof(char));
    CHECK(current_split);
    int i = 0;
    int j = 0;
    do {
        if (*buf == ch || *buf == '\0'){
            char *new_split = (char*)malloc(strlen(buf)*sizeof(char));
            CHECK(new_split);
            current_split[j] = '\0';
            // Thanks, valgrind!
            current_split = (char*)reallocarray(current_split, j+1, sizeof(char));
            CHECK(current_split);
            splits[i] = current_split;
            current_split = new_split;
            i += 1;
            j = 0;
        } else {
            current_split[j] = *buf;
            j += 1;
        }
    } while (*buf++ != '\0');
    free(current_split); // Thanks, valgrind!
    splits = (char**)reallocarray(splits, i, sizeof(char*));
    CHECK(splits);
    *N = i;
    *result = splits;
}