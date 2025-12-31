#include "dog.h"
#include <string.h>
#include <stdlib.h>

/* Initializes a dog structure */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
    a->owner = owner;
	d->age = age;
}
