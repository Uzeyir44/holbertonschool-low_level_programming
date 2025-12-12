#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i;

    for (i = 0; accept[i] != '\0'; i++)
    {
        if (accept[i] != char[i])
        {
            break;
        }
    }

    return (i);
}