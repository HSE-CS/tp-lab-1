//
// Created by toliman on 12.10.2020.
//

#include "task5.h"

using namespace std;

signed main() {

    int ans;
    char **r = nullptr;

    split(&r, &ans, (char *) "FFF GGG Hello_ Wanna World", ' ');

    for (int i = 0; i < ans; ++i) {
        cout << r[i] << endl;
    }

    return 0;
}
