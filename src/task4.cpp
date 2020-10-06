#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <cstring>
#include<algorithm>
#include <string>
#include <vector>
using namespace std;

int return_dijit (char* x, int i) {
    if (i > strlen(x)) {
        return 0;
    }
    else {
        return x[strlen(x) - i] - '0';
    }
}

char* sum( char* x,  char* y){

    int max_len = max(strlen(x), strlen(y)) + 1;
    char* res = (char*)calloc(max_len, sizeof(char));
    int next_d = 0;

    for (int i = 1; i <= max_len; i++) {
        int sum = return_dijit(x,i) + return_dijit(y, i) + next_d;
        res[max_len - i] = '0' + sum % 10;
        next_d = sum / 10;
    }

    if (res[0] == '0' && res[1] != '0') {
        for (int i = 0; i < max_len - 1; i++) {
            res[i] = res[i + 1];
        }
        res[max_len - 1] = '\0';
    }
    res[max_len] = '\0';
    return res;
}
