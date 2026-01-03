#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog = malloc(sizeof(dog_t));
    if (!dog)
    {
        return (NULL);
    }

    dog->name = malloc(strlen(name) + 1);
    if (!(dog->name))
    {
        free(dog);
        return (NULL);
    }

    strcpy(dog->name, name);

    dog->owner = malloc(strlen(owner) + 1);
    if (!(dog->owner))
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }

    strcpy(dog->owner, owner);

    dog->age = age;

    return (dog);
}