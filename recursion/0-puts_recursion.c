#include "main.h"

void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        return ('\n')
    }

    _putchar(*s);

    return (_puts_recursion(s+1));
}