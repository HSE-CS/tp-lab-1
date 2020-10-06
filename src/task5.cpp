#include <cstring>

void split(char ***result, int *N, char *buf, char ch){
    int last_i = -1;
    for(int i = 0; i < strlen(buf); i++){
        if (buf[i] == ch && i != 0 && i != strlen(buf)-1) {
            ++*N;
        }
    }
    ++*N;
    *result = new char *[*N];
    int n = 0, c = 0;
    for(int i = 0; i <= strlen(buf); i++){
        if (buf[i] == ch || (i == strlen(buf) && *N!=0)){
            (*result)[n] = new char [i-last_i-1];
            for (int j = last_i+1; j < i; ++j) {
                (*result)[n][c] = buf[j];
                c++;
//                std::cout << (*result)[n][j];
            }
            last_i=i;
            n++;
            c=0;
        }
    }
}
