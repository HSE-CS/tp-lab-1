#include <string>
#include <cstring>


char* sum(char* x, char* y) {

    int lenX = strlen(x);
    int lenY = strlen(y);

     int size;

    if (lenX > lenY)
        size = lenX + 2;
    else
        size = lenY + 2;

    char *sum = new char[size];
    sum[size-1] = '\0';

     int locSum = size - 2;
     int locX = lenX - 1;
     int locY = lenY - 1;
     int remainder = 0;

    while (locX >= 0 && locY >= 0) {
        int IntX = x[locX] - '0';
        int IntY = y[locY] - '0';

        sum[locSum] = (IntX + IntY + remainder) % 10 + '0';

        if (remainder + IntX + IntY >= 10)
            remainder = (IntX + IntY + remainder) / 10;
        else
            remainder = 0;

        locX--;
        locY--;
        locSum--;
    }

    while (locX >= 0){
        int IntX = x[locX] - '0';

        sum[locSum] = (IntX + remainder) % 10 + '0';

        if (remainder + IntX >= 10)
            remainder = (IntX + remainder) / 10;
        else
            remainder = 0;

        locX--;
        locSum--;
    }

    while (locY >= 0){
        int IntY = x[locY] - '0';

        sum[locSum] = (IntY + remainder) % 10 + '0';

        if (remainder + IntY >= 10)
            remainder = (IntY + remainder) /10;
        else
            remainder = 0;

        locY--;
        locSum--;
    }

    if (remainder > 0)
        sum[locSum] = remainder + '0';
    else {
        int i = 0;
        while (sum[i+1] != 0) {
            sum[i] = sum[i + 1];
            i++;
        }
        sum[i] = '\0';
    }
    return sum;
}