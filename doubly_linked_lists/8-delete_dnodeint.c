#include "lists.h"
#include <stdlib.h>

void del_first_element(dlistint_t **head, dlistint_t **main_n, dlistint_t **n_right)
{
    *n_right = (*n_main)->next;
    *head = *n_right;
    (*n_right)->prev = NULL;
    free(*n_main);
}

void del_last_element(dlistint_t **main_n, dlistint_t **n_left)
{
    *n_left = (*n_main)->prev;
    (*n_left)->next = NULL;
    free(*n_main);
}

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *n_main = *head;
    dlistint_t *n_left;
    dlistint_t *n_right;
    unsigned int num = 0;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        del_first_element(head, &n_main, &n_right);
        return (1);
    }

    while (n_main != NULL)
    {
        if (num == index)
        {
            if (n_main->next == NULL)
            {
                del_last_element(&n_main, &n_left);
                return (1);
            }

            n_left = n_main->prev;
            n_right = n_main->next;
            n_left->next = n_right;
            n_right->prev = n_left;
            free(n_main);
            return  (1);
        }

        n_main = n_main->next;
        num++;
    }

    return (-1);
}