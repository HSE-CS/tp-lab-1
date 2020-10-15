#include <iostream>
#include "task5.h"
#include <cstring>

using namespace std;

void split(char*** result, int* N, char* buf, char ch) {
  string text = buf;
  (*result) = (char**)calloc(text.length(), sizeof(char*));
  int k = 0;
  string buff;
  int razdel = 0;
  for (int i = 0; i <= text.length(); ++i) {//main 
    if (text[i] == ch) {
      for (int j = razdel; j < i; ++j) {
        buff.push_back(text[j]);
      } 
      (*result)[k] = (char*)calloc(buff.length() + 1, sizeof(char));
      razdel = i + 1;
      for (int j = 0; j < buff.length(); ++j) {
        (*result)[k][j] = buff[j];
      }
      ++k;
      buff.clear();
    }
    else if (text[i] == '\0') {
      for (int j = razdel; j < i; ++j) {
        buff.push_back(text[j]);
      }
      (*result)[k] = (char*)calloc(buff.length() + 1, sizeof(char));
      for (int j = 0; j < buff.length(); ++j) {
        (*result)[k][j] = buff[j];
      }
      ++k;
      buff.clear();
    }
  }
  *N = k;
}