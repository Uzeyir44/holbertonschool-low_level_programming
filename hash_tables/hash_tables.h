#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string (unique in the hash table)
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 *
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our hash table to use a chaining collision handling.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Creates a new hash table */
hash_table_t *hash_table_create(unsigned long int size);
/* makes hashing using djb2 algorithm */
unsigned long int hash_djb2(const unsigned char *str);
/* returns the index for the key */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
/* adds new element to the hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/* if keys equal changes the value to the new one */
int equal_key(hash_node_t *node, const char *key, const char *value);
/* returns the value associated with the key */
char *hash_table_get(const hash_table_t *ht, const char *key);

#endif /* HASH_TABLES_H */
