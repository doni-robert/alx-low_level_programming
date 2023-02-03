#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: list to be freed
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	if (head == NULL)
		return;
	temp = ptr = *head;
	while (ptr != NULL)
	{
		temp = temp->next;
		free(ptr);
		ptr = temp;
	}
	*head = NULL;
}
