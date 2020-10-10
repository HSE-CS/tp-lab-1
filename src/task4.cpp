#include "task4.h"
char * sum(char *x, char *y)
{
  int len_x = strlen(x);
  int len_y = strlen(y);
  int boofer = 0;
  int max_len = len_x > len_y ? len_x: len_y;
  char *new_str = (char *)malloc(max_len+1);

  int first_num = 0;
  int second_num = 0;
  int next_num = 0;
  for (int i = 0; i < max_len; i++)
  {
    if (len_x < i)

      first_num = 0;

    else
      first_num = x[max_len - i - 1] - '0';


      if (len_y < i)

        second_num = 0;

      else
        second_num = y[max_len - i - 1] - '0';

    next_num = first_num + second_num + boofer;
    boofer = next_num % 10;
    next_num = next_num / 10;

    new_str[i] = next_num + '0';

  }

  if (new_str[max_len-1] == '0')
       --max_len;
       
   reverse(new_str, new_str + max_len);

   new_str[max_len] = '\0';
   if (max_len == 0)
   {
       new_str[0] = '0';
       new_str[1] = '\0';
   }
   return new_str;



}
