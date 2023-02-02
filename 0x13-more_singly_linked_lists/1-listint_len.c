#include "lists.h"
/**
 * listint_len - prints all the elements of a listint_t list
 *
 * @h: list to be printed
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}

