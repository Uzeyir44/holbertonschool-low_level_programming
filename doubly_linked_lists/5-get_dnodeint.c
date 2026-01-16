#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *temp = head->next;
    unsigned int n = 0;

    while (temp != NULL)
    {
        if (n == index)
        {
            return (temp);
        }

        temp = temp->next;
        n++;
    }

    if (n == index)
    {
        return (temp);
    }

    return (NULL);
}