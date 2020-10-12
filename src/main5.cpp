#include <iostream>
#include <cstring>
#include "task5.h"
using namespace std;

int main()
{

    char buf[] = "I have, no idea, but i do it";
    int N = 0;
    char** result = nullptr;
    split(&result, &N, buf, ',');

    cout << result[0] << " " << result[1] << " " << result[2] << "\n";

    return 0;
}
