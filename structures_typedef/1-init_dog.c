#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Initializes a dog structure
 * @d: pointer to the dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
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
