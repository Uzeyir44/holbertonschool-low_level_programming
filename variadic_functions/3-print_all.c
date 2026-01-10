#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_int(va_list args)
{
    printf("%d", va_arg(args, int));
}

void print_char(va_list args)
{
    printf("%c", va_arg(args, int));
}

void print_string(va_list args)
{
    char *x = va_arg(args, char *);
    if (!x)
    {
        printf("(nil)");
    }
    else
    {
        printf("%s", x);
    }
}

void print_float(va_list args)
{
    printf("%f", va_arg(args, double));
}

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0, j = 0, check = 0;
    struct table arr[] = {
        {'i', print_int},
        {'c', print_char},
        {'f', print_float},
        {'s', print_string}
    };

    va_start(args, format);

    while (format && format[i])
    {
        while (j < 4)
        {
            if (format[i] == arr[j].type)
            {
                if (check != 0)
                {
                    printf(", ");
                }

                arr[j].func(args);
                check++;
            }
            j++;
        }

        i++;
        j = 0;
    }
    
    printf("\n");
    va_end(args);
}