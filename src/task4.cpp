#include <vector>
#include <algorithm>
#include "task4.h"

char *sum(char *x, char *y){
    int n1 = strlen(x), n2 = strlen(y);
    if (n1 > n2) {
        std::swap(x, y); //2nd str is always bigger                CHECK!!!!!!!!!!!!!!!!!!!!1
        std::swap (n1,n2);
    }
    char *str; //additional str
    char *finale; //result
    if (n1 >= n2) { //  memory for new str-num
        str = new char[n1 + 1]();
        finale = new char[n1 + 1]();
    } else {
        str = new char[n2 + 1]();
        finale = new char[n2 + 1]();
    }

    std::vector<char> vec1;
    std::vector<char> vec2;
    for (int i = 0; i < n1; ++i) {
            vec1.push_back(x[i]);
        }

    for (int j = 0; j < n2; ++j) {
            vec2.push_back(y[j]);
        }

    std::reverse(vec1.begin(), vec1.end());  //rev both str
    std::reverse(vec2.begin(), vec2.end());

    int carry = 0;
    int index1 = 0;
    for (int i = 0; i<n1; i++) { //в столбик
        int sum = ((vec1[i] - '0') + (vec2[i] - '0') + carry);
        char s = sum % 10 + '0';
        str[index1++] = s;
        carry = sum / 10;
    }
    for (int i = n1; i<n2; i++) { //Оставшиеся цифры
        int sum = ((vec2[i] - '0') + carry);
        char s = sum % 10 + '0';
        str[index1++] = s;
        carry = sum / 10;
    }
    if (carry){ // остаток
        char s = carry + '0';
        str[index1++] = s;
    }

    int size = strlen(str); // rev finale str
    int count = 0;
    for (int j =size-1; j >= 0; --j) {
        finale[count++] = str[j];
    }

    return finale;
}

