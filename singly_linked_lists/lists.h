#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Prototype for the provided function */
int _putchar(char c);

/* structure for nodes */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prints all the values of a list and returns the number of nodes */
size_t print_list(const list_t *h);

#endif /* MAIN_H */
