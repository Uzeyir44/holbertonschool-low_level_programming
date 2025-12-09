#include "main.h"

void rev_string(char *s)
{
    int i;
    int c;
    char a;
    
    i = 0;
    a = 'a';

    while (s[i] != '\0')
    {
        i++;
    }

    for (c = 0; c <= (i/2); c++)
    {
        a = s[c];
        s[c] = s[i-c];
    }
}