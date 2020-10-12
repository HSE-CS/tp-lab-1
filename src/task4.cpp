#include <string>


char* sum(char* x, char* y) {

    int lenX = strlen(x);
    int lenY = strlen(y);

    unsigned int size;

    if (lenX > lenY)
        unsigned int size = lenX + 1;
    else
        unsigned int size = lenY + 1;

    char *sum = new char[size];
    sum[size] = '\0';

    int locSum = size - 1;
    int locX = lenX - 1;
    int locY = lenY - 1;
    int remainder = 0;

    while (locX >= 0 || locY >= 0) {
        int IntX = x[locX] - '0';
        int IntY = y[locY] - '0';

        if (remainder + IntX + IntY >= 10)
            remainder = IntX + IntY + remainder - 10 + '0';
        sum[locSum] = (IntX + IntY+ remainder) % 10 + '0';

        locX--;
        locY--;
        locSum--;
    }

    while (locX >= 0){
        int IntX = x[locX] - '0';

        if (remainder + IntX >= 10)
            remainder = IntX + remainder - 10 + '0';
        sum[locSum] = (IntX + remainder) % 10 + '0';

        locX--;
        locSum--;
    }

    while (locY >= 0){
        int IntY = x[locY] - '0';

        if (remainder + IntY >= 10)
            remainder = IntY + remainder - 10 + '0';
        sum[locSum] = (IntY + remainder) % 10 + '0';

        locY--;
        locSum--;
    }
    return sum;
}