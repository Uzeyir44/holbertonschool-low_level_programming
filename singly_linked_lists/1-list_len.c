#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t num = 1;

	if (!h)
	{
		return (0);
	}

	temp = h;

	while (temp->next != NULL)
	{
		num++;
		temp = temp->next;
	}

	return (num);
}
