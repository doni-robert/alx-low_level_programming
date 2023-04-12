#include "hash_tables.h"

/**
 * create_node - creates a new hash_node_t node
 *
 * @key: the key of the new node
 * @value: the value of the node
 * Return: the new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	if (strcmp(key, "") == 0)
		return (NULL);
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (node->key == NULL)
		return (NULL);

	strcpy(node->key, key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}

/**
 * insert_node - inserts a new node into a hash_table
 *
 * @ht: the hash table
 * @node: the node to be inserted
 * Return: 1 if successful, 0 otherwise
 */
int insert_node(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int idx;

	if (ht == NULL || node == NULL)
		return (0);

	idx = key_index((unsigned char *)node->key, ht->size);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
		return (1);
	}
	if (check_key(ht, node, idx) == 0)
	{
		node->next = ht->array[idx]->next;
		ht->array[idx]->next = node;
	}
	return (1);
}

/**
 * check_key - checks for duplicate key in a hashtable and updates if found or
 *        inserts if no list existed
 *
 * @ht: the hash table
 * @node: the node whose key duplicity is checked
 * @idx: the current index position in the hash table
 * Return: 1 if successful, 0 otherwise
 */
int check_key(hash_table_t *ht, hash_node_t *node, unsigned long int idx)
{
	hash_node_t *list;

	if (strcmp(node->key, ht->array[idx]->key) == 0)
	{
		strcpy(ht->array[idx]->value, node->value);
		return (1);
	}
	if (ht->array[idx]->next == NULL)
	{
		ht->array[idx]->next = node;
		return (1);
	}
	list = ht->array[idx]->next;
	while (list->next != NULL)
	{
		if (strcmp(list->key, node->key) == 0)
		{
			strcpy(list->value, node->value);
			return (1);
		}
		list = list->next;
	}
	return (0);
}


/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table to add or update the key/value pair
 * @key: the key of the new element
 * @value: the value of the new element
 * Return: 1 if it succeeds, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	if (insert_node(ht, new_node) == 0)
		return (0);
	return (1);
}
