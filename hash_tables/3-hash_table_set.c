#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	/* Check if key already exists */
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (!node->value)
				return (0);
			return (1);
		}
		node = node->next;
	}

	/* Key does not exist: create new node */
	tmp = malloc(sizeof(hash_node_t));
	if (!tmp)
		return (0);

	tmp->key = strdup(key);
	if (!tmp->key)
	{
		free(tmp);
		return (0);
	}

	tmp->value = strdup(value);
	if (!tmp->value)
	{
		free(tmp->key);
		free(tmp);
		return (0);
	}

	/* Insert at beginning (chaining) */
	tmp->next = ht->array[index];
	ht->array[index] = tmp;

	return (1);
}
