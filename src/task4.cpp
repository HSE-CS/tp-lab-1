#include <iostream>
#include <cstring>


using namespace std;

char *sum(char *x, char *y) {

    int n;
    if (strlen(x) > strlen(y)) n = strlen(x);
    else n = strlen(y);

    char cansw[101] = "";
    int plus = 0;

    for (int i = 0; i < n+1; i++) {

        int xi,yi;

        if (i<=strlen(x)) xi = (x[strlen(x) - i - 1] - '0');
        if (i<=strlen(y)) yi = (y[strlen(y) - i - 1] - '0');

        if (xi > 9 || xi < 1) xi = 0;
        if (yi > 9 || yi < 1) yi = 0;

        char currnum = (((xi + yi + plus) % 10)) + '0';
        cansw[n - i] = currnum;

        //cout << xi << ' ' << yi << ' ' << plus << " - " << currnum  << ' ' << xi + yi + plus << '\n';

        if ((xi+yi+plus) > 9) plus = 1;
        else plus = 0;
    }

    if (cansw[0]!='1') {
        for (int i = 0; i < n; i++) {
            cansw[i] = cansw[i + 1];
        }
        cansw[n] = '\0';
    } else n++;

    char * answ = new char[n];
    for (int i = 0; i <n; i++ ) {answ[i] = cansw[i];}
    answ[n] = '\0';

    return answ;
}
