#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *current;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);

		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = temp;
	temp->prev = current;

	return (temp);
}
