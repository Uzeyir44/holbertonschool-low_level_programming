#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the difference between the first differing characters
 */
int _strcmp(char *s1, char *s2)
{
	int sum;
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			sum = s1[i] - s2[i];
			return (sum);
		}
		i++;
	}

	if (s1[i] == '\0')
		sum = '\0' - s2[i];
	else
		sum = s1[i] - '\0';

	return (sum);
}
