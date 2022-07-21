#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 *     of a listint_t linked list.
 *
 * @head: head of the list
 * @index: index of the node, starting at 0
 * Return: nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		while (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
