#include "lists.h"
#include <stdlib.h>

/**
 * del_first_element - deletes the first node of a doubly linked list
 * @head: pointer to the head pointer
 * @n_main: pointer to the current node pointer
 * @n_right: pointer to the next node pointer
 */
void del_first_element(dlistint_t **head, dlistint_t **n_main,
		       dlistint_t **n_right)
{
	*n_right = (*n_main)->next;
	*head = *n_right;
	(*n_right)->prev = NULL;
	free(*n_main);
}

/**
 * del_last_element - deletes the last node of a doubly linked list
 * @n_main: pointer to the current node pointer
 * @n_left: pointer to the previous node pointer
 */
void del_last_element(dlistint_t **n_main, dlistint_t **n_left)
{
	*n_left = (*n_main)->prev;
	(*n_left)->next = NULL;
	free(*n_main);
}

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: pointer to the head pointer
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *n_main = *head;
	dlistint_t *n_left;
	dlistint_t *n_right;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		del_first_element(head, &n_main, &n_right);
		return (1);
	}

	while (n_main != NULL)
	{
		if (num == index)
		{
			if (n_main->next == NULL)
			{
				del_last_element(&n_main, &n_left);
				return (1);
			}

			n_left = n_main->prev;
			n_right = n_main->next;
			n_left->next = n_right;
			n_right->prev = n_left;
			free(n_main);
			return (1);
		}

		n_main = n_main->next;
		num++;
	}

	return (-1);
}
