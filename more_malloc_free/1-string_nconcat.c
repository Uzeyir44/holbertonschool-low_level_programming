#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i, j;
	char *pointer;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	if (size2 > n)
	{
		size2 = n;
	}

	pointer = malloc((size1 + size2 + 1) * sizeof(char));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		pointer[i] = s1[i];

	for (j = 0; j < size2; j++, i++)
		pointer[i] = s2[j];

	pointer[i] = '\0';

	return (pointer);
}
