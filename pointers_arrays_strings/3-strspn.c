#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i;
    int j;
    int g;
    int check;

    for (j = 0; accept[j] != '\0', j++)
    {
        j++;
    }

    for (i = 0; s[i] != '\0'; i++)
    {
        check = 0;
        for (g = 0; g <= j; g++)
        {
            if (s[i] == accept[g])
            {
                check = 1;
            }
        }

        if (check == 0)
        {
            return(i)
        }
    }

    return (i);
}