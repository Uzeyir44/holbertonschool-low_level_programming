#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to previous memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: pointer to new memory or NULL
 */
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
        if (!ptr)
            return (NULL);
        return (ptr);
    }

    if (new_size == old_size)
        return (ptr);

    point = malloc(new_size);
    if (!point)
        return (NULL);

    for (i = 0; i < old_size; i++)
        ((char *)point)[i] = ((char *)ptr)[i];

    free(ptr);
    return (point);
}
