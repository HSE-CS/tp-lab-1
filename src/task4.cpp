#include "task4.h"
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>


char* sum(char* x, char* y)
{
    char* res = new char[max(strlen(x) + 1, (strlen(y) + 1))];
    if ((strlen(x)) != (strlen(y)))
    {
        if (max(strlen(x), (strlen(y))) == (strlen(x)))
        {
            int leny = strlen(y) - 1;
            char* newstr = new char[max(strlen(x), (strlen(y)))];
            for (int g = strlen(x)-1; g >= 0; g--)
            {
                if (leny >= 0)
                {
                    newstr[g] = y[leny];
                    leny--;
                }
                else
                {
                    newstr[g] = ' ';
                }
            }
            newstr[max(strlen(x), (strlen(y)))] = '\0';
            int save = 0;
            for (int of = strlen(x) - 1; of >= 0; of--)
            {
                int a = (int)x[of] - '0';
                if (newstr[of] != ' ')
                {
                    int b = (int)newstr[of] - '0';
                    if (save)
                    {
                        a++;
                        save = 0;
                    }
                    if (a + b > 9)
                    {
                        res[of + 1] = (char)(((a + b) % 10) + '0');
                            save++;
                    }
                    else
                        res[of + 1] = (char)((a + b) + '0');
                }
                else
                {
                    if (save)
                    {
                        a++;
                        save = 0;
                    }
                    if (a > 9)
                    {
                        res[of + 1] = (char)(((a) % 10) + '0');
                        save++;
                    }
                    else
                        res[of + 1] = (char)((a)+'0');
                }
                if (save == 1)
                {
                    res[of] = '1';
                }
                else
                {
                    /*char* res2 = new char[max(strlen(x)+1, (strlen(y)+1))];
                    for (int of = strlen(res) - 1; of >= 0; of--)
                    {
                        res2[of] = res[of + 1];
                    }
                    delete [] res;
                    res2[max(strlen(x), (strlen(y)))] = '\0';
                    return res2*/;
                }
            }

            res[max(strlen(x) + 1, (strlen(y) + 1))] = '\0';
            //delete [] newstr;
            return res;
        }

        if (max(strlen(x), (strlen(y))) == (strlen(y)))
        {
            int leny = strlen(x) - 1;
            char* newstr = new char[max(strlen(x), (strlen(y)))];
            for (int g = strlen(newstr); g >= 0; g--)
            {
                if (leny >= 0)
                { 
                    newstr[g] = x[leny];
                    leny--;
                }
                else
                {
                    newstr[g] = ' ';
                }

                newstr[strlen(newstr)] = '\0';
                int save = 0;
                for (int of = strlen(y) - 1; of >= 0; of--)
                {
                    int a = (int)y[of] - '0';
                    if (newstr[of] != ' ')
                    {
                        int b = (int)newstr[of] - '0';
                        if (save)
                        {
                            a++;
                            save = 0;
                        }
                        if (a + b > 9)
                        {
                            res[of] = (char)(((a + b) % 10) + '0');
                            save++;
                        }
                        else
                            res[of] = (char)((a + b) + '0');
                    }
                    else
                    {
                        if (save)
                        {
                            a++;
                            save = 0;
                        }
                        if (a > 9)
                        {
                            res[of] = (char)(((a) % 10) + '0');
                            save++;
                        }
                        else
                            res[of] = (char)((a)+'0');
                    }
                }
                res[max(strlen(x) + 1, (strlen(y) + 1))] = '\0';
                delete [] newstr;
                return res;
            }
        }
    }
    else
    {
        int save = 0;
        for (int of = strlen(x)-1; of >= 0; of--)
        {
            int a = (int)(x[of] - '0');
            int b = (int)(y[of] - '0');
            if (save)
            {
                a++;
                save = 0;
            }
            if (a + b > 9)
            {
                res[of+1] = (char)(((a + b) % 10) + '0');
                save++;
            }
            else
                res[of+1] = (char)((a + b) % 10 + '0');
        }
        res[max(strlen(x) + 1, (strlen(y) + 1))] = '\0';
        return res;
    }
}




