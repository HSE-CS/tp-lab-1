#include <iostream>
#include "task5.h"

using namespace std;

int main() {
    char *buf = "912349991239999901234599999912399999";
    int N = 0;
    char **result = nullptr;


    split(&result, &N, buf, '9');

    for (int i = 0; i < 4; i++)
        cout << result[i] << endl;


}
