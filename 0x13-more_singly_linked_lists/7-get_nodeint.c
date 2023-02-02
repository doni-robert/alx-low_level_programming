#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of a listint_t linked list
 *
 * @head: the listint_t list
 * @index: index of the node to be returned
 *
 * Return: the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

