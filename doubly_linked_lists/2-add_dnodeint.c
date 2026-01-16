#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *temp;
    
    if (!(*head))
    {
        *head = malloc(sizeof(dlistint_t));

        if (!(*head))
        {
            return (NULL);
        }

        (*head)->n = n;
        (*head)->next = NULL;
        (*head)->prev = NULL;

        return (*head);
    }

    temp = malloc(sizeof(dlistint_t));
    if (!temp)
    {
        return (NULL);
    }

    temp->n = n;
    temp->next = *head;
    (*head)->prev = temp;
    temp->prev = NULL;
    *head = temp;
    return (temp);
}