#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table
 * @key: the key whose value is to be retrieved
 * Return: the value associated with the element or NULL if key couldn't be
 *     found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx]->next != NULL)
		return (NULL);

	if (strcmp(key, ht->array[idx]->key) == 0)
		return (ht->array[idx]->value);
	if (ht->array[idx]->next != NULL)
		return (NULL);

	node = ht->array[idx]->next;
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
