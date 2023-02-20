#include "main.h"

/**
 * list_dir - builds a linked list of the PATH directories
 *
 * Return: 0 if successful, -1 otherwise
 */

int list_dir()
{
	char *dir;
        const char *token;
	list_t **head;

	head = malloc(sizeof(char *));
	if (head == NULL)
		return (-1);

	dir = _getenv("PATH");
	token = strtok(dir, ":");

	while (token != NULL)
	{
		add_node_end(head, token);
		token = strtok(NULL, ":");
	}
	return (0);
}


/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: head of existing list
 * @str: string to new node
 *
 * Return: address of the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (new_node);
}
