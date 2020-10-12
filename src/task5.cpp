#include "task5.h"
void split(char*** result, int* N, char* buf, char ch)
{
	int cnt = 0;
	for (unsigned i = 0; i < strlen(buf); i++)
  {
		if (buf[i] == ch) cnt++;
	}

	(*result) = new char*[cnt + 2];
	unsigned len = 0;
	for (unsigned i = 0; i < strlen(buf); i++)
  {
    if (buf[i] != ch)
    {
      len++;
    }
    else
    {
      (*result)[*N] = new char[len+1];
      strncpy((*result)[*N], buf + i - len, len);
      (*result)[*N][len] = '\0';
      len = 0;

      if (strcmp((*result)[*N], "") == 0)
      {
        delete[](*result)[*N];
        (*N)--;
      }
      (*N)++;
    }
  }

  (*result)[*N] = new char[len+1];
  strncpy((*result)[*N], buf + strlen(buf) - len, len);
  (*result)[*N][len] = '\0';
  len = 0;

  if (strcmp((*result)[*N], "") == 0)
  {
    delete[](*result)[*N];
    (*N)--;
  }
  (*N)++;
}
