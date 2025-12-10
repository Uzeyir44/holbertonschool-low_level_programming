#include "main.h"

char *_strcat(char *dest, char *src)
{
    char *point = dest;
    int i;

    i = 0;

    while (*point != '\0')
    {
        point++;
    }

    while (src[i] != '\0')
    {
        *point = src[i];
        i++;
        point++;
    }

    *point = src[i];

    return (dest);
}