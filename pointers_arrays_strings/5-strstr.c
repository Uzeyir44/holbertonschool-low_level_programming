#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to beginning of located substring,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}
