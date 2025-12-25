#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string in newly allocated memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *point;
	int i;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
		size++;
	}

	size++;

	point = malloc(size * sizeof(char));
	if (!point)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		point[i] = *(str + i);
	}

	return (point);
    