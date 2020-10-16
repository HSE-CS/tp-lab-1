#include "../include/task5.h"
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

void split(char ***result, int *N, const char *buf, char ch) {
    string s(buf, strlen(buf));
    int count = 0;
    for (int i = 0; i < (int)strlen(buf); i++)
        if (buf[i] == ch) count++;
    (*result) = (char**)malloc(count * sizeof(char*));

    size_t pos = 0;
    string token;
    int offset = 0;
    while ((pos = s.find(ch)) != string::npos) {
        token = s.substr(0, pos);
        (*result)[offset] = (char*)malloc(token.length() * sizeof(char*));
        strcpy((*result)[offset], token.c_str()); 
        s.erase(0, pos + 1);
        offset++; 
    }
    (*result)[offset] = (char*)malloc(token.length() * sizeof(char*));
    strcpy((*result)[offset], s.c_str()); 
    *N = offset + 1;

}