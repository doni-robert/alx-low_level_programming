#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 *
 * @head: the list whose head node is to be deleted
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	temp = *head;
	if (temp == NULL)
		return (0);
	{
		n = temp->n;
		temp = temp->next;
		free(*head);
		*head = temp;
		return (n);
	}
}
