#include "lists.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be examined
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: list whose elements are to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", _strlen(h->str),  h->str);
		h = h->next;
		i++;
	}
	return (i);
}
