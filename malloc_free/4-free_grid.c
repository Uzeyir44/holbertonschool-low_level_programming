#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: pointer to the 2D array to free
 * @height: number of rows in the grid
 *
 * Description: Frees memory allocated for a 2D integer grid.
 *              Must be called to avoid memory leaks after using alloc_grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
