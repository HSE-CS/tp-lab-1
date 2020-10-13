#include <iostream>
#include <cstring>
using namespace std;

//dividing the string buf into result array of N substrings, separated by delimiters ch
void split(char*** result, int* N, char* buf, char ch) {
	int amount(0);
	int sizes[20]{ 0 };
	int counter(0);

	for (size_t j = 0; j < strlen(buf); j++)
	{
		if (buf[j] != ch) sizes[counter]++;
		else counter++;
	}
	*N = ++counter;
	*result = new char* [counter];
	for (size_t i = 0; i < counter; i++)
	{
		(*(result))[i] = new char[sizes[i]]{ 0 };
	}
	int char_counter(0), str_counter(0);
	
	for (size_t i = 0; i < strlen(buf) + 1; i++)
	{
		if (buf[i] != ch) {
			(*result)[str_counter][char_counter++] = buf[i];
		}
		else {
			(*result)[str_counter][char_counter] = '\0';
			char_counter = 0;
			str_counter++;
		}
	}
}