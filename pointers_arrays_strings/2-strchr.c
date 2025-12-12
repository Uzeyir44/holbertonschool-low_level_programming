#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 *
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *point = s;

	while (*point != '\0')
	{
		if (*point == c)
		{
			return (point);
		}
		point++;
	}

	if (c == '\0')
	{
		return (point);
	}

	return (NULL);
}
