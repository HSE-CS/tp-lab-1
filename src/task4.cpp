#include "task4.h"
char * sum(char *x, char *y)
{
  int len_x = strlen(x);
  int len_y = strlen(y);
  // cout << len_x << " " << len_y << endl;

  // for (int i = 0; y[i] != '\0'; i++)
  //   cout <<y[i];
  // cout << endl;

  int boofer = 0;
  int max_len = len_x > len_y ? len_x: len_y;
  char *new_str = (char *)malloc(max_len+1);

  int first_num = 0;
  int second_num = 0;
  int next_num = 0;
  for (int i = 0; i < max_len + 1; i++)
  {
    if (len_x <= i)
      first_num = 0;

    else
      first_num = x[len_x - i - 1] - '0';

    if (len_y <= i)
      second_num = 0;
    else
      second_num = y[len_y - i - 1] - '0';

    next_num = first_num + second_num + boofer;

    boofer = next_num / 10;
    next_num = next_num % 10;
    new_str[i] = next_num + '0';
    // cout << first_num << " " << second_num << " " << boofer << " " << new_str[i] << endl;

  }

  if (new_str[max_len] == '0')
       --max_len;

   reverse(new_str, new_str + max_len + 1);

   new_str[max_len + 1] = '\0';
   if (max_len == 0)
   {
       new_str[0] = '0';
       new_str[1] = '\0';
   }
   return new_str;



}
