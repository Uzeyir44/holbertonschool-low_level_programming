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
        printf("Name: %c\n", d->name);
    }
    if (!(d->age))
    {
        printf("Age: (nil)\n");
    }
    else
    {
        printf("Age: %f\n", d->age);
    }
    if (!(d->owner))
    {
        printf("Owner: (nil)\n");
    }
    else
    {
        printf("Owner: %c\n", d->owner);
    }
}