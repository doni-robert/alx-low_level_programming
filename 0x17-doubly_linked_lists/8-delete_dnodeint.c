#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index 'index' of
 * a dlistint_t list
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
	if (index == 0)
	{
		if (current->next == NULL)
		{
			free(current);
			*head = NULL;
		}
		else
		{
			after = current->next;
			after->prev = NULL;
			free(current);
			*head = after;
		}
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		previous = current;
		current = current->next;
		if (current == NULL)
			return (-1);
		after = current->next;
	}
	if (after == NULL)
	{
		previous->next = NULL;
		free(current);
		return (1);
	}
	previous->next = after;
	after->prev = previous;
	free(current);
	return (1);
}

