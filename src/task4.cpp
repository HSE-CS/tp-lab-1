//
// Created by kasya on 11.10.2020.
//
#include <cstring>
#include <algorithm>


char *sum(char *x, char *y) {
    int len_x = strlen(x);
    int len_y = strlen(y);
    char *result = new char[std::max(len_x, len_y)];
    char *x_rev = new char[len_x];
    char *y_rev = new char[len_y];
    int i_x = len_x - 1;
    int i_y = len_y - 1;
    for (int i = 0; i < len_x; ++i) {
        x_rev[i_x] = x[i];
        --i_x;
    }
    for (int i = 0; i < len_y; ++i) {
        y_rev[i_y] = y[i];
        --i_y;
    }
    int i = 0;
    int memory = 0;
    while (i < len_x && i < len_y){
        int a = x_rev[i] - '0';
        int b = y_rev[i] - '0';
        result[i] = ((a + b + memory) % 10) + '0';
        memory = (a + b + memory) / 10;
        ++i;
    }
    while (i < len_x) {
        int a = x_rev[i] - '0';
        result[i] = ((a + memory) % 10) + '0';
        memory = (a + memory) / 10;
        ++i;
    }
    while (i < len_y) {
        int a = y_rev[i] - '0';
        result[i] = ((a + memory) % 10) + '0';
        memory = (a + memory) / 10;
        ++i;
    }
    if (memory){
        char* ans = new char[std::max(len_x, len_y) + 1];
        ans[0] = memory + '0';
        int j = std::max(len_x, len_y) - 1;
        for (int i = 1; i < strlen(ans); ++i){
            ans[i] = result[j];
            --j;
        }
        return ans;
    }else{
        char* ans = new char[std::max(len_x, len_y)];
        int j = std::max(len_x, len_y) - 1;
        for (int i = 0; i < std::max(len_x, len_y); ++i){
            ans[i] = result[j];
            --j;
        }
        return ans;
    }
}
