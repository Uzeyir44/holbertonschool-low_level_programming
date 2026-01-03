#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototype for initializing a dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* prints the elements of d */
void print_dog(struct dog *d);
/* defining new name for struct dog */
typedef struct dog dog_t;
/* creates a new struct variable */
dog_t *new_dog(char *name, float age, char *owner);
/* frees the memory allocated for the variable */
void free_dog(dog_t *d);

#endif /* DOG_H */
