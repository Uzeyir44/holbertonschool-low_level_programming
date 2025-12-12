#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    char *point = s;

    for (i = 0; i < n; i++)
    {
        *point = b;
        point++;
    }

    return (s);
}