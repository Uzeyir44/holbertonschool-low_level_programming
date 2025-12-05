#include "main.h"

void times_table(void)
{
    int i;
    int j;
    int c;
    int b;

    c = 0;
    for (i = 0; i <= 9; i++)
    {
        b = 0;
        for (j = 0; j <= 9; j++)
        {
            if (j != 9)
            {
                if (b<10)
                {
                    _putchar('0' + b);
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');

                }
                else
                {
                    _putchar('0' + (b / 10));
                    _putchar('0' + (b % 10));
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                }
            }
            else
            {
                if (b<10)
                {
                    _putchar('0' + b);

                }
                else
                {
                    _putchar('0' + (b / 10));
                    _putchar('0' + (b % 10));
                }
            }
            b = b + c;
        }
        _putchar('\n');
        c++;
    }

}