#include "main.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
    int i;
    int j;
    char *point = haystack;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        if (haystack[i] == needle[0])
        {
            for (j = 1; needle[j] != '\0'; j++)
            {
                if (haystack[i+j] != needle[j])
                {
                    break;
                }
            }
        }
        if (needle[j] == '\0')
        {
            return (point);
        }
        point++;
    }
    return (NULL);
}