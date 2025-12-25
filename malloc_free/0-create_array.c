#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char arr[] = malloc(size);

    if (size <= 0)
    {
        return (NULL);
    }

    for (i = 0; i < size; i++)
    {
        arr[i] = c;
    }

    return (arr);
}