#include <stdio.h>

/**
 * main - prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
