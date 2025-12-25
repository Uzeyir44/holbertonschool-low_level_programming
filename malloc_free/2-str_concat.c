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

	/* Treat NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Calculate length of s1 */
	while (s1[size1] != '\0')
		size1++;

	/* Calculate length of s2 */
	while (s2[size2] != '\0')
		size2++;

	/* Allocate memory (+1 for null terminator) */
	pointer = malloc((size1 + size2 + 1) * sizeof(char));

	/* Return NULL if allocation fails */
	if (pointer == NULL)
		return (NULL);

	/* Copy first string */
	for (i = 0; i < size1; i++)
		pointer[i] = s1[i];

	/* Copy second string */
	for (j = 0; j < size2; j++, i++)
		pointer[i] = s2[j];

	/* Add null terminator */
	pointer[i] = '\0';

	return (pointer);
}
