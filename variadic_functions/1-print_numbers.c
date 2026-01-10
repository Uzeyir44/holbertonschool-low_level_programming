#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);

    if (!separator)
    {
        for (i = 0; i < n; i++)
        {
            printf("%d", va_arg(args, int));
        }
    }
    else
    {
        for (i = 0; i < n - 1; i++)
        {
            printf("%d%c", va_arg(args, int), *separator);
        }

        printf("%d", va_arg(args, int));
    }

    printf("\n");
    va_end(args);
}