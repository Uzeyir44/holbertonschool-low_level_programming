#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    char *point  = dest;
    int i;

    while (*point != '\0')
    {
        point++;
    }

    for (i = 0; i <= n; i++)
    {
        *point = src[i];
        point++;

        if (src[i] == '\0')
        {
            break;
        }
    }

    return (dest);
}