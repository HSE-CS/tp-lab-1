#include "task4.h"

char * sum(char *x, char *y){
    int len, size_x= strlen(x), size_y = strlen(y);
    len = size_x + 1;
    int temp_size = size_x;

    if (size_y >= size_x) {
        len = size_y + 1;
        temp_size = size_y;
    }

    int counter = 0,*sum = new int[len]{0}, *temp = new int[temp_size]{0};

    if (size_x >= size_y) {

        for (int i = size_x - 1; i >= 0; i--) {
            temp[i] = x[counter] - 48;
            counter++;
        }
        counter = 0;
        for (int i = size_y - 1; i >= 0; i--) {
            sum[i] = y[counter] - 48;
            counter++;
        }
    }
    else {
        for (int i = size_x - 1; i >= 0; i--) {
            sum[i] = x[counter] - 48;
            counter++;
        }
        counter = 0;
        for (int i = size_y - 1; i >= 0; i--) {
            temp[i] = y[counter] - 48;
            counter++;
        }
    }

    counter = 0;
    for (int j = 0; j < len; j++) {
        if (j < temp_size) {
            sum[j] += temp[j];
            sum[j + 1] += sum[j] / 10;
            sum[j] %= 10;
        }
        else break;
    }

    if (sum[len - 1] == 0)
        len--;

    char *summa = new char[len]{0};

    for (int i = len - 1; i >= 0; i--) {
        summa[counter] = (char) (sum[i] + '0');
        counter++;
    }
    summa[len] = '\0';
    return summa;
}