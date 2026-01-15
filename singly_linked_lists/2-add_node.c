#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

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