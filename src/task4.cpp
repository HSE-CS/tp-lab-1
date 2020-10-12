#include <string.h>
#include <algorithm>

char * reverse(char *str) {
    int SIZE = strlen(str) - 1;
    char *p = new char[SIZE];
    for (int i = 0; i < SIZE; i++) {
        p[i] = '\0';
    }
    strcpy(p, str);

    int i = 0, j = SIZE;
    while (p[j] == '0') {
        str[j] = '\0';
        j--;
    }
    while(i <= j+i) {
        str[i++] = p[j--];
    }

    return str;
}

char * sum(char *x, char *y){
    int SIZE = std::max(strlen(x), strlen(y)) + 1;
    char* sum = new char[SIZE];
    for (int i = 0; i < SIZE; i++) {
        sum[i] = '0';
    }

    int curr_res = 0;
    reverse(x); reverse(y);
    for (unsigned int i = 0; i < SIZE - 1; i++) {
        curr_res = 0;
        if (i > strlen(x) - 1)
            curr_res = (sum[i] - '0') + (y[i] - '0');
        else if (i > strlen(y) - 1)
            curr_res = (sum[i] - '0') + (x[i] - '0');
        else
            curr_res = curr_res = (sum[i] - '0') + (x[i] - '0') + (y[i] - '0');

        if (curr_res >= 10) {
            sum[i] = curr_res%10 + '0';
            sum[i + 1] = curr_res / 10 + '0';
        }
        else if (curr_res >= 0)
            sum[i] = curr_res%10 + '0';
    }

    reverse(sum);
    sum[SIZE] = '\0';
    return sum;
}
