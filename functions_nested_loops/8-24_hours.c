#include "main.h"

void jack_bauer(void)
{
    int hour;
    int minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            if hour < 10
            {
                if (minute < 10)
                {
                    _putchar('0');
                    _putchar('0' + hour);
                    _putchar(':');
                    _putchar('0');
                _   _putchar('0' + minute);
                }
                else
                {
                    _putchar('0');
                    _putchar('0' + hour);
                    _putchar(':');
                _   _putchar('0' + minute);
                }
            }
            else
            {
                if (minute < 10)
                {
                    _putchar('0' + hour);
                    _putchar(':');
                    _putchar('0');
                _   _putchar('0' + minute);
                }
                else
                {
                    _putchar('0' + hour);
                    _putchar(':');
                _   _putchar('0' + minute);
                }
            }
        }
    }
}
