#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
