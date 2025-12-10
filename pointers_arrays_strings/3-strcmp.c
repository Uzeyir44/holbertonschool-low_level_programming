#include "main.h"

int _strcmp(char *s1, char *s2)
{
    int sum;
    int i;

    sum = 0;
    i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        sum = sum + (s1[i] - s2[i]);
        i++;
    }

    if (s1[i] == '\0')
    {
        while (s2[i] != '\0')
        {
            sum = sum + ('\0' - s2[i]);
            i++;
        }
    }
    else
    {
        while (s1[i] != '\0')
        {
            sum = sum + ('\0' - s1[i]);
            i++;
        }
    }

    return (sum);
}