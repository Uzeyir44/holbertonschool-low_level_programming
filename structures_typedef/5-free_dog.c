#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: pointer to dog structure
 */
void free_dog(dog_t *d)
{
	if (!d)
		exit(0);

	free(d->name);
	free(d->owner);
	free(d);
}
