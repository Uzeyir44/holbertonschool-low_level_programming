#include "lists.h"
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head != NULL)
    {
        temp = head->next;
        if (head->prev != NULL)
        {
            free(head->prev);
        }

        free(head);
        head = temp;
    }
}