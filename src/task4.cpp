#include <cstring>
#include "task4.h"

int number_of_digits(char *a) {
    int num = 0;
    while(a[num]!=0) {
        num++;
    }
    return num;
}
char sum_helper_1(char a, char b, char e) {
    int d = (a - 48) + (b - 48);
    if (e == 0) {
        if (d >= 10) {
            return d / 10 + 48;
        } else {
            return 48;
        }
    } else {
        if (d >= 10) {
            return d / 10 + e;
        } else {
            return e;
        }
    }
}

char sum_helper_2(char a, char b) {
    int d = (a - 48) + (b - 48);
    if (d >= 10) {
        return d % 10 + 48;
    } else {
        return d + 48;
    }
}

char * sum(char *x, char *y) {
    int num1 = number_of_digits(x), num2 = number_of_digits(y);
    char *sumQ = (char*)calloc(max(num1, num2) + 2, sizeof(char));
    if(num1!=num2) {
        int difference = max(num1,num2) - min(num1,num2);
        if(num1>num2) {
            for(int i = 0;i<difference;i++) {
                sumQ[i] = x[i];
            }
            for(int i = difference;i<num1;i++) {
                sumQ[i - 1] = sum_helper_1(x[i], y[i - difference], sumQ[i - 1]);
                sumQ[i] = sum_helper_2(x[i], y[i - difference]);
            }
        } else {
            for(int i = 0;i<difference;i++) {
                sumQ[i] = y[i];
            }
            for(int i = difference;i<num2;i++) {
                sumQ[i - 1] = sum_helper_1(x[i - difference], y[i], sumQ[i - 1]);
                sumQ[i] = sum_helper_2(x[i - difference], y[i]);
            }
        }
        if (sumQ[0] == 48) {
            for (int i = 0; i < num1 + num2 + 1; i++) {
                sumQ[i] = sumQ[i + 1];
            }
        }
        for(int i = 0; i < strlen(sumQ); i++) {
            sumQ = err_repairer(sumQ);
        }
        if(sumQ[0] == '0') {
            sumQ[0] = '1';
            sumQ[strlen(sumQ)] = '0';
        }
        return sumQ;
    } else {
        for(int i = 0;i<max(num1,num2);i++) {
            sumQ[i] = sum_helper_1(x[i], y[i], sumQ[i]);
            sumQ[i + 1] = sum_helper_2(x[i], y[i]);
        }
        if (sumQ[0] == 48) {
            for (int i = 0; i < num1 + num2 + 1; i++) {
                sumQ[i] = sumQ[i + 1];
            }
        }
        return sumQ;
    }
}
char* err_repairer(char *result) {
    char temp;
    for (int i = 0; i < strlen(result); i++) {
        if (result[i] > 57) {
            result[i - 1] = result[i - 1] + (result[i] - 48) / 10;
            result[i] = (result[i] - 48) % 10 + 48;
        }
    }
    return result;
}