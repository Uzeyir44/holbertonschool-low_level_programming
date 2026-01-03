#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    int i, j;
    dog_t *dog = malloc(sizeof(dog_t));
    if (!dog)
    {
        return (NULL);
    }

    for (i = 0; *(name + i) != '\0'; i++);
    for (j = 0; *(owner + j) != '\0'; j++);
    dog->name = malloc(i + 1);
    if (!(dog->name))
    {
        free(dog);
        return (NULL);
    }

    strcpy(dog->name, name);

    dog->owner = malloc(j + 1);
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