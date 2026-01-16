#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to duplicate
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *current;

	if (!(*head))
	{
		*head = malloc(sizeof(list_t));
		if (!(*head))
		{
			free(*head);
			return (NULL);
		}

		(*head)->str = strdup(str);
		if (!((*head)->str))
		{
			free((*head)->str);
			free(*head);
			return (NULL);
		}
		(*head)->len = _strlen(str);
		(*head)->next = NULL;
		return (*head);
	}

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);
	if (!(temp->str))
	{
		free(temp->str);
		free(temp);
		return (NULL);
	}

	temp->len = _strlen(str);
	temp->next = NULL;
	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = temp;
	return (temp);
}
