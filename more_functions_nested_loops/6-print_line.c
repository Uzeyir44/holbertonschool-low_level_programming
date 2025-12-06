#include "main.h"

void print_line(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (i < 0)
        {
            continue;
        }
        _putchar('_');
    }

    _putchar('\n');
}