#include "main.h"

void print_to_98(int n)
{
    while (n <= 98)
    {
        if (n>=10)
        {
            _putchar('0' + (n / 10));
        }

        _putchar('0' + (n % 10));
        n++;
    }
}