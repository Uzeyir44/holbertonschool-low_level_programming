#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    const list_t *temp1 = h;
    const list_t *temp2 = h->next;
    size_t node = 1;

    while (temp2 != NULL)
    {
        if (!(temp1->str))
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", temp1->len, temp1->str);
        }

        temp1 = temp2;
        temp2 = temp2->next;
        node++;
    }

    printf("[%d] %s\n", temp1->len, temp1->str);

    return (node);
}