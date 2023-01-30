#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beginning of a list_t list
 *
 * @head: pointer to the list
 * @str: string to be added in node
 *
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}



