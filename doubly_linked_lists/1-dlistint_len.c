#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h);
{
	const dlistint_t *temp;
	size_t num;

	if (h == NULL)
		return (0);

	temp = h;
	num = 1;

	while (temp->next != NULL)
	{
		temp = temp->next;
		num++;
	}

	return (num);
}
