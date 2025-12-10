#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @p: string to modify
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *p)
{
	int i;

	i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		i++;
	}

	return (p);
}
