#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *point;
    unsigned int total;
    char *chpoint;
    unsigned int i;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }

    total = nmemb * size;

    point = malloc(total);

    if (!point)
    {
        return (NULL);
    }

    chpoint = (char *)point;

    for (i = 0; i < total; i++)
    {
        chpoint[i] = 0;
    }

    return (chpoint);
}