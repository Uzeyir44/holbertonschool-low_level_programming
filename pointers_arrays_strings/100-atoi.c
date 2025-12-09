#include "main.h"

int _atoi(char *s)
{
    int c;
    int num;
    char sign;

    c = 0;

    while (s[c] != '\0')
    {
        if ((s[c+1] >= '0' && s[c+1] <= '9') && (!(s[c] >= '0' && s[c] <= '9')))
        {
            sign = s[c];
        }
        
        if (s[c] >= '0' && s[c] <= '9')
        {
            if (c == 0)
            {
                sign = '+'
            }

            num = num * 10 + (s[c] - '0');

            if (!(s[c+1] >= '0' && s[c+1] <= '9'))
            {
                break;
            }
        }

        c++;
    }

    if (sign == '+' || sign == " ")
    {
        return (num);
    }
    else
    {
        return (-num);
    }
}