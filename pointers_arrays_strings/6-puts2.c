#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (c = 0; c < i; c = c + 2)
	{
		_putchar(str[c]);
	}

	_putchar('\n');
}
