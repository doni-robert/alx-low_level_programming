#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: the list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

