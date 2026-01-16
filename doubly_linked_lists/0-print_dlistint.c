#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *temp;
    temp = h;
    size_t num = 1;

    while (temp->next != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
        num++;
    }

    printf("%d\n", temp->n);
    return (num);
}