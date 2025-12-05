#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar('0' + hour);
			}
			else
			{
				_putchar('0' + (hour / 10));
				_putchar('0' + (hour % 10));
			}

			_putchar(':');

			if (minute < 10)
			{
				_putchar('0');
				_putchar('0' + minute);
			}
			else
			{
				_putchar('0' + (minute / 10));
				_putchar('0' + (minute % 10));
			}

			_putchar('\n');
		}
	}
}
