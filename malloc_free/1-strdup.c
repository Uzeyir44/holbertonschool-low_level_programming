#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str)
{
    char *point;
    int i;
    int size;

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
}