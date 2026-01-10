#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    char c = '\0';
    va_list args;
    unsigned int i;

    va_start(args, n);

    if (!separator)
    {
        separator = &c;
    }

    for (i = 0; i < n; i++)
    {
        if (i != 0)
        {
            printf("%s", *separator);
        }

        printf("%d", va_arg(args, int));
    }

    va_end(args);
}