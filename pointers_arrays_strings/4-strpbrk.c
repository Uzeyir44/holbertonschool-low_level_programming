#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing characters to match
 *
 * Return: pointer to the first matching character in s,
 * or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *point = s;
	int i;
	int g;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (g = 0; accept[g] != '\0'; g++)
		{
			if (*point == accept[g])
			{
				return (point);
			}
		}
		point++;
	}

	return (NULL);
}
