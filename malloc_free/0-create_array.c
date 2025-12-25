#include "main.h"

char *create_array(unsigned int size, char c)
{
    int i;
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