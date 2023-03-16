#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the list
 * @idx: position to insert node
 * @n: data of the new node
 * Return: address of the new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *previous;
	unsigned int i;

	current = previous = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; i < idx; i++)
	{
		previous = current;
		current = current->next;
	}

	new->n = n;
	new->next = current;
	new->prev = previous;

	current->prev = new;
	previous->next = new;

	return (new);
}
