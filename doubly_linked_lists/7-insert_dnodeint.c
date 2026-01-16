#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *temp1 = malloc(sizeof(dlistint_t));
    dlistint_t *temp_left = *h;
    dlistint_t *temp_right;
    unsigned int num = 0;

    while (temp_left != NULL)
    {
        if (num == idx)
        {
            if (idx == 0)
                add_dnodeint(h, n);
            temp_right = temp_left->next;
            temp1->next = temp_right;
            temp_left->next = temp1;
            temp1->prev = temp_left;
            temp_right->prev = temp1;

            return (temp1);
        }

        temp_left = temp_left->next;
        num++;
    }

    return (NULL);
}