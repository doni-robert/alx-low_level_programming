#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
