#include <stdio.h>

/**
 * main - prints numbers 0 to 9 separated by ", "
 *         and ends with a '$' character
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('$');

	return (0);
}
