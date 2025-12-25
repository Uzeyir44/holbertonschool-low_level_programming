#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D integer grid initialized to 0
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **pointer;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointer = malloc(height * sizeof(int *));

	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pointer[i] = malloc(width * sizeof(int));

		if (pointer[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(pointer[j]);
			}
			free(pointer);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			pointer[i][j] = 0;
		}
	}

	return (pointer);
}
