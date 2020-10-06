#include <cstring>
#include "task5.h"

void split(char*** result, int* N, char* buf, char ch)
{
	unsigned int maxSize{ 1000 };

	// Translate <const char*> to <char*> as array on the heap
	unsigned int lenBuf{ strlen(buf) };
	char* buf_{ new char[lenBuf + 1] };
	memcpy(buf_, buf, lenBuf);
	memset(buf_ + lenBuf, 0, 1);
	buf = buf_;

	(*result) = new char*[maxSize];
	char* begin_substr = buf;
	while (*buf != 0)
	{
		if (*buf == ch)
		{
			(*result)[(*N)++] = begin_substr;
			begin_substr = buf + 1;
			*buf = 0;
		}
		buf++;
	}
	(*result)[(*N)++] = begin_substr; // The last one
}
