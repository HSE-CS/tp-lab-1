#include <cstring>
#include <algorithm> 


char *sum(char *x, char *y) {
    int maxLength = std::max(strlen(x), strlen(y));
    int resultLength;
    if(x[0]+y[0]-'0'-'0'>9){
        resultLength = maxLength+1;
    }else{
        resultLength = maxLength;
    }
    char *resultStr = new char[resultLength];
    int counterX = strlen(x)-1;
    int counterY = strlen(y)-1;
    int counterZ = 0;
    int overflow = 0;
    while (counterX >= 0 && counterY >= 0) {
        int intX = x[counterX] - '0';
        int intY = y[counterY] - '0';
        if (intX + intY + overflow > 9) {
            resultStr[resultLength - counterZ - 1] = ((intX + intY + overflow) % 10) + '0';
            overflow = 1;
        } else {
            resultStr[resultLength - counterZ - 1] = (intX + intY + overflow) + '0';
            overflow = 0;
        }
        counterZ++;
        counterX--;
        counterY--;
    }
    while (maxLength - counterZ >= 0) {
        if (counterX >= 0) {
            if (x[counterX] - '0' + overflow > 9) {
                resultStr[resultLength - counterZ - 1] = ((x[counterX] - '0' + overflow) % 10) + '0';
                overflow = 1;
            } else {
                resultStr[resultLength - counterZ - 1] = (x[counterX] - '0' + overflow) + '0';
                overflow = 0;
            }
            counterX--;
        } else if (counterY >= 0) {
            if (y[counterY] - '0' + overflow > 9) {
                resultStr[resultLength - counterZ - 1] = ((y[counterY] - '0' + overflow) % 10) + '0';
                overflow = 1;
            } else {
                resultStr[resultLength - counterZ - 1] = (y[counterY] - '0' + overflow) + '0';
                overflow = 0;
            }
            counterY--;
        } else if (counterX < 0 && counterY < 0) {
            resultStr[resultLength - counterZ - 1] = overflow + '0';
        }
        counterZ++;
    }

    return resultStr;
}