#include "main.h"

void puts_half(char *str)
{
    char *etm = str;

    while (*etm != '\0')
    {
        etm++;
    }

    etm = (etm + 1) / 2;

    while (*etm != '\0')
    {
        _putchar(*etm);
        etm++;
    }
}