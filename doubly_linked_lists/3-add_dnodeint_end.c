#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *temp;
    dlistint_t *current;

    if (*head == NULL)
    {
        *head = malloc(sizeof(dlistint_t));
        if (*head == NULL)
        {
            return (NULL);
        }

        (*head)->n = n;
        (*head)->next = NULL;
        (*head)->prev = NULL;
        return (*head);
    }

    temp = malloc(sizeof(dlistint_t));
    if (temp == NULL)
    {
        return (NULL);
    }
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