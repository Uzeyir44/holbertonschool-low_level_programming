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

list_t *check_malloc(list_t **N)
{
    *N = malloc(sizeof(list_t));

    if (!(*N))
    {
        return (NULL);
    }

    return (*N);
}

list_t *check_strdup(list_t **M, const char *str)
{
    (*M)->str = strdup(str);

    if (!((*M)->str))
    {
        free(*M);
        return (NULL);
    }

    (*M)->len = _strlen(str);
    (*M)->next = NULL;

    return (*M);
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
		if (check_malloc(head) == NULL)
        {
            return (NULL);
        }

		if (check_strdup(head, str) == NULL)
        {
            return (NULL);
        }

		return (*head);
	}

	if (check_malloc(&temp) == NULL)
    {
        return (NULL);
    }

	if (check_strdup(&temp, str) == NULL)
    {
        return (NULL);
    }

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = temp;
	return (temp);
}
