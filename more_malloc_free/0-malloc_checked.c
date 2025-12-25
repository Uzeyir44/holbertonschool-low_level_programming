#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
    void *point;

    point = malloc(b);

    if (!point)
    {
        exit(98);
    }

    return (point);
}