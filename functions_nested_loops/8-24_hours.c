#include "main.h"

void jack_bauer(void)
{
    int hour;
    int minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            if (hour < 10)
            {
                if (minute < 10)
                {
                    _putchar('0');
                    _putchar('0' + hour);
                    _putchar(':');
                    _putchar('0');
                    _putchar('0' + minute);
                    _putchar('\n');
                }
                else
                {
                    _putchar('0');
                    _putchar('0' + hour);
                    _putchar(':');
                    _putchar('0' + (minute / 10));
                    _putchar('0' + (minute % 10));
                    _putchar('\n');
                }
            }
            else
            {
                if (minute < 10)
                {
                    _putchar('0' + (hour / 10));
                    _putchar('0' + (hour % 10));
                    _putchar(':');
                    _putchar('0');
                    _putchar('0' + minute);
                    _putchar('\n');
                }
                else
                {
                    _putchar('0' + (hour / 10));
                    _putchar('0' + (hour % 10));
                    _putchar(':');
                    _putchar('0' + (minute / 10));
                    _putchar('0' + (minute % 10));
                    _putchar('\n');
                }
            }
        }
    }
}
