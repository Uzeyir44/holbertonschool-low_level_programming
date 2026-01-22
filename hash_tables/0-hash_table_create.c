#include "hash_tables.h"
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table = malloc(size);
    return (new_table);
}