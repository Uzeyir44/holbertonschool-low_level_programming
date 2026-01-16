#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t num;

	if (h == NULL)
		return (0);

	temp = h;
	num = 1;

	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num++;
	}

	printf("%d\n", temp->n);
	return (num);
}
