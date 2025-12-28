#include "main.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *point;
    unsigned int i;
    
    if (!new_size && ptr)
    {
        free(ptr);
        return (NULL);
    }

    if (!ptr)
    {
        ptr = malloc(new_size);
        return (ptr);
    }

    if (new_size == old_size)
    {
        return (ptr);
    }

    point = malloc(new_size);
    
    for (i = 0; i < old_size; i++)
    {
        (char *)point[i] = (char *)ptr[i];
    }

    free(ptr);
    return (point);
}