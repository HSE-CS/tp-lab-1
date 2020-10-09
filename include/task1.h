#ifndef TASK1_H
#define TASK1_H

#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string.h>
#include <iterator>
using namespace std;

const size_t LARGE_SIZE = 1000000;

int comp1(const void* a, const void* b);
int comp2(const void* a, const void* b);
int comp3(const void* a, const void* b);
int comp4(const void* a, const void* b);
int comp5(const void* a, const void* b);
int comp6(const void* a, const void* b);

struct Person
{
    string name;
    unsigned age;
};



#endif