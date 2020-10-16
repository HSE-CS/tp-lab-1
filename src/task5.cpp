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
            resultStr[*N][counter] = '\0';
            (*N)++;
            counter = 0;
            continue;
        }
        if(i == strlen(buf)-1){
            resultStr[*N][counter+1] = '\0';
        }
        resultStr[*N][counter] = buf[i];
        counter++;
    }
    (*N)++;
}