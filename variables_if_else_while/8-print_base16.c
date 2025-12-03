#include <stdio.h>

/**
 * main - prints numbers 0 to 9 followed by letters a to f, then a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	char a;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
