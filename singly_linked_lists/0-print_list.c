#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *temp1;
	const list_t *temp2;
	size_t node = 1;

	if (!h)
	{
		return (0);
	}

	temp1 = h;
	temp2 = h->next;

	while (temp2 != NULL)
	{
		if (!(temp1->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp1->len, temp1->str);
		}

		temp1 = temp2;
		temp2 = temp2->next;
		node++;
	}

	printf("[%d] %s\n", temp1->len, temp1->str);

	return (node);
}
