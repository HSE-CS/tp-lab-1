
#include "task4.h"

using namespace std;

char *sum(char *x, char *y) {
    int lx = strlen(x);
    int ly = strlen(y);
    int DM = fmax(lx, ly);
    char *ans = new char[DM + 2];
    char *temp = new char[DM];
    int dop = 0;

    if (lx < ly) {
        for (int i = 0; i < ly - lx; i++)
            temp[i] = '0';
        for (int i = 0; i < lx; i++)
            temp[i + ly - lx] = x[i];
        x = temp;
    }
    if (ly < lx) {
        for (int i = 0; i < lx - ly; i++)
            temp[i] = '0';
        for (int i = 0; i < ly; i++)
            temp[i + lx - ly] = y[i];
        y = temp;
    }


    for (int i = DM - 1; i >= 0; i--) {
        ans[i] = x[i] + y[i] + dop - 48;
        dop = 0;
        if (ans[i] >= 58) {
            dop++;
            ans[i] -= 10;
            if (i == 0) {
                for (int j = DM; j >= 0; j--)
                    ans[j] = ans[j - 1];
                ans[0] = '1';
            }
        }
        if (dop == 0 && i == 0)
            ans[DM] = '\0';
    }
    ans[DM + 1] = '\0';
    return ans;
}