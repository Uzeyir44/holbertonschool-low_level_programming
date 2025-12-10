#include "main.h"

int _strcmp(char *s1, char *s2)
{
    int sum;
    int i;

    i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            sum = s1[i] - s2[i];
            return (sum);
        }

        i++;
    }

    if (s1[i] == '\0')
    {
        sum = '\0' - s2[i];
    }
    else
    {
        sum = '\0' - s1[i];
    }
    
    return (sum);
}