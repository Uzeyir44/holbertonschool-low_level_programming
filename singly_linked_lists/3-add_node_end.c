#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *temp;
    list_t *current;
    
    if (!(head))
    {
        *head = malloc(sizeof(list_t));
        if (!(*head))
        {
            return (0);
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

    temp->str = strdup(str);
    temp->len = _strlen(str);
    temp->next = NULL;
    current = (*head)->next;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = temp;
    return (*head);
}