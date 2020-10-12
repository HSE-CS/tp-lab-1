#include <string>
#include <cstring>


char* sum(char* x, char* y) {

    int lenX = strlen(x);
    int lenY = strlen(y);

    unsigned int size;

    if (lenX > lenY)
        unsigned int size = lenX + 2;
    else
        unsigned int size = lenY + 2;

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
}