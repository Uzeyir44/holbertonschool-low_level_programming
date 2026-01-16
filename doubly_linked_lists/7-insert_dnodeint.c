#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: data to insert
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1;
	dlistint_t *temp_left = *h;
	dlistint_t *temp_right;
	unsigned int num = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp1 = malloc(sizeof(dlistint_t));
	if (!temp1)
		return (NULL);

	while (temp_left != NULL)
	{
		if (num == idx - 1 && temp_left->next != NULL)
		{
			temp_right = temp_left->next;
			temp1->n = n;
			temp1->next = temp_right;
			temp1->prev = temp_left;
			temp_left->next = temp1;
			temp_right->prev = temp1;

			return (temp1);
		}

		temp_left = temp_left->next;
		num++;
	}

	free(temp1);
	return (NULL);
}
