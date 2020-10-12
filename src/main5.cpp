#include <iostream>
#include "task5.h"
using namespace std;

int main()
{

    char buf[] = "41,133 15785,2 194,55 3";
    int N = 0;
    char** result = nullptr;
    split(&result, &N, buf, ',');

    cout << result[0] << " - " << result[1] << " - " << result[3] << "\n";

    return 0;
}
