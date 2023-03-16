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

	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = current;
		current = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		new->next = NULL;
	else
	{
		new->next = current;
		current->prev = new;
	}
	new->prev = previous;

	previous->next = new;

	return (new);
}
