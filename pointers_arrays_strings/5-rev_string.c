#include "main.h"

void rev_string(char *s)
{
    int i;
    int c;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }

    char ss[i+1];

    for (c = 0; c <= i; c++)
    {
        ss[c] = s[c];
    }

    for (c = 0; c <= i; c++)
    {
        s[c] = ss[i-c];
    }
}