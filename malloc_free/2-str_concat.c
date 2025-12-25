#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space containing concatenated string,
 *         or NULL on failure
 * Note: treats NULL strings as empty strings
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i, j;
	char *pointer;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

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
