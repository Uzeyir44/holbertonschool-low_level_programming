#include "dog.h"
#include <string.h>
#include <stdlib.h>

/* Initializes a dog structure */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	if (d->name)
		strcpy(d->name, name);

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner)
		strcpy(d->owner, owner);

	d->age = age;
}
