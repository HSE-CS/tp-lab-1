//
// Created by jmax on 06.10.2020.
//

#include <cstring>


char *sum(char *x, char *y) {
    unsigned int max = strlen(x) > strlen(y) ? strlen(x) : strlen(y);
    char *ans = new char[max];

    int previousSymbol = 0, sum;
    for (int i = strlen(x) - 1, j = strlen(y) - 1, k = max; k > 0 ; i--, j--, k--) {
        if (i < 0)
            sum = (y[j] - '0') + previousSymbol;
        else if (j < 0)
            sum = (x[i] - '0') + previousSymbol;
        else
            sum = (x[i] - '0') + (y[j] - '0') + previousSymbol;

        ans[k] = (char) ((sum % 10) + '0');
        previousSymbol = sum / 10;
    }
    if (previousSymbol == 0)
        return ans + 1;
    else {
        ans[0] = (char) (previousSymbol + '0');
        return ans;
    }
}