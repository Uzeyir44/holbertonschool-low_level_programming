#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma = 0;
	hash_node_t *node;

	if (ht != NULL)
	{
		printf("{");

		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				if (comma != 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				comma++;
			}
		}

		printf("}\n");
	}
}
