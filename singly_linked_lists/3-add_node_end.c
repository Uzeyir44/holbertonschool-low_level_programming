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