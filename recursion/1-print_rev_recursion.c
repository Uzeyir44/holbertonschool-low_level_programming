#include "main.h"

void _print_rev_recursion(char *s)
{
    if (*s != '\0')
    {
        _print_rev_recursion(s+1);
    }

    if (*(s-1) == '\n')
    {
        _putchar('\n');
        return;
    }

    _putchar(*(s-1));
}