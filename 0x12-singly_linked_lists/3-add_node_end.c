#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: head of existing list
 * @str: string to new node
 *
 * Return: address of the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = NULL;

	while (head != NULL)
		**head = **head->next;
	**head->next = new_node;

	return (new_node);
}

