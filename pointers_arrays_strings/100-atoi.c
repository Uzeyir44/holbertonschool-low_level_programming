#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: integer value of the number in the string
 */
int _atoi(char *s)
{
    int i = 0;
    int num = 0;
    int negative = 0;

    while (s[i] == ' ')
        i++;

    while (s[i] == '-' || s[i] == '+' || s[i] == ' ')
    {
        if (s[i] == '-')
            negative++;
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    if (negative % 2 != 0)
        num = -num;

    return (num);
}
