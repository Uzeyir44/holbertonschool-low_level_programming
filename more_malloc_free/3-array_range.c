#include "main.h"
#include <stdlib.h>

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

    for (i = 0; i <= total; i++)
    {
        point[i] = min;
        min++;
    }

    return (point);
}