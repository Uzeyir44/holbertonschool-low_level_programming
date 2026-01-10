#include <variadic_functions.h>
#include <stdarg.h>
#include <stdio.h>

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
