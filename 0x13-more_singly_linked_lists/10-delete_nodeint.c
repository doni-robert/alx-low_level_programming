#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 *
 * @head: the list to be inserted a node
 * @index: the position in the list to insert a node
 *
 * Return: 1 if it succeeds or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;

	previous = current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		for (;; index--)
		{
			if (previous->next == NULL)
				return (-1);
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
}


