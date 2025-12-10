#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *point = dest;
	int i = 0;

	while (*point != '\0')
	{
		point++;
	}

	while (src[i] != '\0')
	{
		*point = src[i];
		point++;
		i++;
	}

	*point = '\0';

	return (dest);
}
