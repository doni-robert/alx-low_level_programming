#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 *
 * @head: the list to be inserted a node
 * @idx: the position in the list to insert a node
 * @n: data of the new node
 *
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(temp);
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	for (;; idx--)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

