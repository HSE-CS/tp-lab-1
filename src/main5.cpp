#include "task5.h"

int main()
{
    char* buf = "987,654,321";
    int N = 0;
    char** result = nullptr;
    split(&result, &N, buf, ',');

    cout << result[0] << endl;
    cout << result[1] << endl;
    cout << result[2] << endl;
}