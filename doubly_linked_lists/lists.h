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
/* adds new element at to the begining of the list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/* adds new elemnt to the end of the list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/* frees the doubly linked list */
void free_dlistint(dlistint_t *head);
/* returns the element of the list by index */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/* returns the sum of all elements in the list */
int sum_dlistint(dlistint_t *head);
/* inserts node to the given position */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/* deletes element of the list by index */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
/* deletes the first element of the list */
void del_first_element(dlistint_t **head, dlistint_t **main_n, dlistint_t **n_right);
/* deletes the last element of the list */
void del_last_element(dlistint_t **main_n, dlistint_t **n_left);

#endif
