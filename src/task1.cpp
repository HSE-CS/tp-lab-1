unsigned long findValue(unsigned int min,unsigned max)
{
    int temp;
    for(int i = 1; ; i++) {
        for (int j = min; j <= max; j++) {
            if(i % j != 0)
            {
                temp = 0;
                break;
            }
            else
            {
                temp++;
            }
        }
        if(temp == max)
        {
            return i;
        }
    }
}