//
// Created by kasya on 11.10.2020.
//
#include <cstring>
#include <algorithm>
#include <string>


std::string Reverse(std::string a) {
    std::string rev_str;
    for (int i = a.size() - 1; i > -1; --i) {
        rev_str += a[i];
    }
    return rev_str;
}

char *sum(char *x, char *y) {
    std::string ans;
    std::string a = x;
    std::string b = y;
    std::string rev_a = Reverse(a);
    std::string rev_b = Reverse(b);
    unsigned i = 0;
    int tmp = 0;
    while (i < rev_a.size() && i < rev_b.size()) {
        int a = rev_a[i] - '0';
        int b = rev_b[i] - '0';
        ans += ((a + b + tmp) % 10) + '0';
        tmp = (a + b + tmp) / 10;
        ++i;
    }
    while (i < rev_a.size()) {
        int a = rev_a[i] - '0';
        ans += ((a + tmp) % 10) + '0';
        tmp = (a + tmp) / 10;
        ++i;
    }
    while (i < rev_b.size()) {
        int b = rev_b[i] - '0';
        ans += ((b + tmp) % 10) + '0';
        tmp = (b + tmp) / 10;
        ++i;
    }
    if (tmp) {
        ans += tmp + '0';
    }
    ans = Reverse(ans);
    char* ans_char = new char[ans.size()];
    strcpy(ans_char, ans.c_str());
    return ans_char;
}
