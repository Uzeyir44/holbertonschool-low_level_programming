#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Prototype for the provided function */
int _putchar(char c);

/**
 * struct list_s - Singly linked list node
 * @str: String stored in the node
 * @len: Length of the string
 * @next: Pointer to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prints all the values of a list and returns the number of nodes */
size_t print_list(const list_t *h);
/* returns the number of nodes */
size_t list_len(const list_t *h);
/* adds a new element in the begining */
list_t *add_node(list_t **head, const char *str);
/* returns the length of string */
int _strlen(const char *s);
/* adds new node at the end of list */
list_t *add_node_end(list_t **head, const char *str);
/* checks if the argument will be null after malloc */
list_t *check_malloc(list_t **N);
/* checks if null after strdup otherwise fills the struct */
list_t *check_strdup(list_t **M, const char *str);

#endif /* MAIN_H */

