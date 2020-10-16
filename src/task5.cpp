#include <cstring>

using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
    int stringCount = 1;
    for (int i = 0; i < strlen(buf); ++i) {
        if (buf[i] == ch) {
            stringCount++;
        }
    }

    char** resultStr = new char* [stringCount];
    for (int i = 0; i < stringCount; ++i) {
        resultStr[i] = new char[3];
    }
    *result = resultStr;
    int counter = 0;
    for (int i = 0; i < strlen(buf); ++i) {
        if (buf[i] == ch) {
            (*N)++;
            counter = 0;
            continue;
        }
        resultStr[*N][counter] = buf[i];
        counter++;
    }
    (*N)++;
}