#include "main.h"

char *_strchr(char *s, char c)
{
    char *point = s;
    while (*point != '\0')
    {
        if (*point == c)
        {
            return (point);
        }

        point++;
    }

    return (NULL);
}