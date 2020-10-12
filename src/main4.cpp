#include <iostream>
#include "task4.h"
#include <stdlib.h>
#include <cstring>
using namespace std;
int main()
{
    char *result = sum("19389756", "2869503");
    for (int i = 0; i < strlen(result); i++)
    {
        cout << result[i];
    }
    return 0;
}
