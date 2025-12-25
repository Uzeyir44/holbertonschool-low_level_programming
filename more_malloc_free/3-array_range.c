#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: starting value (inclusive)
 * @max: ending value (inclusive)
 *
 * Return: pointer to array or NULL on failure
 */
int *array_range(int min, int max)
{
	int i;
	int *point;
	int total;

	if (min > max)
	{
		return (NULL);
	}

	total = max - min + 1;

	point = malloc(total * sizeof(int));

	if (!point)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		point[i] = min;
		min++;
	}

	return (point);
}
