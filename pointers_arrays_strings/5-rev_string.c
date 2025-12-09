#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int c;
	char a;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (c = 0; c < i / 2; c++)
	{
		a = s[c];
		s[c] = s[i - 1 - c];
		s[i - 1 - c] = a;
	}
}
