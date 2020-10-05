#include "task5.h"

int main(){
    int word_number = 0;
    char **words;
    char *s = "qwe asd xzcs";
    split(&words, &word_number, s, ' ');
    for (int i = 0; i < word_number; ++i) {
        cout << words[i] << endl;
    }
    return 0;
}