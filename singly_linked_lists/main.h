#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Prototype for the provided function */
int _putchar(char c);

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: pointer to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prints all the values of a list and returns the number of nodes */
size_t print_list(const list_t *h);

#endif /* MAIN_H */
