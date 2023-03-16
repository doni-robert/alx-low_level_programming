#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index 'index' of a dlistint_t list
 * @head: pointer to the list
 * @index: index to delete node
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current, *previous, *after;

	if (*head == NULL)
		return (-1);

	current = *head;

	for (i = 0; i < index; i++)
	{
		previous = current;
		current = current->next;
		if (current == NULL)
                        return (-1);
		after = current->next;
	}
	if (after == NULL)
		previous->next = NULL;
	else if
	{
		previous->next = after;
		after->prev = previous;
	}

	free(current);
	return (1);
}

