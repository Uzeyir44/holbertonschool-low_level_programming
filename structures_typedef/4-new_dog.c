#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	char *point_name;
	char *point_owner;
	dog_t *dog = malloc(sizeof(dog_t));

	if (!dog)
	{
		return (NULL);
	}

	for (i = 0; *(name + i) != '\0'; i++)
		;
	for (j = 0; *(owner + j) != '\0'; j++)
		;

	dog->name = malloc(i + 1);
	if (!(dog->name))
	{
		free(dog);
		return (NULL);
	}

	point_name = dog->name;

	for (i = 0; *(name + i) != '\0'; i++)
	{
		*point_name = name[i];
		point_name++;
	}

	*point_name = '\0';

	dog->owner = malloc(j + 1);
	if (!(dog->owner))
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	point_owner = dog->owner;

	for (j = 0; *(owner + j) != '\0'; j++)
	{
		*point_owner = owner[j];
		point_owner++;
	}

	*point_owner = '\0';

	dog->age = age;

	return (dog);
}
