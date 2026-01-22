#include "hash_tables.h"
#include <stdlib.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *tmp = malloc(sizeof(hash_node_t));
    if (tmp == NULL)
        return (0);

    index = key_index(key, ht->size);
    tmp->key = strdup(key);
    if (tmp->key == NULL)
    {
        free(tmp);
        return (0);
    }
    tmp->value = strdup(value);
    if (tmp->value == NULL)
    {
        free(tmp->key);
        free(tmp);
        return (0);
    }

    tmp->next = NULL;

    if (ht->array[index] == NULL)
    {
        ht->array[index] = tmp;
    }
    else
    {
        tmp->next = ht->array[index];
        ht->array[index] = tmp;
    }

    return (1);
}