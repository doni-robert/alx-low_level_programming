#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list dlistint_t list
 *
 * @head: pointer to the list
 * @n: integer to be added in the new node
 * Return: address of the new element or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	*head = new_node;
	return (new_node);
}
