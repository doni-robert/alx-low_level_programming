#include "lists.h"
/**
 * pop_listint -  function that deletes the head node of a listint_t
 *    linked list, and returns the head node’s data (n)
 *
 * @head: pointer to the head of the node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!(*head))
		return (0);

	temp = *head;
	n = temp->n;
	temp = temp->next;

	free(*head);
	*head = temp;

	return (n);
}
