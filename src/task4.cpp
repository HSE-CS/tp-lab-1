#include "task4.h"

using namespace std;

char *sum(char *x, char *y)
{
    int count_x = strlen(x);
    int count_y = strlen(y);
	
    int max_length;
    if (count_x >= count_y)
        max_length = count_x;
    else
        max_length = count_y;
	
    char *temp = new char[max_length];
    if (count_x < count_y)
	{
        for (int i = 0; i < count_y - count_x; i++)
            temp[i] = '0';
        for (int i = 0; i < count_x; i++)
            temp[i + count_y - count_x] = x[i];
        x = temp;
    }
    if (count_y < count_x)
	{
        for (int i = 0; i < count_x - count_y; i++)
            temp[i] = '0';
        for (int i = 0; i < count_y; i++)
            temp[i + count_x - count_y] = y[i];
        y = temp;
    }
	
	int num = 0;
	char *answer = new char[max_length + 2];
    for (int i = max_length - 1; i >= 0; i--)
	{
        answer[i] = x[i] + y[i] + num - 48;
        num = 0;
        if (answer[i] >= 58)
		{
            num++;
            answer[i] -= 10;
            if (i == 0)
			{
                for (int j = max_length; j >= 0; j--)
                    answer[j] = answer[j - 1];
                answer[0] = '1';
            }
        }
        if (num == 0 && i == 0)
            answer[max_length] = '\0';
    }
    answer[max_length + 1] = '\0';
    return answer;
}