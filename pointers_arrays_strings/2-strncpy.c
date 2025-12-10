#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    char *point = dest;
    int i;

    for (i = 0; i < n; i++)
    {
        if (src[i] != '\0')
        {
            *point = src[i];
            point++;
        }
        else
        {
            break;
        }
    }

    while (i < n)
    {
        *point = '\0';
        point++;
        i++;
    }
    
    return (dest);
}