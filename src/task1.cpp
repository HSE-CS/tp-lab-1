#include "task1.h"
/*
//nod
unsigned int  nod(unsigned int n1, unsigned int n2)
{
    unsigned int div;

    if (n1 == n2) return n1;

    unsigned int  d = n1 - n2;

    if (d < 0)
    {
        d = -d;
        div = nod(n1, d);
    }
    else
        div = nod(n2, d);

     return div;
}

unsigned long findValue(unsigned int min, unsigned int max)//nok
{
    unsigned int cur = min * (min + 1) / nod(min, min + 1);

    for (unsigned int i = min+2; i <= max; i++)
    {
        cur = cur * i / nod(cur, i);
    }

    return cur;
*/
unsigned long findValue(unsigned int min,unsigned max)
{
    unsigned long out = 1;
    //bool f = false; //mod for every
    int f = 0;
    //while (false){
    while (f != 1){
        //f = true;
        f = 1;
        //for (int i = min; (i < max) && (f == true); i++) {
        for (int i = min; (i < max) && (f == 1); i++) {
            if (out % i != 0) {
                f = 0;
                //f = false;
                out++;
                //break;
            }
        }
    }

    return out;
}