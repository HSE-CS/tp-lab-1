//
// Created by toliman on 05.10.2020.
//

#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) {

//    *N=48787;
//    (*result)= reinterpret_cast<char **>(0xffff);

    string buffer(buf);

    int strings = 1;
    for (auto &x: buffer) strings += (x == ch ? 1 : 0);

    vector<int> sizes;
    int current = 0;
    for (char i : buffer) {
        if (i == ch) {
            sizes.push_back(current);
            current = 0;
        } else current++;
    }

    auto temp = new char *[strings];
    (*N) = strings;
    for (int i = 0; i < strings; ++i) temp[i] = new char[sizes[i]];
    vector<int> edges;
    edges.push_back(-1);

    for (int i = 0; i < buffer.size(); ++i) {
        if (buffer[i] == ch) {
            edges.push_back(i);
        }
    }
    edges.push_back(buffer.size());

    for (auto x: edges) cout << x << ' ';
    cout << endl;


    for (int i = 0; i < strings; ++i) {
        strcpy(temp[i], (buffer.substr(edges[i] + 1, edges[i + 1])).c_str());
        temp[i][sizes[i]] = '\0';
    }
    *result = temp;



//    int result_index = 0;
//    int result_string_index = 0;
//    int buf_index = 0;
//
//    int string_count = 0;
//    unsigned int last = 0;

//    for (unsigned int i = 0; i < strlen(buf); ++i) {
//        if (buf[i] == ch && i - last > 1) {
//            string_count++;
//            last = i;
//        }
//    }
//
//    int lengths[100];
//    int l = 0;
//    last = 0;
//
//    for (unsigned int i = 0; i < strlen(buf); ++i) {
//        if (buf[i] == ch && i - last > 1) {
//            lengths[l] = i - last - 1;
//            l++;
//            last = i;
//        }
//    }
//    *N=3;

//    (*result) = new char *[string_count];
//
//    for (int i = 0; i < string_count; ++i)
//        (*result)[i] = new char[lengths[i] + 1];
//
//    for (int i = 0; i < string_count; ++i)
//        memset((*result)[i], 0, lengths[i] + 1);
//
//    while (buf[buf_index] != '\0') {
//        if (buf[buf_index] == ch) {
//            if (result_string_index > 0) {
//                result_index++;
//                result_string_index = 0;
//            }
//        } else {
//            (*result)[result_index][result_string_index] = buf[buf_index];
//            result_string_index++;
//        }
//        buf_index++;
//    }
//    (*N) = result_index;
}
