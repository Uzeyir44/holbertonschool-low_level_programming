#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to append
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *point = dest;
	int i;

	while (*point != '\0')
	{
		point++;
	}

	for (i = 0; i < n; i++)
	{
		*point = src[i];
		point++;

		if (src[i] == '\0')
		{
			break;
		}
	}

	return (dest);
}
