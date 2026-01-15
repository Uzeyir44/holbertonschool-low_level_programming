#include "lists.h"
#include <stdio.h>

size_t list_len(const list_t *h)
{
    const list_t *temp;
    size_t num = 1;

    if (!h)
    {
        return (0);
    }

    temp = h;

    while (temp->next != NULL)
    {
        num++;
        temp = temp->next;
    }

    return (num);
}