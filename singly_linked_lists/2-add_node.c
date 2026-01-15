#include "lists.h"
#include <stdio.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
    if (!head)
    {
        head = malloc(sizeof(list_t));
        head->str = strdup(str);
        return (head);
    }

    list_t *temp = malloc(sizeof(list_t));
    temp->next = head;
    temp->str = strdup(str);
    head = temp;
    return (head);
}