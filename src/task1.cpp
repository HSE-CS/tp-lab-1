#include "task1.h"
unsigned long findValue(unsigned int min,unsigned max)
{
  bool flag_out, flag_in = false;
  int i;
  for(i = 1; flag_out == false; i++)
  {
    flag_in = true;
    for (int j = min; j <= max; j++)
    {
      if (i % j != 0)
        flag_in = false;
    }
    if (flag_in == true)
      return i;
  }

}
