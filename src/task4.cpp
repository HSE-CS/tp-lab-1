#include <string.h>
#include <algorithm>

char * sum(char *x, char *y){
    int SIZE = std::max(strlen(x), strlen(y)) + 1;
    char* sum = new char[SIZE];
    for (int i = 0; i < SIZE; i++) {
        sum[i] = '0';
    }

    int curr_res = 0;
    for (unsigned int i = 0; i < SIZE - 1; i++) {
        curr_res = 0;
        if (i > strlen(x) - 1)
            curr_res = (sum[i] - '0') + (y[strlen(y) - i - 1] - '0');
        else if (i > strlen(y) - 1)
            curr_res = (sum[i] - '0') + (x[strlen(x) - i - 1] - '0');
        else
            curr_res = curr_res = (sum[i] - '0') + (x[strlen(x) - i - 1] - '0') + (y[strlen(y) - i - 1] - '0');

        if (curr_res >= 10) {
            sum[i] = curr_res%10 + '0';
            sum[i + 1] = curr_res / 10 + '0';
        }
        else if (curr_res >= 0)
            sum[i] = curr_res%10 + '0';
    }

    if (sum[SIZE - 1] == '0')
        sum[SIZE - 1] = '\0';
    std::reverse(sum, sum + strlen(sum));
    sum[SIZE] = '\0';
    return sum;
}
