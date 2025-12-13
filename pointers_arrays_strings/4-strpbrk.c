#include "main.h"
#include <stdio.h>

char *_strpbrk(char *s, char *accept)
{
    char *point = s;
    int i;
    int g;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (g = 0; accept[g] != '\0'; g++)
        {
            if (*point == accept[g])
            {
                return (point);
            }
        }

        point++;
    }

    return (NULL);
}