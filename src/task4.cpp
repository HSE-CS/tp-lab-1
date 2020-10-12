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

char* main_sum_helper(char *a,char *b) {
    int num1 = number_of_digits(a), num2 = number_of_digits(b);
    char *sum = (char*)calloc(max(num1,num2)+2,sizeof(char));
    if(num1!=num2) {
        int difference = max(num1,num2) - min(num1,num2);
        if(num1>num2) {
            for(int i = 0;i<difference;i++) {
                sum[i] = a[i];
            }
            for(int i = difference;i<num1;i++) {
                sum[i-1] = sum_helper_1(a[i],b[i-difference],sum[i-1]);
                sum[i] = sum_helper_2(a[i],b[i-difference]);
            }
        } else {
            for(int i = 0;i<difference;i++) {
                sum[i] = b[i];
            }
            for(int i = difference;i<num2;i++) {
                sum[i-1] = sum_helper_1(a[i-difference],b[i],sum[i-1]);
                sum[i] = sum_helper_2(a[i-difference],b[i]);
            }
        }
        if (sum[0] == 48) {
            for (int i = 0; i < num1 + num2 + 1; i++) {
                sum[i] = sum[i + 1];
            }
        }
        for(int i = 0; i < strlen(sum); i++) {
            sum = err_repairer(sum);
        }
        if(sum[0] == '0') {
            sum[0] = '1';
            sum[strlen(sum)] = '0';
        }
        return sum;
    } else {
        for(int i = 0;i<max(num1,num2);i++) {
            sum[i] = sum_helper_1(a[i],b[i],sum[i]);
            sum[i+1] = sum_helper_2(a[i],b[i]);
        }
        if (sum[0] == 48) {
            for (int i = 0; i < num1 + num2 + 1; i++) {
                sum[i] = sum[i + 1];
            }
        }
        return sum;
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