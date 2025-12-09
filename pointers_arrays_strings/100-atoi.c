#include "main.h"

int _atoi(char *s)
{
    int c;
    int num;
    int negative;

    c = 0;
    num = 0;
    negative = 0;

    while (s[c] != '\0')
    {
        if (s[c] == '-')
        {
            negative++;
        }

        if (s[c] >= '0' && s[c] <= '9')
        {
            num = num * 10 + (s[c] - '0');

            if (!(s[c+1] >= '0' && s[c+1] <= '9'))
            {
                break;
            }
        }

        c++;
    }

    if (negative % 2 == 0)
    {
        return (num);
    }
    
    return (-num);
}