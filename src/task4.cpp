#include <string.h>
#include <algorithm>

char * sum(char *x, char *y){
    int N = std::max(strlen(x), strlen(y)) + 1;
    char* total_sum = new char[N];
    for (int i = 0; i < N; i++) {
        total_sum[i] = '0';
    }

    int result = 0;
    for (unsigned int i = 0; i < N - 1; i++) {
        result = 0;
        if (i > strlen(x) - 1)
            result = (total_sum[i] - '0') + (y[strlen(y) - i - 1] - '0');
        else if (i > strlen(y) - 1)
            result = (total_sum[i] - '0') + (x[strlen(x) - i - 1] - '0');
        else
            result = result = (total_sum[i] - '0') + (x[strlen(x) - i - 1] - '0') + (y[strlen(y) - i - 1] - '0');

        if (result >= 10) {
            total_sum[i] = result%10 + '0';
            total_sum[i + 1] = result / 10 + '0';
        }
        else if (result >= 0)
            total_sum[i] = result%10 + '0';
    }

    if (total_sum[N - 1] == '0')
        total_sum[N - 1] = '\0';
    std::reverse(total_sum, total_sum + strlen(total_sum));
    total_sum[N] = '\0';
    return total_sum;
}