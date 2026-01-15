#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
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
 * add_node - Adds a new node at the beginning of a list
 * @head: Double pointer to the head of the list
 * @str: String to store in the new node
 *
 * Return: Address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (!(*head))
	{
		*head = malloc(sizeof(list_t));
		if (!(*head))
		{
			return (NULL);
		}
		(*head)->str = strdup(str);
		(*head)->len = _strlen(str);
		(*head)->next = NULL;
		return (*head);
	}

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = _strlen(str);
	*head = temp;
	return (*head);
}
