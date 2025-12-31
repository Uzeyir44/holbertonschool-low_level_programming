#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* Initializes a dog structure */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
    {
        printf("Ok\n");
        exit(98);
    }

    d->name = name;
    d->owner = owner;
	d->age = age;
}
