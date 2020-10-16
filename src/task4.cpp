//
// Created by toliman on 05.10.2020.
//

#include "task4.h"

using namespace std;

char *sum(char *x, char *y) {
    int length = max(strlen(x), strlen(y));
    int first_length = strlen(x), second_length = strlen(y);
    auto temp_result = new char[length + 1];

    memset(temp_result, 0, strlen(temp_result));

    int remaining = 0;
    int summation_result;

    for (int i = 0; i < length; ++i) {
        summation_result = remaining;
        remaining = 0;
        if (first_length - 1 - i > -1) summation_result += x[first_length - 1 - i] - '0';
        if (second_length - 1 - i > -1) summation_result += y[second_length - 1 - i] - '0';
        if (summation_result > 9) {
            summation_result -= 10;
            remaining = 1;
        }
        temp_result[i] = (char) (summation_result + '0');
    }
    if (remaining > 0) temp_result[length] = (char) (remaining + '0'); else temp_result[length] = '\0';
    reverse(temp_result, temp_result + strlen(temp_result));

    int true_length = strlen(temp_result);
    auto result = new char[true_length + 1];
    memset(result, 0, true_length + 1);
    for (int i = 0; i < true_length; ++i) result[i] = temp_result[i];

    return result;
}
