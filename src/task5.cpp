#include "task5.h"

void split(char*** result, int* N, char* buf, char ch) {
    string str(buf);
    vector<string> res;
    int end = 0;
    while (str.find(ch, end) != string::npos) {
        end = str.find(ch);
        res.push_back(str.substr(0, end));
        str = str.substr(end + 1);
    }
    res.push_back(str);
    *N = res.size();

    *result = new char* [res.size()];
    for (int i = 0; i < *N; i++) {
        char* temp = new char[res[i].size()];
        strcpy(temp, res[i].c_str());
        (*result)[i] = temp;
    }
}