#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **pointer;
    int i, j;

    pointer = malloc(width*height*sizeof(int));

    if (!pointer)
    {
        return (NULL);
    }

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            pointer[i][j] = 0;
        }
    }

    return (pointer);
}