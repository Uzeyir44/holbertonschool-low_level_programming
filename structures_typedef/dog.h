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

#endif /* DOG_H */
