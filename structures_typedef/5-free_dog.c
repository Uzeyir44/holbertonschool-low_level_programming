#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{
    if (!d)
    {
        exit(98);
    }
    
    free(d->name);
    free(d->owner);
    free(d);
}