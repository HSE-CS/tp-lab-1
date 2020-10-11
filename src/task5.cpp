//
// Created by jmax on 11.10.2020.
//

#include <cstring>
#include <vector>
#include <iostream>

void split(char ***result, int *N, char *buf, char ch) {
    std::vector<int> points;
    for (int i = 0; i < strlen(buf); i++) {
        if (buf[i] == ch)
            points.push_back(i);
    }
    points.push_back(strlen(buf));
    *N = points.size();

    (*result) = new char *[points.size()]();
    int prevPoint = 0;
    int counter = 0;
    for (int point : points) {
        (*result)[counter] = new char[point - prevPoint + 1]();
        for (int i = prevPoint, j = 0; i < point; i++, j++) {
            (*result)[counter][j] = buf[i];
            (*result)[counter][j + 1] = 0;
        }
        prevPoint = point + 1;
        counter++;
    }
}