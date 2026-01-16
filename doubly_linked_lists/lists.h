#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Prototype for the provided function */
int _putchar(char c);

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* print_dlistint - prints all the data in a dlistint_t list */
size_t print_dlistint(const dlistint_t *h);
/* dlistint_len - returns the number of elements in a dlistint_t list */
size_t dlistint_len(const dlistint_t *h);

#endif
