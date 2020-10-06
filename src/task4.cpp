//
// Created by sharg on 06.10.2020.
//
#include "task4.h"

using namespace std;
char *sum(char *x, char *y) {
    int length, sizeX = strlen(x), sizeY = strlen(y);
    length = sizeY + 1;
    int tempSize = sizeY;
    if (sizeX >= sizeY) {
        length = sizeX + 1;
        tempSize = sizeX;
    }
    int currentNumber = 0;
    int *sum = new int[length]{0};
    int *temp = new int[tempSize]{0};
    if (sizeX >= sizeY) {

        for (int i = sizeX - 1; i >= 0; i--) {
            temp[i] = x[currentNumber] - 48;
            currentNumber++;
        }
        currentNumber = 0;
        for (int i = sizeY - 1; i >= 0; i--) {
            sum[i] = y[currentNumber] - 48;
            currentNumber++;
        }
    } else {
        for (int i = sizeX - 1; i >= 0; i--) {
            sum[i] = x[currentNumber] - 48;
            currentNumber++;
        }
        currentNumber = 0;
        for (int i = sizeY - 1; i >= 0; i--) {
            temp[i] = y[currentNumber] - 48;
            currentNumber++;
        }

    }
    currentNumber = 0;
    for (int iter = 0; iter < length; iter++) {
        if (iter < tempSize) {
            sum[iter] += temp[iter];
            sum[iter + 1] += sum[iter] / 10;
            sum[iter] %= 10;
        } else break;
    }
    if (sum[length - 1] == 0)
        length--;
    char *finalSum = new char[length]{0};
    for (int i = length - 1; i >= 0; i--) {
        finalSum[currentNumber] = (char) (sum[i] + '0');
        currentNumber++;
    }
    finalSum[length] = '\0';
    return finalSum;
}