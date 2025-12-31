#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void print_dog(struct dog *d)
{
    if (!d)
    {
        exit(98);
    }

    if (!(d->name))
    {
        printf("Name: (nil)\n");
    }
    else
    {
        printf("Name: %s\n", d->name);
    }

    printf("Age: %f\n", d->age);

    if (d->owner == NULL)
    {
        printf("Owner: (nil)\n");
    }
    else
    {
        printf("Owner: %s\n", d->owner);
    }
}