#include "lists.h"

/**
 * free_dlistint - freees a dlistint_t list
 * @head: pointer to the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
