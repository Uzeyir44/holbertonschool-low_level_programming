#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
    if (!d)
    {
        exit(98);
    }

    if (!(d->name))
    {
        printf("Name: (nil)");
    }
    else
    {
        printf("Name: %p", d->name);
    }
    if (!(d->age))
    {
        printf("Age: (nil)");
    }
    else
    {
        printf("Age: %f", d->age);
    }
    if (!(d->owner))
    {
        printf("Owner: (nil)");
    }
    else
    {
        printf("Owner: %p", d->owner);
    }
}