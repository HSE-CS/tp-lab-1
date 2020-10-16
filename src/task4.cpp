#include <string.h>
#include <bits/stdc++.h>
using namespace std;

char * sum(char *x, char *y){
    int len_x = (int)strlen(x);
    int len_y = (int)strlen(y);
    int len_result = max(len_x, len_y) + 1;
    char *result = (char*)malloc((len_result + 1) * sizeof(char));

    int balance = 0;
    for(int offset = 0; offset < len_result; offset++){
        int pos_x = (len_x - 1) - offset;
        int pos_y = (len_y - 1) - offset;
        int pos_result = (len_result - 1) - offset;

        int sum = balance;
        if(pos_x >= 0){
            sum += x[pos_x] - '0';
        }
        if(pos_y >= 0){
            sum += y[pos_y] - '0';
        }
        result[pos_result] = '0' + (sum % 10);
        balance = sum / 10;
    }

    while(result[0] == '0'){
        char *tmp = result;
        int len_tmp = len_result;
        len_result -= 1;
        result = (char*)malloc(len_result * sizeof(char));
        for(int i = 0; i < len_result; i++){
            result[i] = tmp[i + 1];
        }
        free(tmp);
    }
    result[len_result] = '\0';

    return result;
}
