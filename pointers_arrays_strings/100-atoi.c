#include "main.h"

/**
 * _atoi - converts the first integer found in a string to an int
 * @s: input string
 *
 * Return: integer value of the first number found
 */
int _atoi(char *s)
{
    int i = 0;
    int num = 0;
    int negative = 0;
    int found_digit = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
        {
            if (!found_digit)
                negative++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            found_digit = 1;
            num = num * 10 + (s[i] - '0');
        }
        else
        {
            if (found_digit)
                break;
        }
        i++;
    }

    if (negative % 2 != 0)
        num = -num;

    return (num);
}
