#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the node at the given index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	while (temp != NULL)
	{
		if (n == index)
			return (temp);

		temp = temp->next;
		n++;
	}

	if (n == index)
		return (temp);

	return (NULL);
}
