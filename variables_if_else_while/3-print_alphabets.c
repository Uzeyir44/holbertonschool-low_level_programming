#include <stdio.h>

/**
 * main - prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
    char c;
    char a;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

    for (a = 'A'; a <= 'Z'; a++)
    {
        putchar(a);
    }

    putchar('\n');

	return (0);
}
