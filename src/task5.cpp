#include"task5.h"

void split(char*** result, int* N, char* buf, char ch)
{
	int cnt_arrs = 1;
	for (int i = 0; i < strlen(buf); i++)
		if (buf[i] == ch)
			cnt_arrs++;

	int* sizes = new int[cnt_arrs];
	*N = cnt_arrs;

	int cnt_size = 0;
	int current_arr = 0;
	(*result) = new char* [cnt_arrs];
	for (int i = 0; i < strlen(buf); i++)
		if (buf[i] != ch)
			cnt_size++;
		else
		{
			sizes[current_arr] = cnt_size + 1;
			(*(result))[current_arr] = new char[sizes[current_arr]]{ '\0' };
			cnt_size = 0;
			current_arr++;
		}
	(*(result))[current_arr] = new char[cnt_size + 1]{ '\0' };
	current_arr = 0;
	int current_char = 0;
	for (int i = 0; i < strlen(buf); i++)
		if (buf[i] != ch)
			(*result)[current_arr][current_char++] = buf[i];
		else
		{
			current_char = 0;
			current_arr++;
		}

	delete[]sizes;
}